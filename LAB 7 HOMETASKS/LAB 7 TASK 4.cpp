#include <stdio.h>
int main(){
char name[20];
int i=0,count=0;
printf("Enter your username: ");
scanf("%19[A-Za-z]",name);
while(name[i]!='\0'){
printf("Character at index %d: %c\n",i,name[i]);
count++;
i++;
}
if(name[0]>='a'&&name[0]<='z'){
name[0]=name[0]-32;
}
printf("Total characters stored: %d\n",count);
printf("Final name: %s\n",name);
return 0;
}

