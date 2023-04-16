#include <iostream>
#include <vector>
#pragma once
using namespace std;

struct Node {
	int info;  // information found inside the link
	int counter; // to count the number of occurences of the information
	Node* next;
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	void addNode(int n); //1.to add the node
	void removeNode(int n); //2.to remove a node
	void display(); //3.to print all the elements of the linked list
	int sumNodes(); //5.sum of all nodes

};