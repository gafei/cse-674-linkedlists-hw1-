#include <iostream>
#include <string>
#include "linkedlist.h"
#include "doublyLinkedList.h"

singleList linkedList;
doublyList doublyLinkedList;
int main(int argc, char * argv[]){
    
//Team of FOURs

    linkedList.genDataS2();
    cout <<"Team of FOURS Singly Linked List\n ";
    cout <<"Original, using S2 Data ";
    linkedList.displayNodesByFours();


    cout << "\n";

    //cout <<"Team of Fours: \n";
    int b=4;
    for (int a = 1; a<=linkedList.countList(); a=a+4 ){
        linkedList.selectionSortFours(a,b);
        b=b+4; 

    }
    cout <<"Team of FOURS Singly Linked List";
    cout << "\nAfter S2 Singly Linked List Team of Fours Sorting:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();


//Start of Reverse S1
    cout <<"\nReverse of Singly Linked List\n ";
    linkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.reverseList();

    cout << "\nAfter S1 Singly Linked List Reverse Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

//Start of Reverse S2
    cout <<"\nReverse of Singly Linked List\n ";
    linkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.reverseList();

    cout << "\nAfter S2 Singly Linked List Reverse Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

// Start of Shuffle S1
    cout <<"\nShuffle of Singly Linked List\n ";
    linkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    linkedList.displayNodesByFours();

    cout << "\n";
    linkedList.shuffle();

    cout << "\nAfter S1 Singly Linked List Shuffle Operation:\n";
    linkedList.displayNodesByFours();
    linkedList.removeAllNodes();

// Start of Shuffle S2
    cout <<"\nShuffle of Singly Linked List\n ";
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
    cout <<"\nTeam of FOURS Doubly Linked List\n ";
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
    cout <<"\nReverse of Doubly Linked List\n ";
    doublyLinkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.reverseList();

    cout << "\nAfter S1 Reverse Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();

//Start of Reverse S2 for Doubly Linked List
    cout <<"\nReverse of Doubly Linked List\n ";
    doublyLinkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.reverseList();

    cout << "\nAfter S2 Reverse Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();



// Start of Shuffle S1
    cout <<"\nShuffle of Doubly Linked List\n ";
    doublyLinkedList.genDataS1();
    cout <<"Original, using S1 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.shuffle();

    cout << "\nAfter S1 Shuffle Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();

// Start of Shuffle S2
    cout <<"\nShuffle of Doubly Linked List\n ";
    doublyLinkedList.genDataS2();
    cout <<"Original, using S2 Data ";
    doublyLinkedList.displayNodesByFours();

    cout << "\n";
    doublyLinkedList.shuffle();

    cout << "\nAfter S2 Shuffle Doubly Linked List Operation:\n";
    doublyLinkedList.displayNodesByFours();
    doublyLinkedList.removeAllNodes();

    return 0;




}