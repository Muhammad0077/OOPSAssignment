My main.cpp has two header files complexclass.h and linklistclass.h

complexclass.h

In this header file of complexclass.h a class comp is created.

The private part has two variables r and i of datatype double.

The public part has the followig functions in it:
	
Default Constructor: Initializes r and i with value of 0.
Overloaded Constructor: Initializes r and i with user input values.
user_input: It takes the values of r and i from the user.
display: It displays the value of complex number on the screen.
add: It adds two complex numbers.
sub: It subtracts two complex numbers.
mul: It multiplies two complex numbers.
div: It divides two complex numbers.

linklistclass.h

In the header file of linklistclass.h a struct node and a class linklist is created.

node: It has a variable c of comp type and a pointer next of node type.

linkist:

The private part has a pointer head of node type.

The public part has the following functions in it:

Default Constructor: It points the head to NULL.
insert_at_start: It inserts a new node at the start of the linklist.
delete_at_start: It deletes the node at the start of the linklist.
insert_at_end: It inserts a new node at the end of the linklist.
delete_at_end: It deletes the node at the end of the linklist.
insert_at_mid: It inserts a new node after the position entered by the user.
delete_at_mid: It deletes the node at the position entered by the user.
value_at_pos: It displays node at the position entered by the user.
traverse: It prints all of the nodes in the linklist.

main.cpp

In the main function I created a linklist l1.
Then I created three objects named c1, c2 and c3 of comp class and gave them values of 4+5j, 3-3j and 4+3j respectively.
Then I inserted c1 at start of linklist
Then I inserted c2 and c3 at end of linklist.

4 + 5j
3 - 3j
4 + 3j

Then I added c1 and c2 and stored the result in comp c4 and inserted c4 at the end of linklist.

4 + 5j
3 - 3j
4 + 3j
7 + 2j

Then I subtracted c1 and c3 and stored the result in comp c5 and inserted c5 at the end of linklist.

4 + 5j
3 - 3j
4 + 3j
7 + 2j
0 + 2j

Then I multiplied c2 and c3 and stored the result in comp c6 inserted c6 at the end of linklist.

4 + 5j
3 - 3j
4 + 3j
7 + 2j
0 + 2j
21 - 3j

Then I deleted the node at position number 4.

4 + 5j
3 - 3j
4 + 3j
0 + 2j
21 - 3j

Then I divided c1 and c3 and stored the result in comp c7 and inserted c7 at the end of linklist.

4 + 5j
3 - 3j
4 + 3j
0 + 2j
21 - 3j
1.24 + 0.32j