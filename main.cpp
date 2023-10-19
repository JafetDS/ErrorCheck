#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "error.cpp"
using namespace std;


int main(){

// Parity Checking EVEN 

    vector<string*> data = {new string("1110"),new string("1101"),new string("1101")};



    vector<string*> data_even = VRC_EVEN_ADD(data);
    cout<<"Parity Checking EVEN last bit Added"<<endl;
    for(string *info : data_even){
        cout<<*info<<endl;
    }
    VRC_EVEN_CHECK(data_even);
    cout<<endl;
// Parity Checking ODD

    data = {new string("1110"),new string("1101"),new string("1101")};

    vector<string*> data_odd = VRC_ODD_ADD(data);
    cout<<"Parity Checking ODD last bit Added"<<endl;
    for(string *info : data_odd){
        cout<<*info<<endl;
    }
    VRC_ODD_CHECK(data_odd);
    cout<<endl;

// Longitudinal Redundancy Check
    data = {new string("1110"),new string("1101"),new string("1101")};

    vector<string*> LRC_data = LRC_ADD(data);
    cout<<"Longitudinal Redundancy Check Matriz"<<endl;
    for(string *info : LRC_data){
        cout<<*info<<endl;
    }
    cout<<endl;
    LRC_CHECK(LRC_data);

    return 0;


}