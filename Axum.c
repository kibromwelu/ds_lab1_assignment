#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    char fname[20];
    char id[10];
   //nested structure
  //structure as member
    struct course{
          char cC[10];
          char cN[10];
          int ch;
          char grade[2];
    }c[2];
}s[3];
//function declaration
void displayInfo(struct student []);

int main(){
//function call
int i,j;
printf("enter students data\n");
     for(i=0;i<3;i++){
         printf("insert the student %d's name, father's name and id respectively\n",i+1);
         scanf("%s %s %s",&s[i].name,&s[i].fname,&s[i].id);
         for(j=0;j<2;j++){
             printf("course %d: insert course code, course name, credit hours and grade  scored by  %s in this course\n",j+1,s[i].name);
scanf("%s %s %d %s",&s[i].c[j].cC,       &s[i].c[j].cN,&s[i].c[j].ch,&s[i].c[j].grade);
         }
}
//calling function
displayInfo(s);
return 0;
}
void displayInfo(struct student s[]){
     int j,i;
     
printf("\n\n\n\n\nAXUM UNIVERSITY\n");
printf("student grade report\n");
printf("___________________________\n");
for(i=0;i<3;i++){
printf("Name:%s %s \n Id:%s\n\n",s[i].name,s[i].fname,s[i].id);
printf(" Transcript\n");
printf("___________________________\n");
  printf("Code \t grade\n");
printf("___________________________\n");
for(j=0;j<2;j++){ printf("%s\t%s\n",s[i].c[j].cC,s[i].c[j].grade);
}
printf("course matrix\n");
printf("___________________________\n");
printf("Code\tName\tc.hours\n");
printf("___________________________\n");
for(j=0;j<2;j++){ printf("%s\t%s\t%d\n",s[i].c[j].cC,s[j].c[j].cN,s[i].c[j].ch);
}
printf("\n\n\n");
}
free(s);
}