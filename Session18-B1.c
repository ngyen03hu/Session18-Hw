#include <stdio.h>
#include<string.h>
struct Student{
	char name[50];
	int age;
	char phoneNUmber[20];
};
typedef struct  Student  Student;
int main() {
	Student s;
	strcpy(s.name,"nguyen trong vuong");
	s.age=18;
	strcpy(s.phoneNUmber,"02436789" );
	printf("Ho ten : %s\n",s.name);
	printf("tuoi: %d\n",s.age );
	printf("So dien thoai : %s\n",s.phoneNUmber);
    return 0;
}


