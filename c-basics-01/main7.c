#include<stdio.h>
#include <string.h>
//when. u use scanf you have to use an space after that.
//scanf will not read the other numbers or name after space

int main(){
   int age = 0;
   float gpa = 0.0f;
   char grade = '\0';
   char name[30] =" ";
   
   printf("please enter your age: \n");
   scanf(" %d",&age);
   printf("enter your gpa: ");
   scanf(" %f", &gpa);
   printf("enter your grade: ");
   scanf(" %c",&grade);
   
   printf("enter your first name: ");
   scanf(" %s" , &name);

   printf("please enter the full name: ");
   fgets(name, sizeof(name), stdin); //we dont have to type the size of the name everytime, fgets will show another extra empty line too.
   name[strlen(name) - 1] = '\0';//this will delete the extra line.

   
   printf("%d\n",age);
   printf("%f\n",gpa);
   printf("%c\n",grade);
   printf("%s\n",name);

   return 0;

}