#include <stdio.h>	/*  file access input and output */ 
#include <string.h> /*Handle string funcionality like: strncmp()*/

/*
	Register Include files
Prevent to include files twice
*/

/*
	Image Library 
Main & Sub Segments 
*/

#ifndef image_lib
#define image_lib
	#include "image/image_lib.c"
#endif

#ifndef bmp_sub 
#define bmp_sub
	#include "image/bmp.c"
#endif 

/*
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
*/

/*
	Project	Info
*/

char pjt_title[] = "GPL Segment Library";
char pjt_email[] = "general@saintsoftware.eu.pn";
char pjt_author[] = "jdc"; 
char pjt_folder[] = "games_files/";
char pjt_segment[13] = "loading_menu"; //max leng for array string we will be using + 1 for the end of line /0.
int pjt_bits = 32;
char pjt_platform = "linux";

/*
	Database 
*/
	
char db_pass[] = "";
char db_user[] = "root";
char db_host[] = "localhost";	
char db_type[] = "mysql";
char db_table[] = "users";

/*
	Segment's Register
*/
	
int main(){
	
	if(0 == strncmp(project_segment, "game", 13)) {
		printf("Active Segment is %s.\n", project_segment);
	}
	else if(0 == strncmp(project_segment, "main_menu", 13) ) {
		printf("Active Segment is %s.\n", project_segment);
	}
	else if(0 == strncmp(project_segment, "loading_menu", 13 ) ){
		
		#ifndef loading_menu 
		#define loading_menu
			#include "game_files/loading_menu.c"
		#endif
	}
	else{
		printf("Segment %s not found .\n", project_segment);
	}
	
	return 0;
}		
		