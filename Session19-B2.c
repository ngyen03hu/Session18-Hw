#include <stdio.h>
#include<string.h>
struct Student{
	char name[100];
	int age;
	char phoneNumber[30];
};
typedef struct  Student  Student;
int main() {
	Student s;
	printf("what you name: ");
	fgets(s.name,sizeof(s.name),stdin);
	s.name[strcspn(s.name, "\n")] = '\0';
	printf("How old are you: ");
	scanf("%d",&s.age);
	fflush(stdin);
	printf("What is you phone number: ");
	fgets(s.phoneNumber,sizeof(s.phoneNumber),stdin);
	
	printf("Ho ten : %s\n",s.name);
	printf("tuoi: %d\n",s.age );
	printf("So dien thoai : %s\n",s.phoneNumber);
    return 0;
}


