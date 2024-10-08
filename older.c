#include<stdio.h>
#include<string.h>
struct MONTH_DAYS{
	char name[20];
	int day;
};
int main(){
	struct MONTH_DAYS month[5]={
		{"Jan",31},
		{"Feb",28},
		{"March",31},
		{"April",30},
		{"May",31}
	};
	char s[10];
	scanf("%s",s);
	for(int i=0;i<5;i++){
	if(strcmp(s,month[i].name)==0)
		printf("%d",month[i].day);
	}
	return 0;
}
