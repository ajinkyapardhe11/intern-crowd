#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Rushab Nair"
#define CANDIDATE2 "Aniket Shelke"
#define CANDIDATE3 "Shreya Patil"
#define CANDIDATE4 "Aditya Sutar"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
	int choice;    
	printf("\n\n ### Please choose your Candidate ####\n\n");
	printf("\n 1. %s", CANDIDATE1);
	printf("\n 2. %s", CANDIDATE2);
	printf("\n 3. %s", CANDIDATE3);
	printf("\n 4. %s", CANDIDATE4);
	printf("\n 5. %s", "None of These");
	printf("\n\n Input your choice (1 - 4) : ");
	scanf("%d",&choice);

	switch(choice){
		case 1: votesCount1++; 
			printf("\n thanks for vote !!");
		    	break;
		case 2: votesCount2++; 
			printf("\n thanks for vote !!");
			break;
		case 3: votesCount3++;
	   		printf("\n thanks for vote !!");
			break;
	 	case 4: votesCount4++; 
	    		printf("\n thanks for vote !!");
	    		break;
    		case 5: spoiledtvotes++; 
	    		printf("\n thanks for vote !!");
	    		break;
    		default: printf("\n Error: Wrong Choice !! Please retry");
             		getchar();
	}	
}

void votesCount(){
	printf("\n\n ##### Voting Statics ####");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE2, votesCount2);
	printf("\n %s - %d ", CANDIDATE3, votesCount3);
	printf("\n %s - %d ", CANDIDATE4, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){

    	printf("\n\n  ****** Leading Candiate ******\n\n");
    	if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    	printf("[%s]",CANDIDATE1);
    	else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    	printf("[%s]",CANDIDATE2);
    	else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    	printf("[%s]",CANDIDATE3);
    	else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    	printf("[%s]",CANDIDATE4);
    	else
    	printf("----- Warning !!! No-win situation----");    
}

int mainmenu(){
	int i;
	int choice;

	do{
		printf("\n\n ==========Welcome to Election/Voting 2023==========");
		printf("\n\n 1. Cast the Vote");
		printf("\n 2. Find Vote Count");
		printf("\n 3. Find leading Candidate");
		printf("\n 0. Exit");

		printf("\n\n Please enter your choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1: castVote();break;
			case 2: votesCount();break;
			case 3: getLeadingCandidate();break;
			default: printf("\n Error: Invalid Choice");
		}
	}while(choice!=0);


	getchar();

	return 0;
}
int main(){
	char username[20];
   	char password[20];
   	int n=0;
	do{
		n++;
   		printf("Enter username: ");
   		scanf("%s", username);

   		printf("Enter password: ");
   		scanf("%s", password);

   		if (strcmp(username, "Ajinkya") == 0 && strcmp(password, "password") == 0) {
      			printf("Login successful!\n");
      			mainmenu();
      			exit(0);
   		}else
      printf("Invalid username or password!!  TRY AGAIN.\n");
	}
	while(n<5);
	printf("Login limit Exceeded!!!!\n");
}

