//
// Created by njohnson on 6/10/21.
// Based of the code from: https://www.codespeedy.com/cpp-program-to-find-parity-of-a-number-efficiently/
//

#ifndef TEC3_DATOS_II_PARITYCHECKING_H
#define TEC3_DATOS_II_PARITYCHECKING_H

#include<bits/stdc++.h>

using namespace std;

/**
 * @brief Example code for Parity checking algorithm.
 */
class ParityChecking{
private:
    /**
     * @brief Calculates the parity on a given variable.
     * @param n the variable that gets analyzed.
     * @return 1 if it has an odd parity or 0 if an even parity.
     */
    static int check_parity(int n)
    {
        int b;

        b = n ^ (n >> 1);
        b = b ^ (b >> 2);
        b = b ^ (b >> 4);
        b = b ^ (b >> 8);
        b = b ^ (b >> 16);
        //Now b contain the parity value
        //If b is odd mean odd parity else even parity
        if (b & 1) //This is used for checking odd
            return 1;
        else
            return 0;
    }
public:
    /**
     * @brief the main function for the parity checking algorithm.
     * @param n variable that gets checked its parity.
     */
    static void callParityChecking(int n)
    {

        int ans=check_parity(n);

        if(ans==0)
            cout<<"\nEven Parity"<<endl;
        else
            cout<<"\nOdd Parity"<<endl;
    }

};
#endif //TEC3_DATOS_II_PARITYCHECKING_H
