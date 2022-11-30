#include <stdio.h>
/* to find the sum of 2 numbers by taking input(pass by value)*/
int input(){
int a;
scanf("%d",&a);
return a;
}
int add(int a,int b){
    int sum= a+b;
    return sum;
}
void output(int a,int b,int sum){
    printf("The sum of %d and %d is %d",a,b,sum);
}
int main(void){
    printf("enter the value of the first number");
    int a = input();
    printf("enter the value of second number");
    int b = input();
    int sum = add(a,b);
    output(a,b,sum);

}