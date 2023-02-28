/*1. Write a program to print the following using while loop
Puja Na. 
/*........................................First 10 Even numbers....................................*/


# include<stdio.h>
int main(){
    int num,i=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num){
        if(i%2==0)
            printf("not even num is %d\n:",i);
        else
            printf("even num is %d\n",i);
        i++;
    }
}




/*..........................b. First 10 Odd numbers...............................*/ 

# include<stdio.h>
int main(){
    int num,i=1;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        if(i%2!=0)
            printf("odd num is %d\n",i);
        i++;
    }
}



/*....................................... c. First 10 Natural numbers............................*/
# include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        printf("the Natural number is %d\n",i);
    i++;
    }
}

#include<stdio.h>
int main(){
    int num,i;
    printf("enter the range of number:");            // print n natural number using for loop
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        printf("the Natural number is %d\n",i);
}


/*........................................d. First 10 Whole numbers.............................*/

#include<stdio.h>
int main(){
    int num,i=0;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        printf("the whole number is %d\n",i);
    i++;
    }
}



# include<stdio.h>
int main(){
    int num,i;
    printf("enter the range of number:");          // print whole number using for loop
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        printf("the whole number is%d\n",i);
    }
}



/*..............................2. Write a program to print first 10 integers and their squares like
1 1
2 4
3 9……………...and so on........................................................*/

# include<stdio.h>
int main(){
    int i,num;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        printf("the square number is %d is %d\n",i,i*i);
    i++;
    }
}


# include<stdio.h>
int main(){
    int i,num;
    printf("enter the range of number:");          //sqaure of number using for loop
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("the square of number is %d is %d\n",i,i*i);
    }
}



/*...........3. Write while loop statement to print the following series:  10, 20, 30 … … 300............*/

#include<stdio.h>
int main(){
    int i=10,num;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        printf("the series of number is %d\n",i);
    i+=10;
    }
}



# include<stdio.h>
int main(){
    int i=10,num;
    printf("enter the range of number:");
    scanf("%d",&num);                           //print the series of number using for loop
    while(i<=num){
        printf("the series of number is %d\n",i);
    i+=10;
    }
}





/*.............4. Write a while loop statement to print the following series  105, 98, 91 ………7............*/
#include<stdio.h>
int main(){
    int i=105,num;
    printf("enter the number:");
    scanf("%d",&num);                        //error in this code
    while(i>=num){
        if(i%7==0){
            printf("%d\n is ",i);
            i+=7;
        }
    }
}




/*...................5. Write a program to print the first 10 natural numbers in reverse order.............*/

#include<stdio.h>
int main(){
    int num;
    int i=num;
    printf("enter the range of number:");
    scanf("%d",&i);
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
}



#include <stdio.h>
int main()
{
    int i, start;
    printf("Enter starting value: ");          //reverse of a number using for loop
    scanf("%d", &start);
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }
}





/*..................6. Write a program to print the sum of the first 10 Natural numbers................*/
#include<stdio.h>
int main(){
    int i,sum=0,num;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=num){
        sum+=i;
        i++; 
    }
printf(" sum of natural number is %d\n",sum); 

}


# include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("enter the range of number:");            //print sum of natural number using for loop
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i;
    }
printf("sum of natural number is %d\n",sum); 
    
}






/*............................7. Write a program to print the sum of the first 10 Even numbers...................*/
#include<stdio.h>
int main(){
    int even,i=1,sum=0;
    printf("enter the range of number:");
    scanf("%d",&even);
    while (i<=even)
    {
        if(i%2==0)
            sum+=i;
            // printf("%d\n",i);
        i++;
    }
printf(" sum of even number is  %d\n",sum); 
}


# include<stdio.h>
int main(){
    int even,i,sum=0;
    printf("enter the range of number:");               //print of sum of even number using for loop
    scanf("%d",&even);
    for(i=1;i<=even;i++){
        if(i%2==0)
            sum+=i;
    }
printf("%d\n",sum);
}




/*.......................8. Write a program to print a table of a number entered from the user......................*/
#include<stdio.h>
int main(){
    int num,i=1;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
    i++;
    }
}


#include<stdio.h>
int main(){
    int i,num;
    printf("enter the range of number:");               //print table using for loop
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    i++;
    }
}




/*...........9. Write a program to display all even numbers that fall between two numbers (exclusive both numbers)
entered by the user.....................*/

# include<stdio.h>
int main(){
    int num,i=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num){
        if(i%2==0)
            printf("not even num is %d\n:",i);
        else
            printf("even num is %d\n",i);
        i++;
    }
}



/*....................10. Write a program to check whether a number is prime or not..................*/

#include<stdio.h>
int main(){
    int num,c=2;
    printf("enter the range of number:");
    scanf("%d",&num);
    while(c<=num/2){
        if(c%2==0){
            printf("%d is a composite number\n",num);
            break;
        }
    }
if (c == num/2 + 1)
    printf("%d is prime.\n", num);
}




/* ....................11. Write a program to find the sum of the digits of a number accepted from the user............................*/

#include<stdio.h>  
    int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
}   



/*............................12. Write a program to find the product of the digits of a number accepted from the user...................*/
#include<stdio.h>
int main()
{
    int num, rem, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        rem = num % 10; 
        prod *= rem; // calculate product of digits
        num /=  10;  // remove the last digit
    }
    printf("%d", prod);
}



/*....................................13. Write a program to reverse the number accepted by the user......................................*/

# include<stdio.h>
int main(){
    int num,i,rem,rev;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num=num/10;
    }
printf("reverse of  A number:%d",rev);
}



/*.................................14. Write a program to display the number names of the digits of if the number is 231 then output should be
Two a number entered by user, for example Three One......................................*/

# include<stdio.h>
int main(){
    int n,r,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    while(rev>0){
        r = rev%10;
        rev = rev/10;
        switch(r){
            case 0:printf("Zero");break;
            case 1:printf("One");break;
            case 2:printf("Two");break;
            case 3:printf("Three");break;
            case 4:printf("Four");break;
            case 5:printf("Five");break;
            case 6:printf("Six");break;
            case 7:printf("Seven");break;
            case 8:printf("Eight");break;
            case 9:printf("Nine");break;
        }
    }




/*..........................................15. Write a program to print the Fibonacci series till n terms (Accept n from user)...............................*/

#  include<stdio.h>
int main(){
    int num;
    int n_1 = 0;
    int n_2 = 1;
    int c = 0;
    printf("Enter the range of number:");
    scanf("%d",&num);
    while(c<num){
        printf("%d\n",n_1);
        c = n_1+n_2;
        n_1 = n_2;
        n_2 = c;
        c+=1;
    }
}


/*...........................16. Write a program to print the factorial of a number accepted by the user................*/
# include<stdio.h>
int main(){
    int num,i=1,fac=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i<=num){
        fac =fac*i;
        i+=1;
    }
printf("Factorial of number:%d",fac);
}




/*.................................17. Write a program to check whether a number is Armstrong or not. (Armstrong number is a number that is
equal to the sum of cubes of its digits, for example : 153 = 1^3 + 5^3 + 3^3.).............................*/

#include<stdio.h>
#include<math.h>
int main(){
    int num,originalnum,rem,n=0;
    float result = 0.0;
    printf("Enter an interger:");
    scanf("%d",&num);
    originalnum=num;
    for(originalnum=num;originalnum!=0;++n){
        originalnum/=10;
    }
    for(originalnum=num;originalnum!=0;originalnum/=10){
        rem = originalnum%10;
        result+=pow(rem,n);
    }
if((int)result==num)
    printf("armstrong number %d",num);
else
    printf("not armstrong number %d",num);
}