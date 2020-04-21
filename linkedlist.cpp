#include "linkedlist.h"
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

singleList::singleList()
{
    // default constructor that doesn't do anything right now.
}

singleList::~singleList()
{
    // default destructor that removes nodes
    removeAllNodes();

}

void singleList::insertFirst(int data){

    singleNode *newNode = new singleNode();
    newNode->data = data;
    newNode->next = head;

    head = newNode;

}

singleNode singleList::deleteFirst(){

    singleNode *temp = head;
    head = head->next;
    return *temp;    

}

void singleList::insertLast(int data){

    singleNode *currentNode = head; //point currentNode to head
    while(currentNode->next !=NULL){

        currentNode = currentNode->next; // this loops until currentNode->next is null
    }

    // create a newNode down here
    singleNode *newNode = new singleNode();
    newNode->data = data;
    currentNode->next = newNode;

}


void singleList::removeAllNodes(){

    for(singleNode *node; !IsEmpty(); ){
            node = head->next;
            delete head;
            head = node;

            
    }

    head = tail = 0;

}

bool singleList::IsEmpty()
{ 
	// if head is NULL, then the list is empty, and we will return true
	// otherwise, we will return false
	return (head == 0); 
}




void singleList::displayNode()
{

    singleNode *node = head;
    
    std::cout <<"List from first to last: \n";
    while(node!= NULL){

         std::cout << "Data in node is: " << node->data << "\n";
         node = node->next;

    }
   

}
void singleList::displayNodesByFours(){

    singleNode *node = head;
    int counter=0;

    std::cout <<"List from first to last by four's: \n";
    while(node!= NULL){
        
         std::cout << node->data << ", ";
         node = node->next;
         counter++;

         if (counter %4==0){
            std::cout << "\n";
         }

    }
    
}

void singleList::swap(singleNode *&a, singleNode *&b ){

    // pointer reminders:
    // singleNode *&a is a reference to a pointer to a 'singleNode' object
    // singleNode *&b is a reference to a pointer to a 'singleNode' object
    // this allows you to change the memory address pointed to by the pointer 

    singleNode *temp = a;
    a = b;
    b = temp;


}

void singleList::swapNodes(int a, int b)
{
    if (a == b)
    {
        //cout <<"Numbers are the same. Not swapping."<<"\n";
        return;
    }
    
    // swap nodes here.
    
    singleNode **currentNodea = NULL; // define a currentnodea placeholder
    singleNode **currentNodeb = NULL; // define a currentnodeb placeholder
    singleNode **node = &head; //you need to reference head since it's in memory.

    // start at the head
    while(*node!=NULL){

        // as long as the *node is not empty..
        // otherwise kick out of while loop

         //std::cout << "Data in node is: " << node->data << "\n";
         if((*node)->data == a ){
            
          //  std::cout << "Found a match to " << a  <<"\n";
            currentNodea = node;
         }
         else if((*node)->data ==b){
            
           // std::cout <<"Found a match to " << b << "\n";
            currentNodeb = node;

         }

         node = (&(*node)->next);
        


    } 
    
    //if (a && b){ //true if both a and b are true, false otherwise (logical and)

        swap(*currentNodea, *currentNodeb); //swap actual data values
        swap(((*currentNodea)->next), ((*currentNodeb)->next)); //swap next pointers.
        
    //} 
    

}

int singleList::countList(){

    if ( IsEmpty() ) {
        cout <<"This is an empty Linked List";
        return 0;
    }



    singleNode *node = head;
    int count =0;
    
    while(node!= NULL){

         count++;
         node = node->next;

    }

    return count;


}

void singleList::selectionSort() {

       for(int i = 1; i <=countList(); i++){

           int min =i;
           for(int j = i+1; j <=countList(); j++){
               if((getNodeData(j)).data < (getNodeData(min)).data){
                    min = j;
               }

           }

           // swap over here
            // i and min are node data index's.
            int a, b;
            a = getNodeData(i).data; // index of i, getnodedata starts at index 1!
            b = getNodeData(min).data; // index of min

           swapNodes(a, b); //swap node swaps data in nodes
           

       }



	}

singleNode singleList::getNodeData(int nodeLocation){

        singleNode *node = head;
        
        if (nodeLocation > countList())
        {
            return *node;
        }


        for (int i=1; i< nodeLocation  && node!= NULL; i++){
            node = node->next;
        }
		    //node = node->next;
            //cout << "node is: " << node->data <<"\n";

	    return *node;

    }
    
void singleList::selectionSortFours(int start, int end) {

       for(int i = start; i <=end; i++){

           int min =i;
           for(int j = i+1; j <=end; j++){
               if((getNodeData(j)).data < (getNodeData(min)).data){
                    min = j;
               }

           }

           // swap over here
            // i and min are node data index's.
            int a, b;
            a = getNodeData(i).data; // index of i, getnodedata starts at index 1!
            b = getNodeData(min).data; // index of min

           swapNodes(a, b); //swap node swaps data in nodes
           

       }



	}	
void singleList::reverseList(){

    singleNode *prev=NULL;
    singleNode *next=NULL;
    singleNode **current = &head;

    while(*current!=NULL){
        /****
        if ((*current)->next ==NULL){
            // don't assign the next pointer here
            // since it points to NULL
            // this means this is the tail 
            (*current)->next = prev;
            prev = *current;
            *current = next;
            head = prev;
            
            return;
        }
        ****/

        next = (*current)->next;
        (*current)->next = prev;
        prev = *current;
        *current = next;

    }
    head = prev;

}
singleNode *singleList::shuffle(){

/********************************
        int remainderNodeData = getNodeData(remainderIndexNode).data; // pull out the data at the remainderindex
        int nextNumberIndex = remainderIndexNode +1; //this is the index after the remainder number
        int nextNumberData = getNodeData(nextNumberIndex).data; // data at reaminderindex +1
       
       for (int i = remainderIndexNode; remainderIndexNode<countList(); i++){
           swapNodes(remainderNodeData, nextNumberData); // keep moving remainder number until the end
           
           remainderIndexNode++;
           remainderNodeData = getNodeData(remainderIndexNode).data; // i is the index
           
           nextNumberIndex++;
           nextNumberData = getNodeData(nextNumberIndex).data; //next number index is next number

       }
********************/
        // split the list in half prior to shuffling
        splitList();
        
        singleNode dummy;
        singleNode *firsthalfTail = &dummy;
        dummy.next = NULL;

        while(1){

        if(firstList==NULL){

            firsthalfTail->next = secondList;
            break;

        }
        else if(secondList==NULL){
            firsthalfTail->next = firstList;
            break;

        }
        else
        {
            firsthalfTail->next = firstList;
            firsthalfTail =firstList;
            firstList = firstList->next;

            firsthalfTail->next = secondList;
            firsthalfTail = secondList;
            secondList = secondList->next;

        }


    }

    return (dummy.next);

}
void singleList::splitList(){

    int length = countList();
    int i;
    singleNode *current = head;
   // singleNode *firstList = NULL;
   // singleNode *secondList = NULL;

    if (length < 2){

        firstList = head;
        secondList = NULL;

    }else{

        int firsthalfLength = (length-1)/2;
        for(int i = 0; i <firsthalfLength; i++){
            current = current->next;
        }

        //define first and second half here now that we stopped counting
        firstList = head; 
        secondList = current->next; 
        current->next = NULL;

    }





}
void singleList::genDataS1(){

        for(int i =100; i>0; i--){
        
        insertFirst(i);
        }

}
void singleList::genDataS2(){


    std::vector<int> numbers;

    for(int i=1; i<=100; i++)       // add 1-100 to the vector
        numbers.push_back(i);

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));

    for(int i=0; i<100; i++)        // print the first 100 randomly sorted numbers
        {
            //std::cout << numbers[i] << std::endl;
            int num = numbers[i];
            insertFirst(num);
        

        }

}


