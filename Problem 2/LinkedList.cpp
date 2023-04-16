#include "LinkedList.h"
LinkedList::LinkedList() { head = NULL; } //create the constructor and intialise the head
void LinkedList::addNode(int n) { //to search for n and check if it already exists
    Node* curr = head; 
    while (curr != NULL) {
        if (curr->info == n) {
            curr->counter++; //if data is found increase the occurence by one
            return;
        }
        curr = curr->next;
    }
    Node* N = new Node; //if n does not exist a new node will be created
    N->info= n;
    N->counter = 1;
    N->next = head;
    head = N;
}
void LinkedList::removeNode(int n){
    if (head == NULL) { //to check if node is intially empty
        return;
    }
    else if (head->info == n) { // if not then check if info of node is the same as user input
        head = head->next;
    }
    else { // if not remove node
        Node* curr = head; 
        while (curr->next != NULL) {
            if (curr->next->info == n){
                curr->next = curr->next->next;
                return;
            }
        }
    }
}
void LinkedList::display() { // to display on console
    Node* curr = head;
    while (curr != NULL) { // if linked list is not empty
        cout << curr->info << " has occured this number of times: " << curr ->counter << endl;
        curr = curr->next;
    }
}

int LinkedList::sumNodes() { //to sum the list
    Node* curr = head;
    int sum = 0;
    //pass through all the nodes in a loop and sum all of them
    while (curr != NULL) {
        sum = sum + curr->info;
        curr = curr->next;
    }
    return sum;
}