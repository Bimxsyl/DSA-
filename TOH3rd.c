#include<stdio.h>
 void toh(int n, char S, char D, char A)
 {
    if(n==1) 
    {
        printf("move disc 1 from %c to %c\n ",S,D);
        return;
    }
    toh(n-1,S,A,D);
    printf("move disc %d from %c to %c\n",n,S,D);
    toh(n-1,A,D,S);
 }
 int main()
 {
    int n;
    printf("enter the disc");
    scanf("%d",&n);
    printf("the movees is:\n");
    toh(n,'S','D','A'); 
 }