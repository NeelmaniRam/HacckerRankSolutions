//============================================================================
//problem link : https://www.hackerrank.com/challenges/handshake
// Name        : Handshake.cpp
// Author      : NEELMANI RAM
// Version     :
// Copyright   : Your copyright notice
//status :
//============================================================================
#include <iostream>
using namespace std;


int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        cout<<((N*(N-1))/2)<<endl;
    }
    return 0;
}

