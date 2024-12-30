#include <stdio.h>
#include "functions.h"

void roleMenu(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\tCHOOSE YOUR ROLE\n");
	printf("================================\n");
	printf("[1] Admin\n");
	printf("[2] Student\n");
	printf("[3] Teacher\n");
	printf("[0] Exit The Program\n");
	printf("================================\n");
}

void manageMenu(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\t     MENU\n");
	printf("================================\n");
	printf("[1] Students Mangement\n");
	printf("[2] Classrooms Management\n");
	printf("[3] Teachers Management\n");
	printf("[0] Back\n");
	printf("================================\n");
}

void studentMenu(){
	printf("\n***Student Management System Using C***\n\n");
	printf("\t STUDENT MENU\n");
	printf("================================\n");
	printf("[1] Add A New Student\n");
	printf("[2] Show All Students\n");
	printf("[3] Search A Student\n");
	printf("[4] Edit A Student\n");
	printf("[0] Back\n");
	printf("================================\n");
}

//void inputStudent(Student student[], length){
//	getchar();
//	student[*length].studentId=*length + 1;
//	printf("Enter Student's Classroom ID: ");
//	fgets(student[*length].classroomId,5,stdin);
//	student[*length].classroomId[strcspn(student[*length].classroomId,"\n")]='\0';
//	printf("Enter Student's Full Name: ");
//	fgets(student[*length].name,30,stdin);
//	student[*length].name[strcspn(student[*length].name,"\n")]='\0';
//	printf("Enter Student's Email: ");
//	fgets(student[*length].email,35,stdin);
//	student[*length].email[strcspn(student[*length].email,"\n")]='\0';
//	printf("Enter Student's Phone Number: ");
//	fgets(student[*length].phoneNumber,15,stdin);
//	student[*length].phoneNumber[strcspn(student[*length].phoneNumber,"\n")]='\0';
//	printf("\n*Student Added Successfully*\n"); 
//	(*length)++;
//}
