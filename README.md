# DS_Queue
Queue is an important data structure which stores its elements in an ordered manner.
A queue is a FIFO (First In First Out) data structure in which the element that was inserted first is the first one to be taken out. 
The elements in a queue are added at one end called 'rear' and removed from the other end called 'front'.
1. Insertion Operation :- Before inserting an element in a queue, we must first check if REAR=MAX-1, where MAX is the size of the queue, we have an overflow condition, which simply means that the queue is full. Suppose, if we wanted to add a new element in the queue, then the REAR would be incremented by 1 and the value would be stored at the position pointed by REAR.
2. Deletion Operation :- Before deleting an element from a queue, we must first check if FRONT=-1 and REAR=-1, we have an UNDERFLOW condition that means there is no element in the queue. If we want to delete an element from the queue, then the value of FRONT will be incremented. Deletion are done only from the 'FRONT' end of the queue.
