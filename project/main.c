#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]) {
	int chRole, chA1, chA2, length=0, backExit;
	int find, found;
	Student student[100];
	do{
		system("cls");
		startProgram();
		printf("Enter Your Choice: ");
		scanf("%d", &chRole);
		if(chRole==1){
			//login();
			do{
				system("cls");
				menuAdmin();
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
									if(length==0){
										printf("\n*0 Students At The Moment*\n");
									} else{
										printStudent(student, length);
									}
									printf("\nGo Back(1) or Exit(0)?: ");
									scanf("%d", &backExit);
									if(backExit==0){
										printf("Exited The Program");
										exit(0);
									}
									system("cls");
									break;
								case 3:
									break;
								case 4:
									system("cls");
									printf("***EDIT STUDENT INFORMATION***\n\n");
									printf("Enter Student Id: ");
									scanf("%d", &find);
									found=-1;
									for(int i=0;i<length; i++){
										if(student[i].studentId==find){
											found=i;
										}
									}
									if(found==-1){
										printf("\n*Can't Find Student With This ID*\n");
									} else{
										printf("  STUDENT INFORMATION\n");
										printf("================================\n");
										printf("Id: %d\n", student[found].studentId);
										printf("Classroom Id: %s\n", student[found].classroomId);
										printf("Name: %s\n", student[found].name);
										printf("Email: %s\n", student[found].email);
										printf("Phone Number: %s\n", student[found].phoneNumber);
										printf("\n***UPDATE INFORMATION***\n\n");
										getchar();
										printf("StudentClassroomId: ");
										fgets(student[found].classroomId,5,stdin);
										student[found].classroomId[strcspn(student[found].classroomId,"\n")]='\0';
										printf("StudentName: ");
										fgets(student[found].name,30,stdin);
										student[found].name[strcspn(student[found].name,"\n")]='\0';
										printf("StudentEmail: ");
										fgets(student[found].email,35,stdin);
										student[found].email[strcspn(student[found].email,"\n")]='\0';
										printf("StudentPhone: ");
										fgets(student[found].phoneNumber,15,stdin);
										student[found].phoneNumber[strcspn(student[found].phoneNumber,"\n")]='\0';
										printf("\n*Student's Information Changed Successfully*\n"); 
									}
									break;
								case 5:
									break;
							}
						}while(chA2!=0);
						break;
				}
			}while(chA1!=0);
		}
	}while(chRole!=0);
	printf("Exited The Program");
	return 0;
}
