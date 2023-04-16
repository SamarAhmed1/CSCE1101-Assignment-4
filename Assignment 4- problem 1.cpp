#include <iostream>
#include <vector>
using namespace std;

void insertAfter(vector<int>& v, int firstValue, int secondValue) {
    vector<int> x; //create a vector
    for (int i = 0; i < v.size(); i++) { //loop on the orginial vector that has been inputted
        x.push_back(v[i]); //copy the orginal vector to the new vector x
        if (v[i] == firstValue) {
            x.push_back(secondValue); //if the first value was found insert the second value after it
        }
    }
    v = x;
}

int main() {
    int n, N; 
    cout << "How many integers would you like to store?";
    cin >> n; //to enter size of vector
    vector<int> v; //create a vector of type int
    for (int i = 0; i < n; i++) {
        cout << "Enter a value: ";
        cin >> N;
        v.push_back(N); //to store integers into the vector
    }
    int firstValue, secondValue;
    cout << "Enter first value, that should be found in the vector:";
    cin >> firstValue; //to use this number to check occurances

    cout << "Enter second value, that will be inserted after the first value:";
    cin >> secondValue; //to be used to insert after
    insertAfter(v, firstValue, secondValue); //call function
    // print vector after making the changes
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; //output the vector onto the screen
    }
}