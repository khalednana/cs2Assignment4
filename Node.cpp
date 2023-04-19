//
//  Node.cpp
//  cs2Assignment4
//
//  Created by Khaled  Nana  on 19/04/2023.
//

#include "Node.hpp"
Node::Node()
{
    this->value=0;
    this->occ=0;
    this->next=NULL;
}

void Node::addNode(Node *&head, int value,int Occur) {
    Node *newNode = new Node();
    newNode->value = value;
    newNode->occ = Occur;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node *currentNode = head;
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

void Node::removeNode(Node *&head, int value) {
    if (head == NULL) {
        return;
    }
    if (head->value == value) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *currentNode = head;
    while (currentNode->next != NULL && currentNode->next->value != value) {
        currentNode = currentNode->next;
    }
    if (currentNode->next != NULL) {
        Node *temp = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete temp;
    }
}

void Node::printList(Node *head) {
    Node *currentNode = head;
    while (currentNode != NULL) {
        cout << "Value: " << currentNode->value << ", Occurrence: " << currentNode->occ << endl;
        currentNode = currentNode->next;
    }
}


int Node::findOccurence(vector<int> x,int value)
{
    int OCC=0;
    for(auto z: x)
    {
        if (z==value) {
            OCC++;
        }
    }
    
    
    return OCC;
}

void Node::createListFromVector(Node *& head,vector<int> &vec)
{
    
    for(auto z: vec)
    {
        head->addNode(head, z,head->findOccurence(vec, z));
    }
    
    
}
int Node::returnSum(Node *head)
{
    int sum=0;
    Node *currentNode = head;
    while (currentNode != NULL) {
        sum+=currentNode->value;
        currentNode = currentNode->next;
    }
    return sum;
}
