//
// Created by njohnson on 6/9/21.
// Based of the code from Geeksforgeeks: https://www.geeksforgeeks.org/hamming-code-implementation-in-c-cpp/
//

#ifndef TEC3_DATOS_II_HAMMINGCODE_H
#define TEC3_DATOS_II_HAMMINGCODE_H

#include <bits/stdc++.h>

using namespace std;

/**
 * @brief Example code for the Hamming Code algorithm.
 */
class HammingCode{

public:
    /**
     * @brief Function to generate hamming code.
     * @param msgBits the vector containing the bits in integers.
     * @param m the message bit size.
     * @param r the number of redundant bits.
     * @return returns the generated code.
     */
    static vector<int> generateHammingCode(vector<int> msgBits, int m, int r)
    {
        vector<int> hammingCode(r + m);

        for (int i = 0; i < r; ++i) {


            hammingCode[pow(2, i) - 1] = -1;
        }

        int j = 0;


        for (int i = 0; i < (r + m); i++) {

            if (hammingCode[i] != -1) {
                hammingCode[i] = msgBits[j];
                j++;
            }
        }

        for (int i = 0; i < (r + m); i++) {


            if (hammingCode[i] != -1)
                continue;

            int x = log2(i + 1);
            int one_count = 0;


            for (int cont = i + 2;
                 cont <= (r + m); ++cont) {

                if (cont & (1 << x)) {
                    if (hammingCode[cont - 1] == 1) {
                        one_count++;
                    }
                }
            }


            if (one_count % 2 == 0) {
                hammingCode[i] = 0;
            }
            else {
                hammingCode[i] = 1;
            }
        }

        return hammingCode;
    }

    /**
     * @brief Function to find the hamming code.
     * @param msgBit the vector message that contains the bits.
     */
    static void findHammingCode(vector<int>& msgBit)
    {

        int m = msgBit.size();

        int r = 1;

        while (pow(2, r) < (m + r + 1)) {
            r++;
        }

        vector<int> ans = generateHammingCode(msgBit, m, r);

        cout << "Message bits are: ";
        for (int i : msgBit)
            cout << i << " ";

        cout <<"\nHamming code is: " ;
        for (int an : ans)
            cout << an << " ";
    }
};
#endif //TEC3_DATOS_II_HAMMINGCODE_H
