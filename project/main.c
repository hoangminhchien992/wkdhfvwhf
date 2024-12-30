#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]) {
	int chRole, chA1, chA2, length=0;
	char email[16];
	char password[9];
	Student student[100];
	do{
		system("cls");
		roleMenu();
		printf("Enter Your Choice: ");
		scanf("%d", &chRole);
		if(chRole==1){
			do{
				printf("\n***Student Management System Using C***\n\n");
				printf("\t    LOGIN\n");
				printf("\n================================\n");
				fflush(stdin);
				printf("Email: ");
				fgets(email, sizeof(email), stdin);
				email[strcspn(email, "\n")] = '\0';
				fflush(stdin);
				printf("Password: ");
				fgets(password, sizeof(password), stdin);
				password[strcspn(password, "\n")] = '\0';
				if(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0){
					printf("\n*wrong Email Or Password! Please Try Again*\n");
				}
			}while(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0);
			do{
				system("cls");
				printf("\n***Student Management System Using C***\n\n");
				printf("\t     MENU\n");
				printf("================================\n");
				printf("[1] Students Mangement\n");
				printf("[2] Classrooms Management\n");
				printf("[3] Teachers Management\n");
				printf("[0] Back\n");
				printf("================================\n");
				printf("Enter Your Choice: ");
				scanf("%d", &chA1);
				switch(chA1){
					case 1:
						do{
							printf("\n***Student Management System Using C***\n\n");
							printf("\t STUDENT MENU\n");
							printf("================================\n");
							printf("[1] Add A New Student\n");
							printf("[2] Show All Students\n");
							printf("[3] Search A Student\n");
							printf("[4] Edit A Student\n");
							printf("[0] Back\n");
							printf("================================\n");
							printf("Enter Your Choice: ");
							scanf("%d", &chA2);
							system("cls");
							switch(chA2){
								case 1:
									getchar();
									student[length].studentId=length + 1;
									printf("Enter Student's Classroom ID: ");
									fgets(student[length].classroomId,5,stdin);
									student[length].classroomId[strcspn(student[length].classroomId,"\n")]='\0';
									printf("Enter Student's Full Name: ");
									fgets(student[length].name,30,stdin);
									student[length].name[strcspn(student[length].name,"\n")]='\0';
									printf("Enter Student's Email: ");
									fgets(student[length].email,35,stdin);
									student[length].email[strcspn(student[length].email,"\n")]='\0';
									printf("Enter Student's Phone Number: ");
									fgets(student[length].phoneNumber,15,stdin);
									student[length].phoneNumber[strcspn(student[length].phoneNumber,"\n")]='\0';
									printf("\n*Student Added Successfully*\n"); 
									length++;
									break;
								case 2:
									printf("\n\t**ALL STUDENTS**\n\n");
									for(int i=0; i<length; i++){
										printf("Student's ID: %d\n", student[i].studentId);
										printf("Student's Classroom ID: %s\n", student[i].classroomId);
										printf("Student's Full Name: %s\n", student[i].name);
										printf("Student's Email: %s\n", student[i].email);
										printf("Student's Phone Number: %s\n\n", student[i].phoneNumber);
									}
									break;
							}
						}while(chA2!=0);
						break;
				}
			}while(chA1!=0);
		}
	}while(chRole!=0);

	return 0;
}
