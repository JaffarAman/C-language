#include <stdio.h>
#include <conio.h>
main(){
	///CREATE FILE AND WRITE TEXT///
	
	/*FILE *file;
	file = fopen("text.txt" , "w");
	fprintf(file , "PAKISTAN");
	*/
	
//	FILE *file;
//	file = fopen("textAppend.txt" , "a");
//	fprintf(file , "metro star");


//	int i; 
//	for(i = 1 ; i<=20 ; i++){
//		
//	createTableFile(i);
//	}

	FILE * file;
	file = fopen("Tables Print.txt" , "r");
	char DateCatchInFile;
	DateCatchInFile = fgetc(file);
	while(DateCatchInFile !=-1){
		printf( "%c" , DateCatchInFile);
		DateCatchInFile = fgetc(file);
		
	}

}

void createTableFile(int table){
	FILE *file;
	file = fopen("Tables Print.txt" , "a");
	fprintf(file , "\n\n---------------------TABLE OF %d------------------ \n\n" , table);
	int i;
	for(i=1 ; i<=10 ; i++){
		fprintf(file , "%d X %d = %d \n" , table , i , (i*table) );
	}	
	
}
