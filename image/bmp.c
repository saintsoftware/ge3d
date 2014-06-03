/*
	Bit Mapp
*/

/*
	BMP Variables
*/

unsigned long bmp_temp = 0;
unsigned long bmp_i = 0;
unsigned long bmp_j = 0;
unsigned long bmp_ww; // horizontal reads
int bmp_ch;
int bmp_ch1;
int bmp_ch2;

/*
	BMP loader
*/
/*
int bmp(char *filename){ //char *filename
	
	FILE *file_p = NULL; //Pointer to file location, returned in a FILE format.
	file_p = fopen(filename,"rb"); //img_conc_path
	if(!file_p) return 0;
	fseek(file_p, 18, SEEK_SET); //got to offset 18 in file
	
	for(bmp_i = 0x1; bmp_i <= 0x10000; bmp_i *= 0x100){ //read the width
		bmp_temp = fgetc(file_p);
		img_width += (bmp_temp * bmp_i );
	}

	fseek(file_p, 22, SEEK_SET); //go to offset 22 in file
	
	for(bmp_i = 0x1; bmp_i <= 0x10000; bmp_i *= 0x100){ //read the height
		bmp_temp = fgetc(file_p);
		img_height += (temp*i);
	}
	
	bmp_ww = img_width; //Number of reads to make for each horizontal line
	
	if(bmp_ww % 2) //ww has to be half of width - since each pixel is only 4 bits of information
	bmp_ww++;
	bmp_ww /= 2; //just getting the correct value

	if(bmp_ww % 4) //ww is stored as sets of 4 pixels each - i think !?! :so this is the adjustment made
	bmp_ww = ( bmp_ww / 4) * 4 + 4; //if width is less than ww*2 we ignore what we read

	fseek(file_p, 119, SEEK_SET); //Offset 119 - Read the pixels -

	//Bitmap is stored up side down

for(bmp_i=0 ;i < img_height; bmp_i++){

	for(img_j = 0; img_j < ww; img_j++){
		
		bmp_ch = fgetc(ptr); //each character read is 2 pixels - 4 bits per pixel - 16 colors
		bmp_ch1 = bmp_ch;
		bmp_ch2 = bmp_ch; //find those colors using bitwise ops
		bmp_ch1 = bmp_ch1&(0xf0);
		bmp_ch1 = bmp_ch1>>4; 
		bmp_ch2 = bmp_ch2&(0x0f);
		
		if(img_j * 2 < img_width) //ok so put the first pixel read on screen
		putpixel( (img_j) * 2, (img_height-1-i), getcol(ch1) );
		
		if(img_j * 2 + 1 < img_width) //put the second pixel read on screen
		putpixel((img_jj)*2+1,(img_height-1-i),getcol(ch2));
	}

	fclose(file_p); 
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