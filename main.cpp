/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on September 22, 2017, 2:05 PM
 */

#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string sentence;
    getline(cin, sentence);

    for(int i ; i < sentence.length();)
    {
        if(sentence.at(i) == ' ' && sentence.at(i-1) == ' ')
        {
            sentence.erase(i-1,1);
        }
        else
        {
            i++;
        }
    }
    
    
    cout<< sentence << "\n";
    return 0;
}

