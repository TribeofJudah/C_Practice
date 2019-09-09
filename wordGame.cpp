/* Word Game program from zyBooks practice */ 

//Dependancies 
#include <iostream> 
#include <string> 

using namespace std; 

int main() {

    string wordRelative;
    string wordFood;
    string wordAdj;
    string wordTimePeriod; 

    //Retrieving users words
    cout << "Type input without spaces: "<< endl;

    cout <<"Enter the kind of relative: "<< endl;
    cin>> wordReleative; 

    cout<< "Enter the kind of food: "<< endl; 
    cin >> wordFood; 

    cout << "Enter an adjective: "<< endl;
    cin << wordAdj; 

    cout <<"Enter a Time Period: " << endl;
    cin >> wordTimePeriod; 

    //Story Telling 
    cout<< endl; 
    cout<<"My " << wordRelative << "says eating " << wordFood << endl; 
    cout<< " will make me more "<< wordAdj << ", "<< endl; 
    cout<< "so now i eat it ever " << wordTimePeriod<< "." << endl;

    return 0; 
}