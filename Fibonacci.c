//Displaying Fibonacci terms using recursion
#include<stdio.h>
//declare function prototype with three arguments
void displayTerms(int *num,int first,int second);
int main(){
int first=1,second=1,max_num;
//declare pointer
int* ptr;
ptr=&max_num;
printf("insert max num where displaying terms should stop.\n");
scanf("%d",&max_num);
if(*ptr>0){
printf("terms of the sequence before %d are:\n",*ptr);
printf("%d",first);
//call with both value and reference
 displayTerms(ptr,first,second);
}
else{
printf(" Fibonacci sequence has no terms less than or equal to zero.\n");
}
return 0;
}
void displayTerms(int *num,int first,int second){
int y=*num;
//check if the term to be displayed is less than the max number
if(second<y){
printf(" %d",second);
int next=first+second;
first=second;
//call recursively
displayTerms(num,first,next);
}
}