/*
*
Programmers:
1. Zunaira Amjad (23k-0013)
2. Tanisha Kataria (23k-0067)
3. Rayyan Merchant (23k-0073)
Desc: Lbrary managment system
*
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Structures
struct date {
    int d;
    int m;
    int y;
};

struct book {
    int bookid;
    char bookname[30];
    char authorname[30];
    char studentname[30];
    char category[30];
    struct date issuedate;
} bookinfo;

// Function prototypes
void bmenu();
void headMessage(const char *title);
void start();
void add();
void search();
void view();
void category();
void removebook();
void edit();
void amenu();
void password();

void returnBook() {
    // Convert date strings to integers
    int currentYear, currentMonth, currentDay;
    int dueYear, dueMonth, dueDay;
     // Call the function to check the due date
        int returnBookID;
         time_t t;
         struct tm *tm_info;

         time(&t);
         tm_info = localtime(&t);

         currentDay = tm_info->tm_mday; // Day of the month (1-31)
         currentMonth = tm_info->tm_mon + 1;  //month (1-12)
         currentYear = tm_info -> tm_year + 1900; //year (since 1900)
            printf("Enter the book ID: ");
            scanf("%d", &returnBookID);
        
            printf("Enter the due date (YYYY-MM-DD): ");
            scanf( "%d-%d-%d", &dueYear, &dueMonth, &dueDay);
   
   
    // Calculate the difference in days
    int daysLate = (currentYear - dueYear) * 365 + (currentMonth - dueMonth) * 30 + (currentDay - dueDay);

    if (daysLate <= 0) {
        // Book returned successfully
        printf("Book returned successfully!\n");
        // Additional logic for updating book status or any other information
     }
     else {
        // Calculate and print fine
        int fine = daysLate * 50;
        printf("Book is %d days late. Fine: %d Rs\n", daysLate, fine);
    }
}

void bmenu() {
    system("cls");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("               *Welcome to Boldeian Library*                           \n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
    printf("\n1. Return a book");
    printf("\n2. Issue a book");
    printf("\n3. EXIT PROGRAM\n\n");
    printf("<<ENTER CORRESPONDING NUMBER>>\n");
    int choice;
    scanf("%d", &choice);
    system("cls");
    switch (choice) {
        case 1:
            returnBook();
            break;
        case 2:
            printf("Enter number to search for genre\n");
            printf("\n1-COMEDY");
            printf("\n2-ROMANCE");
            printf("\n3-THRILLER");
            printf("\n4-HORROR");
            printf("\n5-SCIENCE FICTION");
            printf("\n<<ENTER CORRESPONDING NUMBER>>\n");
            int c,n;
            scanf("%d", &c);

            switch (c) {
                case 1:
                    system ("cls");
		            printf("\n 1. GOOD OMENS BY NEIL GAIMAN AND TERRY PRATCHET \n 2. THE HITCHHIKER'S GUIDE TO THE GALAXY BY DOUGLAS ADAMS\n 3.BOSSY PANTS BY TINA FEY\n 4. ME TALK PRETTY ONE DAY BY DAVID SEDARIS\n 5.BRIDGET JONES'S DIARY by Helen Fielding");
                    printf("\nEnter your choice");
		            scanf("%d" ,&n);
		            switch (n){
		                 case 1: 
		                     printf ("The id is 001. Please return the book in 5 days\n");
		                     printf ("Thankyou for visiting");
		                     break;
		                 case 2: 
		                     printf ("The id is 002. Please return the book in 5 days\n");
		                     printf ("Thankyou for visiting");
		                     break;
		                 case 3: 
		                     printf ("The id is 003. Please return the book in 5 days\n");
		                     printf ("Thankyou for visiting");
		                     break;
		                 case 4: 
		                      printf ("The id is 004. Please return the book in 5 days\n");
		                      printf ("Thankyou for visiting");
		                      break;
		                 case 5: 
		                      printf ("The id is 005. Please return the book in 5 days\n");
		                      printf ("Thankyou for visiting");
		                      break;
		                 default:
		                     printf ("You have chosen no option. Please visit again\n");
		                     break;
		             }
                    break;
                case 2:
                 system ("cls");
		         printf("\n 1. Pride and Prejudice by Jane Austen\n2.The Notebook by Nicholas Sparks \n 3. Outlander by Diana Gabaldon \n 4.Me Before You by Jojo Moyes\n 5. The Fault in Our Stars by John Green");
		         printf("\nEnter your choice");
		         scanf("%d" ,&n);
		         switch (n){
		             case 1: 
		                 printf ("The id is 101. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 2: 
		                 printf ("The id is 102. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 3: 
		                 printf ("The id is 103. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 4: 
		                 printf ("The id is 104. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 5: 
		                 printf ("The id is 105. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             default:
		                 printf ("You have chosen no option. Please visit again\n");
		                 break;
		         }
				
                 case 3: 
                 system ("cls");
		         printf("\n 1.The Girl with the Dragon Tattoo by Stieg Larsson \n 2. Gone Girl by Gillian Flynn \n3.The Da Vinci Code by Dan Brown \n 4. The Silent Patient by Alex Michaelides\n 5. The Girl on the Train by Paula Hawkins");
		         printf("\nEnter your choice");
		         scanf("%d" ,&n);
		         switch (n){
		             case 1: 
		                 printf ("The id is 201. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 2: 
		                 printf ("The id is 202. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 3: 
		                 printf ("The id is 203. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 4: 
		                 printf ("The id is 204. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 5: 
		                 printf ("The id is 205. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             default:
		                 printf ("You have chosen no option. Please visit again\n");
		                 break;
		         }

                 case 4:
		         system ("cls");
		         printf("\n 1.Dracula by Bram Stoker \n 2.Frankenstein by Mary Shelley \n 3.The Shining by Stephen King \n4.The Haunting of Hill House by Shirley Jackson\n 5.It by Stephen King");
		         printf("\nEnter your choice");
		         scanf("%d" ,&n);
		         switch (n){
		             case 1: 
		                 printf ("The id is 301. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 2: 
		                 printf ("The id is 302. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 3: 
		                 printf ("The id is 303. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 4: 
		                 printf ("The id is 304. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 5: 
		                 printf ("The id is 305. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             default:
		                 printf ("You have chosen no option. Please visit again\n");
		                 break;
		         }

                 case 5:
	             system ("cls");
		         printf("\n 1.Dune by Frank Herbert \n 2.Neuromance by William Gibson \n 3.Ender's Game by Orson Scott Card \n 4.Snow Crash by Neal Stephenson \n 5.The Left Hand of Darkness by Ursula K. Le Guin");
		         printf("\nEnter your choice");
		         scanf("%d" ,&n);
		         switch (n){
		             case 1: 
		                 printf ("The id is 401. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 2: 
		                 printf ("The id is 402. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 3: 
		                 printf ("The id is 403. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 4: 
		                 printf ("The id is 404. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                 break;
		             case 5: 
		                 printf ("The id is 405. Please return the book in 5 days\n");
		                 printf ("Thankyou for visiting");
		                  break;
                     default:
		                 printf ("You have chosen no option. Please visit again\n");
		                 break;
                 }

		         default:
		         printf ("You have chosen no option. Please visit again\n");
		         break;
		     }	  
         case 3:
            exit(1);
            break;
         default:
             printf ("No choice selected\n");
		     break;
     }//ending main switch msg

}


void headMessage(const char *title) {
    system("cls");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############            Library Management System              ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t%s", title);
    printf("\n\t\t\t----------------------------------------------------------------------------");
}

void start() {
    headMessage("PF PROJECT");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  ********************************************************\n");
    printf("\n\t\t\t        =============================================");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =============================================");
    printf("\n\n\t\t\t  ********************************************************\n");
    printf("\n\n\n\t\t\t Press Enter to continue.....");
    getch();
}

void password(){
    char pass[10];
    char rpass[10] = "xsinx2004";
    int z;
    printf("Enter Password:\n");
	fflush(stdin);
	gets(pass);                    //password is xsin2004
    int z= strcmp(pass, rpass);
     if(z!=0)
     password();

}

void add() {
    FILE *fp;
	fp = fopen("lms.txt","a+");
	if(fp == NULL){
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }	
   
	headMessage("ADD BOOKS");
	printf("\n\n\t\t\tENTER BOOK DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    
    printf("\n\t\t\tBook ID NO: ");
    scanf("%d",&bookinfo.bookid);
    fflush(stdin);   
	    
    printf("\n\t\t\tBook Name: ");
    gets(bookinfo.bookname);
	fflush(stdin);    	
	    
	printf("\n\t\t\tAuthor Name: ");
	gets(bookinfo.authorname);
	fflush(stdin);       
	 
	printf("\n\t\t\tStudent Name: ");
	gets(bookinfo.studentname);
	fflush(stdin);	
	
	printf("\n\t\t\tCategory Name: ");
	gets(bookinfo.category);
	fflush(stdin);
	 
	printf("\n\t\t\tEnter date(dd): ");
	scanf("%d",&bookinfo.issuedate.d);
	fflush(stdin);   
    
	printf("\n\t\t\tEnter month(mm): ");
	scanf("%d",&bookinfo.issuedate.m);
	fflush(stdin);
        
	printf("\n\t\t\tEnter year(yyyy): ");
	scanf("%d",&bookinfo.issuedate.y);
	fflush(stdin);
    
	fwrite(&bookinfo, sizeof(bookinfo), 1, fp);	     
    fclose(fp); 	
}

void search() {
   int found=1;
    char searchbook[30];
    FILE *fp;
	fp = fopen("lms.txt","r");
    if(fp == NULL){
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
    headMessage("SEARCH BOOKS");
    
    fflush(stdin);
    printf("\n\n\t\t\tEnter Book Name to search: ");    
    gets(searchbook);
    rewind(fp);
    while(fread(&bookinfo, sizeof(bookinfo), 1, fp)==1)
    {
		if(strcmp(bookinfo.bookname, searchbook)==0)
        {
            printf("\n\t\t\tBook ID = %d\n",bookinfo.bookid);
        	printf("\t\t\tBook Name = %s\n",bookinfo.bookname);
        	printf("\t\t\tAuthor Name = %s\n",bookinfo.authorname);
        	printf("\t\t\tStudent Name = %s\n",bookinfo.studentname);
        	printf("\t\t\tCategory = %s\n",bookinfo.category);
        	printf("\t\t\tIssue date(day/month/year) =  %d/%d/%d\n",bookinfo.issuedate.d,
        	bookinfo.issuedate.m, bookinfo.issuedate.y);
        	found = 0;
            break;
        }
    }
    if(found==1){
        printf("\n\t\t\tNo Record");
    }
    fclose(fp);
    printf("\n\n\n\t\t\tPress Enter to go to main menu.....");
    getchar();	
}


void view() {
   int found = 0;
	int count = 1;
	headMessage("BOOKS DETAILS");
	FILE *fp = fopen("lms.txt","r");
	if(fp == NULL){
     	printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
	rewind(fp);
    while(fread(&bookinfo, sizeof(bookinfo), 1, fp)==1)
    {
        printf("\n\t\t\tBook Count = %d\n\n",count);
        printf("\t\t\tBook ID = %d\n",bookinfo.bookid);
        printf("\t\t\tBook Name = %s\n",bookinfo.bookname);
        printf("\t\t\tAuthor Name = %s\n",bookinfo.authorname);
        printf("\t\t\tStudent Name = %s\n",bookinfo.studentname);
        printf("\t\t\tCategory = %s\n",bookinfo.category);
        printf("\t\t\tIssue date(day/month/year) =  (%d/%d/%d)\n\n",bookinfo.issuedate.d,
        		bookinfo.issuedate.m, bookinfo.issuedate.y);
        found = 1;
        count++;
    }
    fclose(fp);
    if(found==0)
    {
        printf("\n\t\t\tNo Record");
    }
    printf("\n\n\t\t\tPress any key to go to main menu.....");
    fflush(stdin);
    getchar();	
}

void category() {
  	int found = 0;
	int count = 1;
	char cat[30];
	headMessage("BOOKS DETAILS BY CATEGORY");
	FILE *fp = fopen("lms.txt","r");
	if(fp == NULL){
     	printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
    fflush(stdin);
    printf("\n\n\t\t\tEnter category to search: ");    
    gets(cat);
	rewind(fp);
    while(fread(&bookinfo, sizeof(bookinfo), 1, fp)==1)
    {
    	if(strcmp(bookinfo.category, cat)==0)
        {
        printf("\n\t\t\tBook Count = %d\n\n",count);
        printf("\t\t\tBook ID = %d\n",bookinfo.bookid);
        printf("\t\t\tBook Name = %s\n",bookinfo.bookname);
        printf("\t\t\tAuthor Name = %s\n",bookinfo.authorname);
        printf("\t\t\tStudent Name = %s\n",bookinfo.studentname);
        printf("\t\t\tCategory = %s\n",bookinfo.category);
        printf("\t\t\tIssue date(day/month/year) =  (%d/%d/%d)\n\n",bookinfo.issuedate.d,
        		bookinfo.issuedate.m, bookinfo.issuedate.y);
        found = 1;
        count++;
    	}
    }
    fclose(fp);
    if(found==0)
    {
        printf("\n\t\t\tNo Record");
    }
    printf("\n\n\t\t\tPress any key to go to main menu.....");
    fflush(stdin);
    getchar();
}

void removebook() {
   int found = 0;
    int deleteid = 0;
    char bookName[30] = {0};
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    int status = 0;
    headMessage("Delete Books Details");
    fp = fopen("lms.txt","r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    fp1 = fopen("recycle.txt","w");
    if(fp1 == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        exit(1);
    }
    printf("\n\t\t\tEnter Book ID NO. for delete:");
    scanf("%d",&deleteid);
    fflush(stdin);
    while(fread(&bookinfo, sizeof(bookinfo), 1, fp))
    {
        if(bookinfo.bookid==deleteid)					
        {
            found = 1;
        }
        else
        {
        	fwrite(&bookinfo,sizeof(bookinfo), 1, fp1);            
        }
    }
    if(found==1)
	{	
        printf("\n\t\t\tRecord deleted successfully.....");
    }
    else
	{
		printf("\n\t\t\tNo Record Found.....");        
    }    
    fclose(fp);
    fclose(fp1);
    remove("lms.bin");
    rename("recycle.bin","lms.txt");
    printf("\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
}


void edit() {
  int found=1;
    char editbook[30];
    FILE *fp;
	fp = fopen("lms.txt","r+");
    if(fp == NULL){
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
    headMessage("EDIT BOOKS");
    
    fflush(stdin);
    printf("\n\n\t\t\tEnter Book Name to edit: ");    
    gets(editbook);
    rewind(fp);
    while(fread(&bookinfo, sizeof(bookinfo), 1, fp)==1)
    {
		if(strcmp(bookinfo.bookname, editbook)==0)
        {
        	printf("\t\t\tPrevious Book ID = %d\n",bookinfo.bookid);
        	printf("\t\t\tPrevious Book Name = %s\n",bookinfo.bookname);
        	printf("\t\t\tPrevious Author Name = %s\n",bookinfo.authorname);
        	printf("\t\t\tPrevious Student Name = %s\n",bookinfo.studentname);
        	printf("\t\t\tPrevious Category = %s\n",bookinfo.category);
        	printf("\t\t\tPrevious Issue date(day/month/year) =  (%d/%d/%d)\n\n",bookinfo.issuedate.d,
        		bookinfo.issuedate.m, bookinfo.issuedate.y);
        		
            printf("\n\t\t\tNew Book ID: ");
            scanf("%d",&bookinfo.bookid);
    		fflush(stdin);
        	printf("\t\t\tNew Book Name: ");
        	gets(bookinfo.bookname);
   			fflush(stdin);
        	printf("\t\t\tNew Author Name: ");
        	gets(bookinfo.authorname);
    		fflush(stdin);
        	printf("\t\t\tNew Student Name: ");
        	gets(bookinfo.studentname);
    		fflush(stdin);
    		printf("\t\t\tNew Category: ");
        	gets(bookinfo.category);
    		fflush(stdin);    		
        	printf("\t\t\tNew date(dd): ");
			scanf("%d",&bookinfo.issuedate.d);
			fflush(stdin);       
			printf("\t\t\tNew month(mm): ");
			scanf("%d",&bookinfo.issuedate.m);
			fflush(stdin);
      		printf("\t\t\tNew year(yyyy): ");
			scanf("%d",&bookinfo.issuedate.y);
			fflush(stdin);
			fseek(fp,-sizeof(bookinfo),SEEK_CUR);
			fwrite(&bookinfo,sizeof(bookinfo), 1, fp);
        	found = 0;
            break;
        }
    }
    if(found==1){
        printf("\n\t\t\tNo Such Record");
    }
    else{
    	printf("Record Edited Successfully.....");
	}
    fclose(fp);
    printf("\n\n\n\t\t\tPress Enter to go to main menu.....");
    getchar();	
}



void amenu() {
    int choice;
    do {
        headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1. Add Books");
        printf("\n\t\t\t2. Search Books");
        printf("\n\t\t\t3. View Book List");
        printf("\n\t\t\t4. View Books By Categories");
        printf("\n\t\t\t5. Edit Book");
        printf("\n\t\t\t6. Delete Book");
        printf("\n\t\t\t0. Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                search();
                break;
            case 3:
                view();
                break;
            case 4:
                category();
                break;
            case 5:
                edit();
                break;
            case 6:
                removebook();
                break;
            case 0:
                printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
                break;
            default:
                printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
                break;
        }
    } while (choice != 0);
}

int main() {
    char choice;
    printf("Enter u for user and a for admin: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'a':
        case 'A':
            password();
            amenu();
            break;
        case 'U':
        case 'u':
            bmenu();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

