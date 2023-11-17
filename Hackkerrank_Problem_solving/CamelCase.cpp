//============================================================================
//problem link : https://www.hackerrank.com/challenges/camelcase
// Name        : CamelCase.cpp
// Author      : NEELMANI RAM
// Version     :
// Copyright   : Your copyright notice
//status : accepted
//============================================================================
#include <iostream>
using namespace std;
using namespace std;
int main(){
    string s;
    cin >> s;
    int counter =1;
    for(int i=0;i<s.length();i++)
        {
        int val=(int)s[i];
        if(val<97)
            counter+=1;
    }
    cout<<counter;
    return 0;
}
