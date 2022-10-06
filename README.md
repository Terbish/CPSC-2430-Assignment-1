# Assignment 1
Assignment #1 is to practice basic structures you have learned before. In this assignment, 
we focus on IO, variable allocation, functional decomposition, and error handling.  

 
Animal Shelter Management System 
 
Suppose we want to build an animal shelter, which holds only dogs and cats, and operates 
on a strictly “first on, first out” basis. Adopters must stick to the following policy to adopt 
an animal: 
1. If an adopter has no preference, this adopter must adopt the “oldest” (based on the arrival 
time) of all animals at the shelter. 
2. If an adopter wants to adopt a dog, this adopter must adopt the “oldest” (based on the 
arrival time) dog at the shelter. 
3. If an adopter wants to adopt a cat, this adopter must adopt the “oldest” (based on the 
arrival time) cat at the shelter. 
 
 
Create an animal shelter management system to implement this process. 
 
The system should include the following functions: 
1. Add an animal to the system – when adding an animal, the system needs to record the 
animal’s category (dog or cat) and animal’s name (you can name the animal whatever you 
like). 
2. Get an animal from the system. The adoption policy is defined as above. When retrieving an 
animal from the system, the system needs to tell the adopter the category and name. 
 
Besides, your system should also have the following features: 
1.  User interface. When testing your system, a user interface should be provided to 
allow users to add/get an animal and quit the system.  
2.  Error handling. The systems should include error handling. For example, when an 
adopter wants to adopt a dog/cat while 0 dog/cat is in the shelter, the system 
should give a message (such as “There is no dog/cat in the shelter now”) to the user. 
When an adopter does not specify the category, but no animal is in the shelter, the 
system should give a message too (such as “There is no animal in the shelter now”). 
 
Hint: recall the basic data structures we have learned – Linked list, stacks, queues, and 
VECTORS, which is appropriate to implement this system? 
