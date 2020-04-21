#include "doublyLinkedList.h"
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

doublyList::doublyList(){

    head=NULL;
    tail=NULL;

} 
doublyList::~doublyList(){

} 

void doublyList::insertFirst(int data){
    
    doublyNode *newNode = new doublyNode();
    doublyNode **headNode = &head; //you need to reference head since it's in memory.
    
    newNode->data = data;
		
		if(IsEmpty()) {
			
			tail = newNode; // if empty, tail will refer to the new Node being created
			
		}
		else {
			
			(*headNode)->previous = newNode;
		}
		
		newNode->next = *headNode; // the new node's next field will point to the old first
		*headNode = newNode; 

}

void doublyList::removeAllNodes(){

        for(doublyNode *node; !IsEmpty(); ){
            node = head->next;
            delete head;
            head = node;

            
    }

    head = tail = 0;

}
bool doublyList::IsEmpty(){

    return (head ==0);

}
void doublyList::displayNode(){
    
    doublyNode *node = head;
    
    std::cout <<"List from first to last: \n";
    while(node!= NULL){

         std::cout << "Data in node is: " << node->data << "\n";
         node = node->next;

    }
} 
void doublyList::displayNodesByFours(){
    
    
    doublyNode *node = head;
    int counter=0;

    std::cout <<"DoublyList from first to last by four's: \n";
    while(node!= NULL){
        
         std::cout << node->data << ", ";
         node = node->next;
         counter++;

         if (counter %4==0){
            std::cout << "\n";
         }

    }

}
void doublyList::swap(doublyNode *&a, doublyNode *&b ){

    // pointer reminders:
    // singleNode *&a is a reference to a pointer to a 'singleNode' object
    // singleNode *&b is a reference to a pointer to a 'singleNode' object
    // this allows you to change the memory address pointed to by the pointer 

    doublyNode *temp = a;
    a = b;
    b = temp;

}
void doublyList::swapNodes(int a, int b){
    
    
    if (a == b)
    {
        //cout <<"Numbers are the same. Not swapping."<<"\n";
        return;
    }
    
    // swap nodes here.
    
    doublyNode **currentNodea = NULL; // define a currentnodea placeholder
    doublyNode **currentNodeb = NULL; // define a currentnodeb placeholder
    doublyNode **node = &head; //you need to reference head since it's in memory.

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
    
    // we need a found case and/or a not found case to continue onto to swap.

    //if (a && b){ //true if both a and b are true, false otherwise (logical and)

        swap(*currentNodea, *currentNodeb); //swap actual data values
        //swap(((*currentNodea)->next), ((*currentNodeb)->next)); //swap next pointers.
        //swap(((*currentNodea)->previous), ((*currentNodeb)->previous));//swap previous pointers

        if(((*currentNodea)->next) && ((*currentNodeb)->next)!=NULL){
            swap(((*currentNodea)->next), ((*currentNodeb)->next)); //swap next pointers.

        }
        if(((*currentNodea)->previous) && ((*currentNodeb)->previous)!=NULL){
            swap(((*currentNodea)->previous), ((*currentNodeb)->previous));//swap previous pointers
        }


        

        // nodes should be done swapping data/pointers now?
        // fix the adjacent node's pointers?  
        // adjacent is the one to the right of the swapped node
        // fix only the prev pointer for now
        doublyNode **adjA =NULL;
        doublyNode **adjB=NULL;

        adjA = &(*currentNodea)->next; //77? second number of the 
        adjB = &(*currentNodeb)->next; //72?

        // actually, if adjA or adjB IS NULL, return.

        if((*adjA)!=NULL){
            
            (*adjA)->previous = (*currentNodea); //77.prev should be 71?
        }
        
        
        if((*adjB)!=NULL){
            
            (*adjB)->previous = (*currentNodeb); //72.prev should be 76?

        }
        

        
        


        
    //} 

}
int doublyList::countList(){

    if ( IsEmpty() ) {
        cout <<"This is an empty Doubly Linked List";
        return 0;
    }



    doublyNode *node = head;
    int count =0;
    
    while(node!= NULL){

         count++;
         node = node->next;

    }

    return count;

}
doublyNode doublyList::getNodeData(int nodeLocation){
        
        doublyNode *node = head;
        
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
void doublyList::selectionSortFours(int start, int end){
       
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

            // somewhere in here it dies. Lets check for validity of a and b before swapping.
            // if a and b are non-zero, swap.
           // if(a && b ){
                swapNodes(a, b); //swap node swaps data in nodes
            //}

           
           

       }
    

}

void doublyList::reverseList(){
    
    doublyNode *prev=NULL;
    doublyNode **current = &head;
    while(*current!=NULL){
        
        prev = (*current)->previous;  
        (*current)->previous = (*current)->next;  
        (*current)->next = prev;              
        *current = (*current)->previous;  

    }
    if(prev!=NULL){
        
        head = prev->previous;

    }




}
doublyNode *doublyList::shuffle(){

        splitList();

        doublyNode dummy;
        doublyNode *firsthalfTail = &dummy;
        
        dummy.next = NULL;
        dummy.previous = NULL;

        while(1){

        if(firstList==NULL){

            firsthalfTail->next = secondList;
            //secondList->previous = firstList; //added
            break;

        }
        else if(secondList==NULL){
            firsthalfTail->next = firstList;
            firstList->previous  = firsthalfTail; // set value in firsthalfTail to firstList->previous
            break;

        }
        else
        {
            //remember, firstlist and secondlist are already defined
            firsthalfTail->next = firstList; //dummy's next is the first list
            firstList->previous = firsthalfTail; //set firsthalftail to be in firstList->previous
            firsthalfTail =firstList; //dummy is the firstlist
            firstList = firstList->next; //advance firstlist's next pointer
            //firstList = firstList->previous; //

            firsthalfTail->next = secondList; // set first number in secondList to firsthalftail->next
            firsthalfTail = secondList; // set number of secondlist to start of firsthalftail
            // set the "non moving number's previous node to point to "
            secondList = secondList->next; //advance secondlist's next pointer
            //if((firstList->previous) && (firstList) !=NULL)
            if(firstList!=NULL){
                firsthalfTail->previous = firstList->previous; // set firstList->previous into firsthalftail->previous

            }
            else{
               // cout <<"firstList is NULL here.";
                break;
            }
            
        }


    }

    return (dummy.next); //real result is here



}


void doublyList::splitList(){

    int length = countList();
    int i;
    doublyNode *current = head;
    doublyNode *firstPrev = NULL;
    doublyNode *secondPrev =NULL;

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
void doublyList::genDataS1(){

        for(int i =100; i>0; i--){
        
        insertFirst(i);
        }

}
void doublyList::genDataS2(){

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

