//
//  main.cpp
//  cs2Assignment4
//
//  Created by Khaled  Nana  on 17/04/2023.
//

#include <iostream>
using namespace std;
#include <vector>
#include "Node.hpp"
void insertAfter(vector<int> &vec,int firstValue,int secondValue)
{
    int i=1;
    for(auto z: vec)
    {
        if (z==firstValue) {
            vec.insert(vec.begin()+i,secondValue);
            i++;
        }
        i++;
    }
    
}
int main() {
    int x=0;
    int i=0;
    vector<int> vec;
    while (x!=-123) {

        cout<<"Insert into vector , input -123 when you are done. ";
        cin>>x;
        if(x==-123)
            break;
        vec.insert(vec.begin()+i, x);
        i++;
    }
    for(auto z: vec)
        cout<<z<<" ";
       cout<<endl;
    Node *hea=new Node;
    hea->createListFromVector(hea, vec);
    hea->removeNode(hea, 0);
    hea->printList(hea);
    cout<<endl<<"Sum="<<hea->returnSum(hea)<<endl;
    

    
//    insertAfter(vec, 2, 9);
//    cout<<endl;
//    for(auto z: vec)
//        cout<<z<<" ";
    
//    Node *head=new Node;
//    head->addNode(head, 1);
//    head->addNode(head, 2);
//    head->addNode(head, 3);
//    head->removeNode(head, 2);
//    head->printList(head);



    
    
    return 0;
}
