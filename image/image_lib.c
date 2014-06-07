
//puts("image Top Segmented loaded");

/*
int image(void){
    //puts("image module loaded");
}
*/

char img_format[] = "PNG";
char img_location[] =	"game_files/images"; 
char img_name[] = "null";	
int img_byte_size = 24 ; 
int img_width =	250; 
int img_height = 250;
int img_pos_y = 0; //top 
int img_pos_x = 0; // left
int img_pos_z = 0; // right
int img_index = 0; // img overlay order
char img_conc_path[] = ""; // processed variable



/*
int img_conc_path_f(){
	
	size_t location = strlen(img_location);
	size_t name = strlen(img_name);
	
	char * s = malloc(location + name + 2); // + 2???
	memcpy(s, first, len1);
	//s[len1] = ' ';
	memcpy(s + len1 + 1, second, len2 + 1); // includes terminating null
	
}
*/

char* concat(char *s1, char *s2)
{
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    char *result = malloc(len1+len2+1);//+1 for the zero-terminator
    //in real code you would check for errors in malloc here
    memcpy(result, s1, len1);
    memcpy(result+len1, s2, len2+1);//+1 to copy the null-terminator
    return result;
}

