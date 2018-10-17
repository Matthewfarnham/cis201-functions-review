/*
File Name: main.cpp
Author: Matthew Farnham
Description: This program will prompt the user for any kind of input and then will return the amount of 'a' characters the user entered, both captial and lowercase letters.
Email: matthef6009@student.vvc.edu
Date created: Tue Oct 16 18:37:58 PDT 2018
*/


#include<iostream>
#include<string>

using namespace std;

int count_A(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower( s.at(i) );
        if(c == 'a')
        {
            count++;
        }
    }
    if(count >= 10)
            cout << "Wow, that's a lot of a's!" << endl;
            
    return count;
 }



int main()
{
    string input;
    cout << "Say something!" << endl;
    getline(cin, input);
    cout << "There are a total of " << count_A(input) << " letter a's in the string you entered." << endl;
    return 0;
}
