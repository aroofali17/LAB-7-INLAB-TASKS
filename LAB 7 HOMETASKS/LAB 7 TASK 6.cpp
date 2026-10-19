#include <stdio.h>
int main(){
int patients[15];
int totalPatients=0,tokenNumber,i,choice;
while(totalPatients<15){
printf("Enter patient token (-1 to stop): ");
scanf("%d",&tokenNumber);
if(tokenNumber==-1){
break;
}
patients[totalPatients]=tokenNumber;
totalPatients++;
}
printf("\nCurrent Queue\n");
i=0;
while(i<totalPatients){
printf("Position %d -> Token %d\n",i+1,patients[i]);
i++;
}
while(totalPatients>0){
printf("\n1. Call next patient\n");
printf("2. Emergency patient\n");
printf("3. Exit\n");
printf("Enter choice: ");
scanf("%d",&choice);
if(choice==1){
printf("Calling patient with token %d\n",patients[0]);
i=0;
while(i<totalPatients-1){
patients[i]=patients[i+1];
i++;
}
totalPatients--;
}
else if(choice==2){
if(totalPatients<15){
printf("Enter emergency token: ");
scanf("%d",&tokenNumber);
i=totalPatients;
while(i>0){
patients[i]=patients[i-1];
i--;
}
patients[0]=tokenNumber;
totalPatients++;
}
else{
printf("Queue is full. Emergency cannot be added.\n");
}
}
else if(choice==3){
break;
}
else{
printf("Invalid choice\n");
}
printf("\nCurrent Queue\n");
i=0;
while(i<totalPatients){
printf("Position %d -> Token %d\n",i+1,patients[i]);
i++;
}
}
if(totalPatients==0){
printf("No patients left in the queue\n");
}
return 0;
}

