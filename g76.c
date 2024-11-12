/*Write a program to print the following pattern.



Input: 5



Output:





Input format :
The input consists of an integer N that represents the number of rows and columns of the given pattern.

Output format :
The output prints the required pattern in N rows and N columns, as displayed in the question.

The elements in each row are separated by a single space.*/

#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0 && j==1)
                printf("# ");
            else if(i%2==1 && j==n)
                printf("* ");
            else
                printf("%d ",i);
        }
        printf("\n");
    }
}

