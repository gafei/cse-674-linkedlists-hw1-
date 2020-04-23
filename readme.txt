Gafei Szeto
CSE 674 - Data Structures and Algorithms
Homework 1
April 9th, 2020


------------
Description
------------

In this homework, we're asked to implement two data structures, a singly linked list and a doubly linked list. Within each linked list, we must include class objects that represent both a "node" and a "list."

------------------------
Singly Linked List
------------------------

In the singly linked list, we have class called "singleNode" which represents a node object within the singly linked list. The "singleNode" includes an int "data" variable and has a pointer reference called "next" which points to the next "singleNode" object in the list.

We have an additional class called "singleList" which represents a series of "singleNodes" linked together with the "next" pointer. In this class, we define functions that allow us to manipulate the list. 


------------------------
Doubly Linked List
------------------------

In the doubly linked list, we have a class called "doublyNode" which represents a node object within the doubly linked list. The "doublyNode" includes an int "data" variable and has a pointer reference called "next" which points to the next "doublyNode" object in the list and "previous" pointer reference that points to the previous "doublyNode" object in the list. 

An additional class called "doublyList" which represents a series of "doublyNodes" linked together with the "next" and "previous" pointers. In this class, we define functions that allow us to maniupluate the doubly linked list.


---------------------------------
Team of Four - Singly Linked List
---------------------------------

To display our numbers in the "team of four" order, we perform a "modulous 4" operation on an internal counter within the displayNodesByFours() function. 

This allows us to properly display the nodes in the "team of four" format. 

In the singly linked list, the team of four sorting operation works by implementing a selection sort with parameters "start" and "end." "Start" and "end" up define the range of numbers to sort by. 

For example, to sort the first four numbers in the linked list, we would call the selectionSortFours() function with the following parameters: selectionSortFours(1,4)

Within the selectionSortFours() function, we call the getNodeData() function, which obtains "node" information prior to swapping the two nodes in place. The swapNodes() function, will swap the both the data and next pointer information for the nodes. 

At the conclusion of the selectionSortFours() function, the numbers are sorted ascending order. 


---------------------------------
Team of Four - Doubly Linked List
---------------------------------

In the doubly linked list, we reuse the same "modulous 4" operation on an internal counter within the displayNodesByFours() function. This allows us to properly display the nodes in the "team of four" format. 

In the doubly linked list, the team of four sorting operating also works by implementing a selection sort with parameters "start" and "end." "Start" and "end" define the range of numbers to sort by.

For example, to sort the first four numbers in the doubly linked list, we would call the selectionSortFours() function with the following parameters: selectionSortFours(1,4).

Within the selectionSortFours() function, we also call the getNodeData() function, which obtains "node" information prior to swapping the two nodes in place. The swapNodes() function, will swap the the data and the "next/previous" pointer information for the nodes. If any of the swapped node's "previous" pointer and "next" pointers are null, we don't swap. Adjacent nodes must also be checked to ensure that they point BACK to the original nodes to be swapped. If this doesn't occur, the next and previous pointers will not point back into the correct order.

At the conclusion of the selectionSortFours() function, the numbers are sorted ascending order. 


------------------
Reverse
------------------

In the singly linked list, we call the reverseList() function to reverse the contents of the linked list. The reverseList() function will start at the "head" of the linked list and traverse a down the linked list where a pointer called "next" stores the "current" node prior to traversing. As this pointer traverses, a pointer called "prev" is assigned to the "current->next" pointer. This pointer will point to the actual previous number. Then, we assign the current node as the previous node and the next node as the current node to move pointers. The "head" pointer is now assigned to whatever is defined in the "prev" pointer. This will list the contents of the linked list in reverse.

In the doubly linked list, we also call the reverseList() to reverse the contents of the linked list. The reverseList() function will start at the "head" of the doubly linked list and traverse down the doubly linked list where a pointer called "prev" will store the "current->previous" value. As the "head" pointer (called current) progresses down the doubly linked list, "current->next" is assigned to "current->previous." This "current->next" is then stored in the "prev" pointer and finally, the "current" node will point to "current-previous." This will swap both the next and previous pointers of as we traverse down the doubly linked list. This "head" pointer is now assigned to whatever is in the "prev->previous." This will list the contents of the doubly linked list in reverse. 

------------------
Shuffle
------------------

In the singly linked list, the shuffle algorithm is based on the below:
https://web.stanford.edu/class/cs9/sample_probs/ListShuffling.pdf

The numbers in the singly linked list is first split into two seperate lists called, "firstList" and "secondList." Both firstList and secondList will contain the linked list data split in half. If the number is odd, firstList will store the extra data node.

After the split, the actual shuffling of numbers happens with the shuffle() function. A dummy pointer node called "firsthalfTail" is used to keep track of the position in the "firstList." "firsthalfTail->next" becomes the first number in "firstList." After that, "firstList" will increment its "next" pointer to assign the first number in "secondList." This is where the shuffling happens. Then, the "secondList's" "next" pointer will increment to the next number. 

In the doubly linked list, the shuffle function is also based on the above reference. The doubly linked list is also split into two seperate lists called, "firstList" and "secondList" as well. Both firstList and secondList will contain the doubly linked list data split in half. If the number is odd, firstList will store the extra data node.

After the split, the actual shuffling of numbers happens with the shuffle() function as well. A dummy pointer is again used, called "firsthalfTail" to keep track of the position in the "firstList." Including what was stated above in the singly linked list, the shuffle function must keep track of the previous nodes. Immediately after setting the first number in "firstList" to firsthalfTail->next", we set "firstList->previous" to firstHalfTail. This allows us to keep track of the "previous" pointer. For every node that isn't null, we also assign the "firstList-previous" pointer back the "firsthalfTail->previous" pointer. This allows us to maintain both the "next" and "previous" pointer properly.  

------------------
Number Generation
------------------

To generate 100 distict numbers generation, I revised a solution proposed in this stackoverflow post:
https://stackoverflow.com/questions/36922371/generate-different-random-numbers

The genDataS2() function modifies the above post and pushes 1-100 to the vector. Once in that vector, a seed is utilized to select 100 numbers to be shuffled and inserted into the single or doubly linked list using the insertFirst() function. 

