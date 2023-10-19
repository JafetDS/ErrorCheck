#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


vector<string*> VRC_EVEN_ADD(vector<string*> data) {
    for(string *info : data ){
        int m = info->length();
        int check = 0;
        for(int i = 0; i<m; i++){
            if((info->at(i))=='1'){
                check++;
            }
        }
        if(check%2==0){
            info->push_back('0');
        }else{

            info->push_back('1');
        }
    }

    return data;


}





void VRC_EVEN_CHECK(vector<string*> data){



    for(string *info : data ){
        int m = info->length();
        int check = 0;
        for(int i = 0; i<m-1; i++){
            if((info->at(i))=='1'){
                check++;
            }
        }
        if(check%2==0 && info->at(m-1)=='0'){
            cout<<"No error"<<endl;
            
        }else if (check%2!=0 && info->at(m-1)=='1'){

            cout<<"No error"<<endl;
        }else{

            cout<<"There is an error"<<endl;

        }
    }


}





vector<string*> VRC_ODD_ADD(vector<string*> data){


    for(string *info : data ){
        int m = info->length();
        int check = 0;
        for(int i = 0; i<m; i++){
            if((info->at(i))=='1'){
                check++;
            }
        }
        if(check%2==0){
            info->push_back('1');
            
        }else{

            info->push_back('0');
        }
    }
    return data;

}

void VRC_ODD_CHECK(vector<string*> data){
    for(string *info : data ){
        int m = info->length();
        int check = 0;
        for(int i = 0; i<m-1; i++){
            if((info->at(i))=='1'){
                check++;
            }
        }
        if(check%2==0 && info->at(m-1)=='1'){
            cout<<"No error"<<endl;
            
        }else if (check%2!=0 && info->at(m-1)=='0'){

            cout<<"No error"<<endl;
        }else{

            cout<<"There is an error"<<endl;

        }
    }


}


vector<string*> LRC_ADD(vector<string*> data){
    string parity = "";
    int m = data[0]->length();
    for(int i = 0; i<m; i++){
        int Xor = -1;
        for(string *info : data ){
            if (Xor==-1){
                Xor = info->at(i) - '0';
            }else{
                Xor = Xor^(info->at(i) - '0');
            } 
        }

        parity.push_back(((Xor)?'1':'0'));


        
    }
    data.push_back(new string(parity));
    return data;

}




void LRC_CHECK(vector<string*> data){
    string parity = *(data.back());
    data.pop_back();
    int m = data[0]->length();
    for(int i = 0; i<m; i++){
        int Xor = -1;
        for(string *info : data ){
            if (Xor==-1){
                Xor = info->at(i) - '0';
            }else{
                Xor = Xor^(info->at(i) - '0');
            } 
        }
        if((parity[i]- '0') != Xor){
            cout<<"There is an error"<<endl;
        }else{
            cout<<"No errors found"<<endl;
        }
    }


}