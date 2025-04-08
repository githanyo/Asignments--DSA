# DSA-assignments
group- OYO, Rhona, Lynet  and Puis.

Question--Write an algorithm to add two numbers entered by a user.
Algorithm to add two numbers entered by the user

1.	Start
2.	input first number X
3.	Input second number Y
4.	Set sum = X+Y.
5.	Print sum
6.	End

Question---Write an algorithm and pseudo code of calculating the sum of n elements of an array.
Algorithm
1.	Start
2.	Prompt the user to enter the value of n
3.	declare an array of size n
4.	Set sum = 0
5.	Input array elements
6.	Set sum = sum + arr[i]
7.	print the sum
8.	End.
   
Pseudocode 
1.	Start 
2.	PRINT “enter the number of elements n”
3.	READ n, i,
4.	Declare array[n]
5.	Declare SUM=0
6.	PRINT “enter”, n, ”elements”
7.	FOR i=0 to n-1:
a.	READ array[i]
b.	SUM=SUM + array[i]
8.	End FOR
9.	PRINT “Sum of array of elements”, SUM
10.	End.

Question: write an algorithm and pseudocode to swap two numbers.

Algorithm.
Step 1: Start
Step 2: Input first number X
Step 3: Input second number Y
Step 4: Print values of X and Y
Step 5: Swap the values
Step 6: Print the swapped values of X and Y
Step 7: End.

Pseudocode
Step 1: Start
Step 2: Enter first number X
Step 3: Read X
Step 4: Enter the second number Y
Step 5: Read Y
Step 6: Print "Before swapping: a=a, b=b".
Step 7: Temp=a
         a=b
         b=Temp
 Step 8: Print "After swapping: a=a,b=b".
 Step 9: End
 
Question--Write a c code that shows how to insert an element entered by the user into the middle of the array.
#include <stdio.h>

int main() {
    int array[100];
    int n, i, newElement, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);
    position = n / 2;
    for (i = n; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = newElement;
    n++;
    printf("Array after inserting the new element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
