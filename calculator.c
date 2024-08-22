#include<stdio.h>
void cal(int n1,int n2,int choice){
	switch (choice){
		case 1:
			printf("Result:%d",n1+n2);
			break;					
		case 2:
			printf("Result:%d",n1-n2);
			break;	
		case 3:
			printf("Result:%d",n1*n2);
			break;	
		case 4:
			printf("Result:%d",n1/n2);
			break;	
		default:
			printf("Invalid Choice");
			break;	
	}
}
int main(){
	int choice,n1,n2;
	printf("1:Addition\n");
	printf("2:Subtraction\n");
	printf("3:Multiplication\n");
	printf("4:Division\n");
	printf("5:Modulo\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	printf("Enter two Numbers:");
	scanf("%d%d",&n1,&n2);
	cal(n1,n2,choice);
}
