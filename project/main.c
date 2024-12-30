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
//			do{
//				printf("\n***Student Management System Using C***\n\n");
//				printf("\t    LOGIN\n");
//				printf("\n================================\n");
//				fflush(stdin);
//				printf("Email: ");
//				fgets(email, sizeof(email), stdin);
//				email[strcspn(email, "\n")] = '\0';
//				fflush(stdin);
//				printf("Password: ");
//				fgets(password, sizeof(password), stdin);
//				password[strcspn(password, "\n")] = '\0';
//				if(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0){
//					printf("\n*wrong Email Or Password! Please Try Again*\n");
//				}
//			}while(strcmp(password,"password")!=0 || strcmp(email,"admin@gmail.com")!=0);
			do{
				system("cls");
				manageMenu();
				printf("Enter Your Choice: ");
				scanf("%d", &chA1);
				switch(chA1){
					case 1:
						do{
							studentMenu();
							printf("Enter Your Choice: ");
							scanf("%d", &chA2);
							system("cls");
							switch(chA2){
								case 1:
									inputStudent(student, &length);
									break;
								case 2:
									printf("\n\t**ALL STUDENTS**\n\n");
									printf("|=======|======================|==============|=========================|=================|\n");
									printf("|  ID   |       Name           | classroomId  |          Email          |    PhoneNumber  |\n");
									printf("|=======|======================|==============|=========================|=================|\n");
									for(int i=0; i<length; i++){
										printf("| %-5d | %-20s | %-12s | %-23s | %-15s |\n", 
										student[i].studentId,
										student[i].name,
										student[i].classroomId,
										student[i].email,
										student[i].phoneNumber);
										printf("|=======|======================|==============|=========================|=================|\n");
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
