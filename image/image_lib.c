
puts("image Top Segmented loaded");

/*
int image(void){
    //puts("image module loaded");
}
*/

char img_format = "PNG";
char img_location =	"game_files/images"; 
char img_name = "null";	
int img_byte_size = 24 ; 
int img_width =	250; 
int img_height = 250;
int img_pos_y = 0; //top 
int img_pos_x = 0; // left
int img_pos_z = 0; // right
int img_index = 0; // img overlay order

/*
	PNG Variables

uint8 *png_zbuffer; 
uint8 *png_zbuffer_end;
int png_num_bits;
uint32 png_code_buffer;
char *png_zout;
char *png_zout_start;
char *png_zout_end;
int   png_z_expandable;
zhuffman png_z_length;
zhuffman png_z_distance;
*/

/*
	BMP Variables
*/

unsigned long bmp_temp = 0;
unsigned long bmp_i = 0;
unsigned long bmp_j = 0;
unsigned long bmp_ww;
int bmp_ch;
int bmp_ch1;
int bmp_ch2;


/*
	Segments Explained
Now we can see that BMP can moved in any way we want, except to move up a level of top Segment. Because it will 
have no variables loaded. The straight forward declaration helps more then people would consider it... 

This guy at the history channel says this : If two theory's explain
the same thing go with the less complex and only move in complexity if it fail to explain something...
The less complex theory is often true.	
	
This is very applicable in this case, the complexity that one creating by starting to declare structures, 
arrays, defined variables and so, will make the code hardly redable. Since we are not reading text and the information
is not implicit we need to interpreted what is going on. Any kind of code that leads to more interpretation	
is the less correct code... It will slow down: readability, productivity, logic composition and so on... 

This is a principle that Segmentation follows to the line, it start's with the most simple stuff and only move up 
in complexity when needed...

This principle is what make possible to have a GTS perspective, you have to have a deeper perspective in order
to be understand the dependencies. If do don't understand the dependencies when you look at the code you need to
code in STG. Because you need to assume that some things will be there lather on. But assumptions often will 
lead to mistakes while certainty which is the principle of GTS will not lead to mistakes because they will only
result in mistakes if the scoope if GTS do changes. If we do not count in doing changes to the scoope in this 
case is the language it self. GTS will never lead to mistakes or almost never will lead to mistakes.

That's the point in GTS to synthesize the code to a point we can work with the dependencies to be able to code
Segments, when we are able to work with dependencies we are capable of using Segments the only way possible to use
GTS. Since GTS works with certainties and not assumptions, the code will always beat in performance STG. No 
matter how much sensitization you do to OOP you will always will be beaten. When Segments are structure 
can compete in terms of reusability, but that is not the main point in Segments, while that is often the main 
point in OOP.

Because of the large structures that are create in OOP not sure if Segments reach a point where they can out beat
OOP structures, but it does not need to beat OOP at that because that's what OOP is good at in creating massive
code structures.What Segments can do and will do is to have a direct approach which increases writing capability in 
assembling code.

Probably STG or OOP should only be used at the language scoop which is the lowest point to code, in order to assemble the structure. If you go up 
and attempt to create a sub structure, you start to isolate your code, you create a island also called a sub structure. 
ANd for the point of view of logic you should not create a structure inside a structure. What you should do is 
to use the structure that you already have. And for that is called Segmentation, to derive from the parent or structure, and say :
"i do not know who is the parent i want to do my own thing"...

It will fail from the point of view of logic because the main aspect of a structure is to allow for GTS, if you 
attempt to create a structure inside a structure it will not work was if you only use the structure that was 
already created. It works to a point, but you are creating islands of code, they work well for it self, but they
are isolated in terms of logic from the rest of people. For a new coder to learn it need to study the main structure,
and then the sub structures that where created. Then result is something not very understandable...

To code with GTS is to code at dependency level. To code at dependecy level is to understand the structure and
be able to alter the structure with out making structural changes to the code while having the capability to do
changes at the code level, which could translates in having a code hierarchy. That's can be another why to 
translate Segmentation is to work with code hierarchy.

This explanation will be probably moved to the "Segmentation_theory" folder for now it will stay in here so
that people can see it working in a real C example.
*/

/*
	Application just for example
*/

implicte used: //img_location =	"game_files/images"

img_width = 40;
img_height = 40;
img_name = "header";	
img_format = "JPG";
jpg_compression = "40%"; // for example let's suppose that only jpg allows compression. If more images start to
								 // allow compression with need to update this in to img_compression = "40%". 

image_1 = load_image();

// this is a working footer that is not in the main folder at the moment

img_location =	"external_folder/images/footers"
img_width = 150;
img_height = 150;
img_name = "footer_new";	
img_format = "PNG";
PNG_byte = "8"; // some kind of need to override values, to fix PNG bug's...

image_2 = load_image();

/*

The image can't operate with out the top dependencies, is dependent on the parent, still you could do changes to
the top dependencies with out breaking this code. Because you can choose to alter the top dependencies for example to
upgrade the PNG and the top dependencies while leave the old top dependencies just to work with BMP, because at this
time you didn't have time to upgrade the BMP code with the new Top dependencies.

Though your code is depended it does not mean, it will break immediately.
if you choose to start doing upgrades.
Is just a matter of reset top dependencies or include the old dependencies only for this file.

*/

/*
	Practical term... 
	we reuse the top variables of the img_ which are common to all images formats...

--------------------------------
	If we do need to do updates: 
------------------------------------
	
	 main.c ->  
		-> image
		-> jpg   
		-> png 	
		-> tga	
		
	main.c > 
	 jpg ->  image.c // un updated image
	 png ->  image_new.c // update image 
	 tga -> image.c // un updated image
	 
-------------------------------	 
	 
	 You can see that just because you can make the code dependent does not mean it is 100% dependent... 
	 Once those dependency become visible the process of actually doing GTS it will be evident...

*/
/*
	A example for common used functions:

	A function that is load at top Segment, that work with common variables and is also called at sub Segments
*/	
	function load buffer(buffer){ // Some kind of common loader...
		return buffer
	}
/*	

/*
	Not working atm, just for the sake of development and example illustration...
*/


int loadbitmap(char *filename){
	
	FILE *ptr = NULL; //file handle to open bitmap file
	ptr = fopen(filename,"rb"); //open the bitmap file
	if(!ptr) return 0; //if its not there return

	fseek( ptr, 18, SEEK_SET); //got to offset 18 in file
	
	for(bmp_i = 0x1; bmp_i <= 0x10000; bmp_i *= 0x100){ //read the width
		bmp_temp = fgetc(ptr);
		img_width += (temp*i);
	}

fseek(ptr,22,SEEK_SET); //go to offset 22 in file

for(i = 0x1; i <= 0x10000; i *= 0x100){ //read the height
	bmp_temp = fgetc(ptr);
	img_height += (temp*i);
}

bmp_ww = img_width; //ww is the number of reads to make for each horizontal line

if(bmp_ww % 2) //ww has to be half of width - since each pixel is only 4 bits of information
bmp_ww++;
bmp_ww /= 2; //just getting the correct value

if(bmp_ww%4) //now - ww is stored as sets of 4 pixels each - i think !?! :so this is the adjustment made
bmp_ww=(bmp_ww/4)*4+4; //if width is less than ww*2 we ignore what we read

fseek(ptr,119,SEEK_SET); //Ok! offset 119 - lets read the pixels -

//remember the bitmap is stroed up - side - down



for(i=0;i<height;i++){

for(j=0;j<ww;j++){
	
	bmp_ch = fgetc(ptr); //each character read is 2 pixels - yes 4 bits per pixel - so 16 colors
	bmp_ch1 = bmp_ch;
	bmp_ch2 = bmp_ch; //find those colors using bitwise ops
	bmp_ch1 = bmp_ch1&(0xf0);
	bmp_ch1 = bmp_ch1>>4; // ~~
	bmp_ch2 = bmp_ch2&(0x0f); // ~~
	
	if(j*2 < img_width) //ok so put the first pixel read on screen
	putpixel((j)*2,(img_height-1-i),getcol(ch1));
	
	if(j*2+1 < img_width) //put the second pixel read on screen
	putpixel((j)*2+1,(img_height-1-i),getcol(ch2));
}

fclose(ptr); //close the file handle
	return 1;
}


int getcol(int col){

	switch(col){
		case 0: return 0; //BLACK;
		case 1: return 4; //RED;
		case 2: return 2; //GREEN
		case 3: return 6; //BROWN
		case 4: return 1; //BLUE;
		case 5: return 5; //MAGENTA;
		case 6: return 3; //CYAN;
		case 7: return 7; //LIGHTGRAY;
		case 8: return 8; //DARKGRAY;
		case 9: return 12; //LIGHTRED;
		case 10:return 10; //LIGHTGREEN
		case 11:return 14; //YELLOW;
		case 12:return 9; //LIGHTBLUE;
		case 13:return 13; //LIGHTMAGENTA
		case 14:return 11; //LIGHTCYAN;
		case 15:return 15; //WHITE;
	}

 return col;
}
*/