#include<stdio.h>

void main(){
	char name[0];
	int height;
	printf("Enter name : ");
	scanf("%s", &name);
	printf("Enter height(cm.) :");
	scanf("%d", &height);
	printf("Name\tHeight(cm.)\n%s\t%d", name, height);	
}
