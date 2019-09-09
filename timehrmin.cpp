

#include <iostream> 
using namespace std; 

struct TimeHrMin{

    int hourVal;
    int minuteval; 
}; 

TimeHrMin ConverHrMin(int totalTime) {
    timeHrMin timeStruct; 

    timeStruct.hourVal = totalTime/60; 
    timeStruct.minuteval = totalTime%60; 

    return timeStruct; 
}

int main() {

    int inputTime; 
    TimeHrMin travelTime; 

    cout << "Enter the total minutes"; 
    cin >> inputTime; 

    travelTime = ConvHrMin(inputTime);

    cout<<"Equals: "; 
    cout << travelTime.hourVal << " hrs "; 
    cout << travelTime.minuteval << " minutes ";


    return 0; 
}