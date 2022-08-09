## Assignment 4
### 1. Write a program that accepts a set of digits (0 to 9) as input and prints a vertical histogram representing the occurrences of each digit. Test your program with the set of 13 digits: 1, 7, 2 ,9
,6, 7, 1, 3, 7, 5, 7, 9, 0<br>
Example<br>
Enter a Number : 12<br>
Enter 12 digits:<br>
1,7,2,9,6,7,1,3,7,5,7,9<br>
*<br>
*<br>
* * *<br>
*** *** *<br>
0123456789<br>
![image](https://user-images.githubusercontent.com/91019132/183746012-44018ff2-29ef-4980-b305-16bb9fe77872.png)
----
### 2. Given an array of integers, push all the zero’s of a given array to the end of the array. Write a program in C that implements the function ushZerosToEnd(int arr[], int n).
Example:<br>
Input : arr[] = {5, 3, 0, 1, 3, 0, 8, 0};<br>
Output : arr[] = {5, 3, 1, 3, 8, 0, 0, 0};<br>
Input : arr[] = {10, 20, 0, 0, 0, 30, 60};<br>
Output : arr[] = {10, 20, 30, 60, 0, 0, 0};<br>
![image](https://user-images.githubusercontent.com/91019132/183746492-f7d53f64-ccdc-45c7-8279-24b88cebbddf.png)
----
### 3. Write an interactive C program to process the exam scores for a group of students in a C programming course. Begin by specifying the number of exam scores for each student (assume this value is the same for all students in the class). Then enter each student’s name and exam scores. Calculate an average score for each student, and an overall class average (an average of the individual student averages). Display the overall class average, followed by the name, the individual exam scores and the average score for each student. Store the student names in a two-dimensional character array, and store the exam scores in a two-dimensional floating-point array. Make the program as general as possible. Label the output clearly. Test the program using the following set of student exam grades.
Adams 45 80 80 95 55 75<br>
Brown 60 50 70 75 55 80<br>
Davis 40 30 10 45 60 55<br>
Fisher 0 5 5 0 10 5<br>
Hamilton 90 85 100 95 90 90<br>
Jones 95 90 80 95 85 80<br>
Ludwig 35 50 55 65 45 70<br>
Osborne 75 60 75 60 70 80<br>
Prince 85 75 60 85 90 100<br>
Richards 50 60 50 35 65 70<br>
Smith 70 60 75 70 55 75<br>
Thomas 10 25 35 20 30 10<br>
Wolfe 25 40 65 75 85 95<br>
Zorba 65 80 70 100 60 95<br>
#### a) Modify this program to allow for unequal weightage of the individual exam scores. In particular, assume that each of the first four exams contributes 15 percent to the final score, and each of the last two exams contributes 20 percent.
![image](https://user-images.githubusercontent.com/91019132/183747483-3433f157-5c1d-4598-8a7d-6dc772c5bda1.png)
-----
#### b) Extend the program so that the deviation of each student's average about the overall class average will be determined. Display the class average, followed by each student's name, individual exam scores, final score, and the deviation about the class average. Be sure that the output is logically organized and clearly labeled.
![image](https://user-images.githubusercontent.com/91019132/183748004-6f952266-a6e4-4da0-aff7-c9f2e90153d6.png)
----
### 4. Implement the Example 9.14 program for piglatin generator given in the Text book (Byron Gottfried) . Modify it so that it can accommodate punctuation marks, uppercase letters and double-letter sounds.
                                             (OR)
### 5. Implement the children's hand game Rock-paper-scissors: Rock Paper Scissors is a two player game. Each player chooses one of rock, paper or scissors, without knowing the other player's
choice. The winner is decided by a set of rules:<br>
• Rock's strength is doubled (temporarily) when fighting scissors, but halved (temporarily) when fighting paper.<br>
• In the same way, paper has the advantage against rock, and scissors against paper If both players choose the same thing, there is no winner for that round. For this task, the computer will be one of the players. Make 10 rounds of choice, display the score and winner.
![image](https://user-images.githubusercontent.com/91019132/183748182-5d905960-eb58-4d23-854c-d71cc08df31f.png)
----


