#include <stdio.h>

int main() {
    int temp[]={31,33,35,34,38,36,32};
    int length=sizeof(temp)/sizeof(temp[0]);
	int high,low;
    float sum,average;
    printf("Original Temperature Readings:\n");
    high=low=temp[0];
    sum=0;

    for (int i=0;i<length;i++){
        printf("Day %d:%d\n",i+1,temp[i]);
		if (temp[i]>high)
            high=temp[i];
        if (temp[i]<low)
            low=temp[i];
			sum+=temp[i];
    }
	average=sum/length;
	 printf("\nOriginal Statistics:\n");
    printf("Highest Temperature: %d\n",high);
    printf("Lowest Temperature: %d\n",low);
    printf("Average Temperature: %2f\n",average);
    temp[2]=37;

    printf("\nCorrected Temperature Readings:\n");
    high=low=temp[0];
    sum=0;
	for(int i=0;i<length;i++){
        printf("Day %d: %d \n",i+1,temp[i]);
		if (temp[i]>high)
            high=temp[i];
		if (temp[i]<low)
            low=temp[i];
		sum+=temp[i];
    }
average=sum/length;

    printf("\nCorrected Statistics:\n");
    printf("Highest Temperature: %d\n",high);
    printf("Lowest Temperature: %d\n",low);
    printf("Average Temperature: %.2f\n",average);
    printf("\ Addresses of Array Elements:\n");
	for (int i=0;i<length;i++) {
        printf("Address of temperature[%d]:%p\n",i,(void *)&temp[i]);
    }
	return 0;
}
