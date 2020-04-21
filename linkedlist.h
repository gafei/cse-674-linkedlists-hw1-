//linkedList.h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class singleNode{

    public:
        int data;
        singleNode *next;

};

class singleList{

//public functions below, shared with other classes.
public: 
    singleList(); //default constructor
    ~singleList(); //destructor

    void insertFirst(int data);
    singleNode deleteFirst();
    void insertLast(int data);



    void removeAllNodes();
    bool IsEmpty();
    void displayNode(); //prints starting from head. defined internally
    void displayNodesByFours();
    void swap(singleNode *&a, singleNode *&b );
    void swapNodes(int a, int b);
    int countList();
    void selectionSort();
    singleNode getNodeData(int nodeLocation);
    void selectionSortFours(int start, int end);

    void reverseList();
    singleNode *shuffle();
    void splitList();

    void genDataS1();
    void genDataS2();


private:
    singleNode *head, *tail, *firstList, *secondList; //access to head and tail in case we need them in this class

};