# Arthrex_assignment
#Approach
We have to list all the candidated which were contacted before hiring or selecting the final candidate for intern.
We have been provided with who is classmate of whom and who is been selected.

Now we can do simple bfs traversal here
first we will take a queue to keep track of candidates and a set named vis to keep track of candidate visited

Now
if the selected candidate is parent ...then we will simply put it in the queue
else we will put the parent of the selected cantidate to keep track of who is been contacted.

Now we will run while loop until queue is empty.
we will pop the top from queue and iterate its friends through adjacency
and add this top into our ans

when the loop ends
The candidates vector will store the all the candidates which were contacted in this process.

Tc-O(N) // N is the number of Candidate and its friends
Sc-O(N) //N is the number of candidates.

#How to run

1.Create a cpp file in the vscode/or any compiler.

2.Copy paste this code into that file

3.Run the code
