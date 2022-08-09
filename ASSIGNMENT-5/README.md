## Assignment 2
### 1. Implement any three of the following functions. Write the required functions such as strlen(str), isUpper (ch), toLower (ch), toUpper (ch) without using library functions. You are encouraged to implement all the functions.
a. strcat (str1, str2) Appends str2 to str1
b. strncpy (dest, src, n) Copies up to n characters from src to dest string
c. strchr (str1, ch) Scans the string str1 for the first occurrence of the character
ch and returns the position
d. strset (str1, ch) Sets all characters in the string str1 to the character ch
e. strcmpi (str1, str2) Compares str1 and str2 ignoring the case sensitivity and
returns -1/0/1
f. strncat (dest, src, n) Copies atmost n characters of src to the end of dest string
![image](https://user-images.githubusercontent.com/91019132/183739714-f802b892-1c51-4dae-a97e-1b1f8aedcf17.png)
----
### 2. Comma separated currency: Comma separators are used while writing the Indian currency value. The Indian numbering system groups the rightmost three digits together (until the hundreds place), and thereafter groups by sets of two digits.
### Write a function in C format-rupee that takes a non-negative number and returns the comma separated currency value. Your function should convert the number to a string, add commas, add a prefix “Rs.”, and add decimals for paisa “.00”.
format-rupee(1500000) should return Rs.15,00,000.00
format-rupee(5004) should return Rs.5,004.00
format-rupee(155) should return Rs.155.00
format-rupee(14500000) should return Rs.1,45,00,000.00
format-rupee(0) should return Rs.-

![image](https://user-images.githubusercontent.com/91019132/183740342-7cd38197-83eb-4d5c-b274-08529ec5a04b.png)
----
