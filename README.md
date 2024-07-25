# towers-of-hanoi
Non-Recursive Towers of Hanoi.

For the non-recursive towers of Hanoi assignment two functions were created, one to handle odd 
numbers and a different one to handle even numbers. Both functions use the same methods but 
with different number values. Since the number of towers does not change based on the rings 
they are declared at the start of both functions as a vector of integers which holds 3 values, 
representing the three towers. Four different values are also initialized at the start of both 
functions to signify a counter for the moves that the program has used (move), a value to signify 
which disk is suitable to be moved next (candidate), a value that signifies from which tower a 
disk that will move will come from (from), and a value for which tower the disk will move to. 
After every value is initialized, a for loop is used to fill the first tower with all the disks whilst 
leaving the other two towers empty. A while loop is also used after the for loop to continue 
iterating until all the rings that were initialized in the first tower have been moved to the second 
tower. The rings are moved using vector functions push_back and removed from their original 
tower using pop_back. Once a disk is moved, the while loop looks for a tower not involved in the 
disk's movement and sets the from value to it for the next disk to move from a new tower. Whilst 
looking for the new from tower, the program compares the two towers not involved in movement 
and picks the one with the smallest disk in front of the vector.  The final if-else statement looks 
at which tower is closest to the from tower and suitable for movement and sets this tower the 
value of to.
