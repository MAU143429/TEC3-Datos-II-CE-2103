#include "src/CorrectionAlgorithms/CRC.h"
#include<bits/stdc++.h>

using namespace std;


int main() {

    //Example using CRC algorithm
    string data = "100100";
    string key = "1101";

    CRC::encodeData(data, key);

    return 0;
}
