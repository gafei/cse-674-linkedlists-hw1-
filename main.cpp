#include <iostream>
#include <string>
#include "linkedlist.h"
#include "doublyLinkedList.h"

#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

singleList linkedList;
doublyList doublyLinkedList;
int main(int argc, char * argv[]){
    
//Team of FOURs

    linkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    linkedList.displayNodesByFours();


    cout << "\n";

    //cout <<"Team of Fours: \n";
    int b=4;
    for (int a = 1; a<=linkedList.countList(); a=a+4 ){
        linkedList.selectionSortFours(a,b);
        b=b+4; 

    }
    cout << "\nAfter S2 Singly Linked List Team of Fours Sorting:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();


//Start of Reverse S1
    linkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.reverseList();

    cout << "\nAfter S1 Singly Linked List Reverse Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

//Start of Reverse S2

    linkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.reverseList();

    cout << "\nAfter S2 Singly Linked List Reverse Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

// Start of Shuffle S1

    linkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.shuffle();

    cout << "\nAfter S1 Singly Linked List Shuffle Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

// Start of Shuffle S2
    linkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.shuffle();

    cout << "\nAfter S2 Singly Linked List Shuffle Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

// Start Team of Fours for Doubly Linked List 
    cout <<"Start of Doubly linked list: \n";
    doublyLinkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    doublyLinkedList.displayNodesByFours();


    cout << "\n";

    int d=4;
    for (int c = 1; c<=doublyLinkedList.countList(); c=c+4 ){
        doublyLinkedList.selectionSortFours(c,d);
        d=d+4; 

    }
    cout << "\nAfter S2 Team of Fours Doubly Linked List Sorting:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();
    cout << "\n";
    
//Start of Reverse S1 for Doubly Linked List 
    doublyLinkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.reverseList();

    cout << "\nAfter S1 Reverse Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();

//Start of Reverse S2 for Doubly Linked List

    doublyLinkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.reverseList();

    cout << "\nAfter S2 Reverse Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();



// Start of Shuffle S1

    doublyLinkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.shuffle();

    cout << "\nAfter S1 Shuffle Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();

// Start of Shuffle S2
    doublyLinkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.shuffle();

    cout << "\nAfter S2 Shuffle Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();



/*********************

    doublyLinkedList.insertFirst(78); //tail
    doublyLinkedList.insertFirst(77);
    doublyLinkedList.insertFirst(76);
    doublyLinkedList.insertFirst(75);

    doublyLinkedList.insertFirst(74);
    doublyLinkedList.insertFirst(73);
    doublyLinkedList.insertFirst(72);
    doublyLinkedList.insertFirst(71); 

    doublyLinkedList.insertFirst(70); //head
    doublyLinkedList.displayNodesByFours();
    
    doublyLinkedList.shuffle();
  //  doublyLinkedList.shuffle2();


 //   doublyLinkedList.removeAllNodes();
    doublyLinkedList.displayNodesByFours();


    cout <<" ";
**************/
    

/*****************
    cout <<"\n";
    doublyLinkedList.displayNodesByFours();
   // cout <<"\nafter swap\n";
   // doublyLinkedList.swapNodes(71,76);
   // doublyLinkedList.displayNodesByFours();
    
   // doublyLinkedList.selectionSortFours(1,4);
   // doublyLinkedList.selectionSortFours(5,8);
   // cout <<"\nafter sort\n";
   // doublyLinkedList.displayNodesByFours();

    doublyLinkedList.reverseList();
    cout <<"\nafter reverse\n";
    doublyLinkedList.displayNodesByFours();

    
    //cout <<"\nswapping again\n";
    //doublyLinkedList.swapNodes(78,71);

    doublyLinkedList.reverseList();
    cout <<"\nafter reverse again\n";
    doublyLinkedList.displayNodesByFours();


    //doublyLinkedList.selectionSortFours(1,4);
    //doublyLinkedList.selectionSortFours(5,8);
    // only do the below until the countlist amount of numbers
    int j=4;
    for(int i =1; i<=doublyLinkedList.countList(); i=i+4){
        
        doublyLinkedList.selectionSortFours(i,j);
        j = j+4;


    }



    cout <<"\nafter sort\n";
    doublyLinkedList.displayNodesByFours();
********************/

    return 0;




}