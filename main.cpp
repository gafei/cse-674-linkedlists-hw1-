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
    
    /*****
    linkedList.insertFirst(12);
    linkedList.insertFirst(11);
    linkedList.insertFirst(10);
    linkedList.insertFirst(9);

    linkedList.insertFirst(8);
    linkedList.insertFirst(7);
    linkedList.insertFirst(6);
    linkedList.insertFirst(5);

    linkedList.insertFirst(4);
    linkedList.insertFirst(3);
    linkedList.insertFirst(2);
    linkedList.insertFirst(1);
******/

/*********
     int numberArray[100];
    for(int i =100; i>0; i--){
        //cout <<"i is: " << i <<", ";
        doublyLinkedList.insertFirst(i);
        }

    *********/

/************
    std::vector<int> numbers;

    for(int i=1; i<=100; i++)       // add 1-100 to the vector
        numbers.push_back(i);

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));

    for(int i=0; i<100; i++)        // print the first 100 randomly sorted numbers
        {
            //std::cout << numbers[i] << std::endl;
            int num = numbers[i];
            //doublyLinkedList.insertFirst(num);
            linkedList.insertFirst(num);
        

        }
        *********/




/*************
    linkedList.insertFirst(0);
    linkedList.insertFirst(13);
    linkedList.insertFirst(7);
    linkedList.insertFirst(5);
    linkedList.insertFirst(8);


    linkedList.insertFirst(6);
    linkedList.insertFirst(1);
    linkedList.insertFirst(3);
    linkedList.insertFirst(2);
*****************/


/****************
    linkedList.insertFirst(18);  //tail
    linkedList.insertFirst(16);
    linkedList.insertFirst(14);
    linkedList.insertFirst(12);
    linkedList.insertFirst(10);

    linkedList.insertFirst(19);
    linkedList.insertFirst(17);
    linkedList.insertFirst(15);
    linkedList.insertFirst(13);
    linkedList.insertFirst(11);


    linkedList.insertFirst(8);
    linkedList.insertFirst(6);
    linkedList.insertFirst(4);
    linkedList.insertFirst(2);
    
    linkedList.insertFirst(9);
    linkedList.insertFirst(7);
    linkedList.insertFirst(5);
    linkedList.insertFirst(3);
    linkedList.insertFirst(1); //head
    *************/



    //linkedList.deleteFirst();
/***
    linkedList.getNodeData(1);
    linkedList.getNodeData(2);
    linkedList.getNodeData(3);
    linkedList.getNodeData(4);
    linkedList.getNodeData(5);
    linkedList.getNodeData(6);
    linkedList.getNodeData(7);
    linkedList.getNodeData(8);
    linkedList.getNodeData(9);
    ****/
    //linkedList.getNodeData(10);
    

    //linkedList.insertLast(99999);
    // cout <<"\nafter swap\n";

    //linkedList.swapNodes(6, 3);
    //linkedList.displayNode();
    //linkedList.displayNodesByFours();
    //cout <<"\n";

    //linkedList.removeAllNodes();
    //cout <<"After remove all nodes\n";
    //linkedList.displayNode();

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