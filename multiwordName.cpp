/* Getting a multi-word name ( 1.3.3) */

#include <iostream> 
#include <string> 

int main() {

    string fName;
    string sName;

    cout<< " Enter first name: "<< endl; 
    getline(cin, fName); 

    cout <<" Enter second name: "<< endl;
    getline(cin, sName); 

    cout<<endl; 
    cout<< "Welcome "<<fname<< " " <<sName<< endl;
    cout<< " May I call you "<< fname << " ? " << endl;

    return 0; 
}