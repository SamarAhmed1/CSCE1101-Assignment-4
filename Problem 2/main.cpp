#include "LinkedList.h"
LinkedList createLL(vector<int> v) { // 4.function to create linked list
    LinkedList x; //create object for class LinkedList
    for (int i = 0; i < v.size(); i++) { //create a for loop depending on the size of vector
        x.addNode(v[i]); //add vector to a node to form the linked list
    }
    return x; // return linked list
}

int main() {
    vector<int> v = { 5, 6, 1, 3, 5, 8, 9, 1, 5 }; //fector containing the values of type int
    LinkedList x = createLL(v); //calls function create Linked List
    x.display(); // to display linked list onto screen
    cout << "The sum is: " << x.sumNodes() << endl; //to show the sum of values
}