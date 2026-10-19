#include <stdio.h>
int main(){
int stock[]={25,12,8,40,5,18,3,22};
int size=sizeof(stock)/sizeof(stock[0]);
int item,sold;
int total=0,least=0;
int i=0;
printf("Cafeteria Inventory\n");
printf("\nInitial Stock Levels\n");
while(i<size){
printf("Item %d: %d units\n",i+1,stock[i]);
if(stock[i]<10){
printf("Item %d is LOW on stock - reorder required\n",i+1);
}
i++;
}
printf("\nEnter item number and quantity sold\n");
printf("Enter 0 as item number to stop\n");
while(1){
printf("\nItem number: ");
scanf("%d",&item);
if(item==0){
break;
}
if(item<1||item>size){
printf("Invalid item number\n");
continue;
}
printf("Quantity sold: ");
scanf("%d",&sold);
if(sold<0){
printf("Invalid quantity\n");
}
else if(sold>stock[item-1]){
printf("Error: Not enough stock. Sale rejected.\n");
}
else{
stock[item-1]=stock[item-1]-sold;
printf("Stock updated successfully\n");
}
}
printf("\nFinal Stock Levels\n");
i=0;
while(i<size){
printf("Item %d: %d units\n",i+1,stock[i]);
total=total+stock[i];
if(stock[i]<stock[least]){
least=i;
}
i++;
}
printf("\nTotal units remaining: %d\n",total);
printf("Item with least stock: Item %d\n",least+1);
printf("Least stock quantity: %d units\n",stock[least]);
return 0;
}

