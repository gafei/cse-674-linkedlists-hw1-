//doublyLinkedList.h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class doublyNode{

    public:
        int data;
        doublyNode *next;
        doublyNode *previous;

};

class doublyList{

//public functions below, shared with other classes.
public: 
    doublyList(); //default constructor
    ~doublyList(); //destructor

    void insertFirst(int data);

    void removeAllNodes();
    bool IsEmpty();
    void displayNode(); //prints starting from head. defined internally
    void displayNodesByFours();
    void swap(doublyNode *&a, doublyNode *&b );
    void swapNodes(int a, int b);
    int countList();
    doublyNode getNodeData(int nodeLocation);
    void selectionSortFours(int start, int end);

    void reverseList();
    doublyNode *shuffle();
    void splitList();

    void genDataS1();
    void genDataS2();


private:
    doublyNode *head, *tail, *firstList, *secondList;; //access to head and tail in case we need them in this class

};