//============================================================================
//problem link:https://www.hackerrank.com/challenges/kangaroo/problem
// Name        : Kangaroo.cpp
// Author      : NEELMANI RAM
// Version     :
// Copyright   : Your copyright notice
//status:accepted
//============================================================================

#include <cmath>
 #include <iostream>
 using namespace std;


int main() {
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    if(v2!=v1&&abs(x2-x1)%abs(v1-v2)==0 &&((x2>x1)&&(v1>v2)))
        cout<<"YES";
        else{
        cout<<"NO";
    }
    return 0;
}

