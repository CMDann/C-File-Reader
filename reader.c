#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch, file_name[25];
	FILE *fp;

	// Get the file that we want to read
	printf("What file do you want to see yo?\n");
	gets(file_name);

	// Read mode on!
	fp = fopen(file_name,"r");

	// Make sure the file exists
	if( fp == NULL )
	{
		perror("This file produced an error yo!.\n");
		exit(EXIT_FAILURE);
	}

	// Output the contents of the file.
	printf("The contents of %s file are yo!:\n", file_name);

	// Loop through the file and output
	while( ( ch = fgetc(fp) ) != EOF )
		printf("%c",ch); // Display the contents

	// Close the connection
	fclose(fp);
	return 0;
}
