//
// Created by njohnson on 6/9/21.
// Based of the code from Geeksforgeeks: https://www.geeksforgeeks.org/modulo-2-binary-division/
//

#ifndef TEC3_DATOS_II_CRC_H
#define TEC3_DATOS_II_CRC_H

#include<bits/stdc++.h>

using namespace std;
/**
 * @brief Example code for the Cycling Redundancy Check algorithm.
 */
class CRC{
public:

        /**
         * @brief Returns XOR of 'a' and 'b'.
         * @param a the divisor string.
         * @param the sliced divident.
         * @return the string result.
         */
        static string xor1(string a, string b)
        {
            string result;

            int n = b.length();

            for(int i = 1; i < n; i++)
            {
                if (a[i] == b[i])
                    result += "0";
                else
                    result += "1";
            }
            return result;
        }


        /**
         * @brief Performs Modulo-2 division.
         * @param divident the string containing the dividend.
         * @param divisor the string containing the divisor.
         * @return the sliced dividend.
         */
        static string mod2div(string divident, const string& divisor)
        {


            int pick = divisor.length();


            string tmp = divident.substr(0, pick);

            int n = divident.length();

            while (pick < n)
            {
                if (tmp[0] == '1')


                    tmp = xor1(divisor, tmp) + divident[pick];
                else

                    tmp = xor1(string(pick, '0'), tmp) +
                          divident[pick];


                pick += 1;
            }


            if (tmp[0] == '1')
                tmp = xor1(divisor, tmp);
            else
                tmp = xor1(string(pick, '0'), tmp);

            return tmp;
        }

        /**
         * @brief Function used at the sender side to encode data by appending remainder of modular division at the end of data.
         * @param data string containing the data.
         * @param key string containing the key.
         */
        static void encodeData(const string& data, const string& key)
        {
            int l_key = key.length();

            string appended_data = (data + string(l_key - 1, '0'));

            string remainder = mod2div(appended_data, key);

            string codeword = data + remainder;
            cout << "\nRemainder : " << remainder << "\n";
            cout << "Encoded Data (Data + Remainder) :" << codeword << "\n";
        }
};
#endif //TEC3_DATOS_II_CRC_H
