Nested Loops in C
C supports nesting of loops in C. Nesting of loops is the feature in C that allows the looping of statements inside another loop. Let's observe an example of nesting loops in C.

Any number of loops can be defined inside another loop, i.e., there is no restriction for defining any number of loops. The nesting level can be defined at n times. You can define any type of loop inside another loop; for example, you can define 'while' loop inside a 'for' loop.

Syntax of Nested loop

Outer_loop  
{  
    Inner_loop  
   {  
         // inner loop statements.  
   }  
       // outer loop statements.  
}

Outer_loop and Inner_loop are the valid loops that can be a 'for' loop, 'while' loop or 'do-while' loop.

Nested for loop

The nested for loop means any type of loop which is defined inside the 'for' loop.

for (initialization; condition; update)   
{  
    for(initialization; condition; update)  
    {  
           // inner loop statements.  
    }  
    // outer loop statements.  
}  
Example of nested for loop

#include <stdio.h>  
int main()  
{  
   int n;// variable declaration  
   printf("Enter the value of n :");  
   // Displaying the n tables.  
   for(int i=1;i<=n;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   }  
Explanation of the above code

First, the 'i' variable is initialized to 1 and then program control passes to the i<=n.
The program control checks whether the condition 'i<=n' is true or not.
If the condition is true, then the program control passes to the inner loop.
The inner loop will get executed until the condition is true.
After the execution of the inner loop, the control moves back to the update of the outer loop, i.e., i++.
After incrementing the value of the loop counter, the condition is checked again, i.e., i<=n.
If the condition is true, then the inner loop will be executed again.
This process will continue until the condition of the outer loop is true.

Nested while loop

The nested while loop means any type of loop which is defined inside the 'while' loop.


while(condition)  
{  
    while(condition)  
    {  
         // inner loop statements.  
    }  
// outer loop statements.  
}

Nested do..while loop

The nested do..while loop means any type of loop which is defined inside the 'do..while' loop.

do  
{  
   do  
  {   
      // inner loop statements.  
   }while(condition);  
// outer loop statements.  
}while(condition);

