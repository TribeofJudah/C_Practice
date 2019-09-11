
/*************************************************************************************** 

Author: Junior Masilela   
Date: 01 September 2019 

Lab 1 - COP 3331 

--> Program that can look up class information based on the CRN.
    The program promps users to enter a 5-digit-number CRN. 
    The program then validates the CRN number then searches the 
    classes textfile (data). 

*************************************************************************************/


//Initializing Dependancies 
#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std;

int main() {

    ifstream inFS;              //Input file stream 
    int CRN; 
    string sCRN;                //String variant of CRN 
    string sline;               //String for the whole line of the CRN 
    int found;                  //Integer to trigger the not found output 


    //Check to see if the file opened succesfully
    inFS.open("classes.txt");
    if (!inFS.is_open()){
        cout<< "The file could not open " << endl;
        return 1;
    }


    //User Input 
    cout << " Enter 5-digit CRN number: " ;
    cin >> CRN; 

    while(!cin){
        
        cout << "INVALID CRN .. please try again " << endl;
        cout << "Enter CRN again: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> CRN; 
    }

    while(!(inFS.eof())) {

        getline(inFS, sline);
        sCRN = sline.substr(0,5);

        if(sCRN == to_string(CRN)){

            cout << sline << endl; 
            found = 1; 
        }
    }

    //cout << found;
    //Check if the search finds the CRN or not
    if (!found){
        cout << " CRN not found " << endl; 
    }

    return 0; 
}

