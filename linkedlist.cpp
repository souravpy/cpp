#include<iostream>
using namespace std;

//Node Class which stores node of linked list
class Node {
public:
        int data;
        Node* next;

        // Default constructor
        Node(){
                data = 0;
                next = NULL;
        }

        //Parameterised constructor
        Node(int data){
                this ->data = data;
                this ->next = NULL;
                
        }
};

//Linked list class 
//for implementing a linked list;

class Linkedlist {
        Node* head;

public:
        // default construtctuor
        Linkedlist() { head = NULL; }

        // Function to insert a node in end
        void insertNode(int);

        // Function to print the list 
        void printList(int);

        // Function to delete a node
        void deleteNode(int);

};

void Linkedlist::deleteNode(int nodeOffset);{
        Node *temp1 = head, *temp2 = NULL;
        int Listlen = 0;

        if (head == NULL) {
                cout << "List empty." << emdl
        }

}


