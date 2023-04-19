//
//  Node.hpp
//  cs2Assignment4
//
//  Created by Khaled  Nana  on 19/04/2023.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    int occ;
    Node * next;
    Node();
    void addNode(Node *&head, int value,int Occur);
    void removeNode(Node *&head, int value);
    void printList(Node *head);
    int findOccurence(vector<int> x,int value);
    void createListFromVector(Node *& head,vector<int> &vec);
    int returnSum(Node *head);
    
    
};


#endif /* Node_hpp */
