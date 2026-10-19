
#include <stdio.h>
int main(){
char phone[30];
char cleaned[30];
int i=0,j=0,count=0;
printf("Enter phone number: ");
scanf(" %[^\n]",phone);
/* %[^-] stops reading at the first dash. */
while(phone[i]!='\0'){
if(phone[i]>='0'&&phone[i]<='9'){
cleaned[j]=phone[i];
j++;
count++;
}
i++;
}
cleaned[j]='\0';
printf("Original number: %s\n",phone);
printf("Cleaned number: %s\n",cleaned);
printf("Digits found: %d\n",count);
if(count==11){
printf("Valid local number\n");
}
else{
printf("Invalid length - please re-enter\n");
}
return 0;
}

