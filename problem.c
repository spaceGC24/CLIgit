#include<stdio.h>
typedef struct {
int month,day,year;
}date;
int main(){
	date date1;
	puts("Enter month,day,year");
	scanf("%d %d %d",&date1.month,&date1.day,&date1.year);
	printf("%d %d %d",date1.month,date1.day,date1.year);

	return 0;
}
