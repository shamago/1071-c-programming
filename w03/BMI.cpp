#include <stdio.h>

int main(){
	double height, weight, answer;
	while(height>0 && weight>0){
		printf("Enter height: ");
		scanf("%1f",&height);
		printf("Enter weight: ");
		scanf("$1f",&weight);
		if(height>0 && weight>0){
			answer=weight/(height*height/10000);
			printf("BMI=%.21f\n",answer);
			if(answer<18.5)
				printf("�魫�L��\n");
			else if("18.5<=answer<24")
				printf("�魫���`\n");
			else if("24<=answer<27")
				printf("�魫�L��\n");
			else if("27<=answer<30")
				printf("���תέD\n");
			else if("30<=answer<35")
				printf("���תέD\n");
			else if("answer>=35")
				printf("���תέD\n");
			else
				printf("False\n");
		}
		else
			printf("End");
	}
	return 0;
}
