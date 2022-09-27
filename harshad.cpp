#include<iostream>
using namespace std;
int main()
{
    int hdno;
 cout << "\n\n Check whether a number is Harshad Number or not: \n";
 cout << " ---------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> hdno;
 
     if( chkHarshad(hdno))
        cout << " The given number is a Harshad Number."<<endl;
    else
        cout << " The given number is not a Harshad Number."<<endl;
    return 0;

}
