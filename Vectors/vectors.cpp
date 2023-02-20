
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
/*  
    This code extract integers from a string and store it in a vector using C++
    by: Cara Rono
    for: OpenGenus
*/
int main()
{
    stringstream ss;
    string str = " OpenGenus 11 22 234 test";
    cout<<" OpenGenus 11 22 234 test"<<endl;
    // store the string to string stream
    ss << str;

    //declare vector 
    vector< int > intValues;
 
    string temp;
    int number;
    while (!ss.eof()) {

        //for getting each word in the string
        ss >> temp;

        // check for integers
        if (stringstream(temp) >> number){
            // if it is an integer value will be pushed to the vector
            intValues.push_back(number); 
        }

    }
    // print values inside the vector
        for (int i=0; i<intValues.size(); i++){
        cout<<intValues[i] << " "<<endl;
        }
    return 0;
}

 