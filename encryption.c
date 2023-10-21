#include <stdio.h>
#include <stdlib.h>



int main (void) {


    
    int number;
    printf("enter a 4 digit number: ");
    scanf("%d", &number);
    int num[4];
    num[0]= number%10;
    num[1]= ((number%100)-num[0])/10;
    num[2]= ((number%1000)-num[1]-num[0])/100;
    num[3]= ((number%10000)-num[2]-num[1]-num[0])/1000;
//  int num[4]= ((number%100000)-num4-num3-num2-num1)/10000;
    printf("YOU TYPED IN: \n");
    for (int i=3; i>=0; i--) {
        printf("%d      ", num[i]);
    }
    printf("\nAFTER REPLACING OF DIGITS: \n");
    for (int i=3; i>=0; i--) {
        num[i] += 7;
        num[i] %= 10;
        printf("%d      ", num[i]);
    }
    printf("\nAFTER SWAPPING(ENCRYPTED INTEGER): \n");
    int temp;
    temp= num[1];
    num[1]= num[3];
    num[3]= temp;
    temp= num[0];
    num[0]= num[2];
    num[2]= temp;
    for (int j=3; j>=0; j--) {
        printf("%d      ", num[j]);
    } 
    printf("\nDECRYPTING THE INTEGER(RESWAPPING): \n");
    temp= num[3];
    num[3]= num[1];
    num[1]= temp;
    temp= num[2];
    num[2]= num[0];
    num[0]= temp;
    for (int j=3; j>=0; j--) {
        printf("%d      ", num[j]);
    }
   printf("\nHERE FOR TESTS: \n"); 
   for (int j=3; j>=0; j--) {
        num[j] -= 7;
        //num[j]= abs(num[j]);
        printf("%d      ", num[j]);
   }
   printf("\nTHE DECRYPTED INTEGER: \n");
   for (int j=3; j>=0; j--) {
        if (num[j]<=-1) {
            num[j]+=10;
        }
        else {
            num[j]=num[j];
        }  
        printf("%d      ", num[j]);
    }   
   


/* int first;
printf("ENTER THE NUMBER OF SQUARE AND CUBE YOU WANT TO FIND: ");
scanf("%d",&first);
printf("first       square      cube\n");
for (int count=1; count<=first; count++) {
    int square = count*count;
    int cube = count*count*count;
    printf("%d      %d      %d\n", count, square, cube);
} 


    int number;
    printf("enter a 5 digit number: ");
    scanf("%d", &number);
    int num1= number%10;
    int num2= ((number%100)-num1)/10;
    int num3= ((number%1000)-num2-num1)/100;
    int num4= ((number%10000)-num3-num2-num1)/1000;
    int num5= ((number%100000)-num4-num3-num2-num1)/10000;
    printf("%d   %d   %d   %d   %d", num5, num4, num3, num2, num1);  */






return 0;
}



 
