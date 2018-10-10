
#include <stdio.h>
int validinput(char);
char change(char);
int prompt(void);
int main(){
	char input;
	int contin = 1, user;
	do{
		printf("enter an alphabet? ");
		scanf("%c", &input);
		user = validinput(input);
		if(user == 1)
		{
			printf("%c\n",change(input));
			contin = prompt();
		}
		else
			printf("invalid input\n");
		getchar();
	}while(contin);
	printf("end of program.\n");

	return 0;
}
int validinput(char c){
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
		return 1;
	else
		return -1;
}
char change(char c){
	if(c>='A'&&c<='Z')
		c+=32;
	else
		c-=32;
}
int prompt(void){
	char input;
	printf("finish(y/n)? ");
	getchar();
	scanf("%c", &input);
	if(input == 'n')
		return 1;
	else if(input == 'y')
		return 0;
	else
		prompt();
}