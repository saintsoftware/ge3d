#include <stdio.h>	/*  file access input and output */ 
#include <string.h> /*Handle string funcionality like: strncmp()*/

/*
	The 3 processing stages of C:
	
	Preprocessor: At This stage all # files are replaced with real code
	Compilation proper : This stage turns a .c file into an .o (object) file.
	Linking: all object files and libraries are linked together to make the final program.  
*/

/*
	Registering Include files : to prevent to include files twice
*/

// Image Library

#ifndef image_lib
#define image_lib
	//extern void image(void); // din't figure out what this fore in this context
	#include "image/image_lib.c"
#endif


#ifndef jpg_sub 
#define jpg_sub
	#include "image/jpg_sub.c"
#endif 

#ifndef png_sub 
#define png_sub
	#include "image/png_sub.c"
#endif 

// Window & screen resolution

#ifndef screen 
#define screen
	#include "screen/screen_lib.c"
#endif 


/*
	Main Segments Wood level
	*An empty args main() loads nothing to printf
*/
	
char segment[13] = "loading_menu"; //max leng for array string we will be using + 1 for the end of line /0.
char *segment_p = segment;

/* function declaration goes here.*/
//int jpg(char);

int main(){ //int argc, char *argv[]  // args to do loading for printf
	
	//printf("Active Segment is %s.\n", segment);	
	
	// strncmp loaded from String.h , returns 0 if equal, 1 or -1 for others values.	
	//strncmp(inicitial string , new string, max possible size to compare)	
	
	if(0 == strncmp(segment_p, "game", 13)) {
		printf("Active Segment is %s.\n", segment_p);
	}
	else if(0 == strncmp(segment_p, "main_menu", 13) ) {
		printf("Active Segment is %s.\n", segment_p);
	}
	else if(0 == strncmp(segment_p, "loading_menu", 13 ) ){
		printf("Active Segment is %s.\n", segment_p);
		image();
		png("my adress1");
		jpg("my adress2");
	}
	else{
		printf("Segment %s not found .\n", segment_p);
	}
	
/*
	Misc Examples

	int distance = 100;
   float power = 2.345f;
   double super_power = 56789.4532;
   char initial = 'A';
   char first_name[] = "Zed";
   char last_name[] = "Shaw";

	 printf("You are %s segment away.\n", segment);

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
*/
	return 0;
}		
		