#include <stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[100];
	int age;
	char phoneNumber[30];


};
typedef struct  Student  Student;
int main() {
	Student *StudentPtr=(Student *)malloc(5 *sizeof(Student));
	if(StudentPtr==NULL){
		printf("khong cap phat bo nho dam");
		return 1;
	}
	for(int i =0; i<5;i++){
		printf("Student %d",i+1);
		StudentPtr[i].id =i + 1;
		
		
		printf("Name :");
		getchar();
		fgets(StudentPtr[i].name,sizeof(StudentPtr[i].name),stdin);
		StudentPtr[i].name[strcspn(StudentPtr[i].name,"\n")]='\0';
		
		
		printf("age:");
		scanf("%d",&StudentPtr[i].age);
		
		
		printf("phoneName:");
		getchar();
		fgets(StudentPtr[i].phoneNumber,sizeof(StudentPtr[i].phoneNumber),stdin);
		StudentPtr[i].phoneNumber[strcspn(StudentPtr[i].phoneNumber,"\n")]='\0';
	}
		for(int i=0;i<5;i++){
			printf("Id: %d\n",StudentPtr[i].id);
			printf("Ho ten : %s\n",StudentPtr[i].name);
			printf("tuoi: %d\n",StudentPtr[i].age );
			printf("So dien thoai : %s\n",StudentPtr[i].phoneNumber);
		}

    return 0;
}


