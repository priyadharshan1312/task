#include<stdio.h>
int main() {
	int age = 29;
	if(age>=18){
		printf("you can vote\n");
	}if (age>=30){
		printf("you can nominate in president election\n");
	}else if (age>=25 && age<=30){
		printf("you just wait %d years for president election\n",30 -age);
	}
else if (age>=5) {
	printf("you can go to school");
}else if("age>=3"){
	printf("you can go kinder garden");
}else{
	printf("you are baby");
}
return 0;
}
