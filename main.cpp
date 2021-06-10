#include "src/CorrectionAlgorithms/CRC.h"
#include "src/CorrectionAlgorithms/HammingCode.h"
#include "src/CorrectionAlgorithms/ParityChecking.h"
#include<bits/stdc++.h>

using namespace std;


int main() {
    cout << "Example for the Hamming Code Algorithm:" << endl;
    // Given message bits
    vector<int> msgBit = { 0, 1, 0, 1 };

    // Function Call
    HammingCode::findHammingCode(msgBit);

    int n = 14;
    cout << "\n\nExample for the Parity Checking algorithm using " << n<< ":";
    ParityChecking::callParityChecking(n);

    cout << "\nExample for the CRC algorithm:";
    //Example using CRC algorithm
    string data = "100100";
    string key = "1101";

    CRC::encodeData(data, key);

    return 0;
}
