/*
How to get the screen resolution in Linux C (and more X window information)
Linux C: get the screen resolution and window size 

Happened to necessitate the retrieval of information about the screen of the canonical X window system (X11)  in use while I am employing Fedora Linux release 14.

Some guys (or gals maybe) suggest achieving this by GTK calls like gdk_screen_get_resolution or the like, I will prefer to using the legacy routines of Xlib for accessing to the X window information. For at least one thing, the X window system is presumably more likely to be installed in Linux OS than is the GTK/GTK+ libraries in my view.

Actually it is quite simpler than it might be postulated to be:

// -----------------------------------------------------------
// Purpose : simply retrieve current X screen resolution and 
//    the size of current root window of the default 
//    screen of curent default window
// -----------------------------------------------------------
*/
/*
#include <X11/Xlib.h>
#include <stdio.h>

int getRootWindowSize(int *w, int *h)
{
 Display* pdsp = NULL;
 Window wid = 0;
 XWindowAttributes xwAttr;

 pdsp = XOpenDisplay( NULL );
 
 if ( !pdsp ) {
  fprintf(stderr, "Failed to open default display.\n");
  return -1;
 }

 wid = DefaultRootWindow( pdsp );
 if ( 0 > wid ) {
  fprintf(stderr, "Failed to obtain the root windows Id "
      "of the default screen of given display.\n");
  return -2;
 }
 
 Status ret = XGetWindowAttributes( pdsp, wid, &xwAttr );
 *w = xwAttr.width;
 *h = xwAttr.height;

 XCloseDisplay( pdsp );
 return 0;
}

int getScreenSize(int *w, int*h)
{

 Display* pdsp = NULL;
 Screen* pscr = NULL;

 pdsp = XOpenDisplay( NULL );
 if ( !pdsp ) {
  fprintf(stderr, "Failed to open default display.\n");
  return -1;
 }

    pscr = DefaultScreenOfDisplay( pdsp );
 if ( !pscr ) {
  fprintf(stderr, "Failed to obtain the default screen of given display.\n");
  return -2;
 }

 *w = pscr->width;
 *h = pscr->height;

 XCloseDisplay( pdsp );
 return 0;
}

int main(){
 int w, h;

 getScreenSize(&w, &h);
 printf (" Screen:  width = %d, height = %d \n", w, h);

 getRootWindowSize(&w, &h);
 printf (" Root Window:  width = %d, height = %d \n", w, h);
 
 return 1;
 
}


/* gcc -o $@ $< -lX11 */


/* set ts=4 sts=4 tw=100 sw=4 */

//You can also retrieve more information about the X window system you are currently using, such as display name and the tag of vendor.

// -----------------------------------------------------------
// Purpose : simply retrieve current X windows information
// -----------------------------------------------------------
/*
#define XLIB_ILLEGAL_ACCESS
#include <X11/Xlib.h>
#include <stdio.h>

int main(){

 Display* pdsp = XOpenDisplay(NULL);
 Window wid = DefaultRootWindow(pdsp);

 Screen* pwnd = DefaultScreenOfDisplay(pdsp);
 int sid = DefaultScreen(pdsp);
 
 XWindowAttributes xwAttr;
 XGetWindowAttributes(pdsp,wid,&xwAttr);

 printf (" name : %s\n vendor : %s\n", pdsp->display_name, pdsp->vendor);
 printf (" pos : (%d, %d), width = %d, height = %d \n",
   xwAttr.x, xwAttr.y, xwAttr.width, xwAttr.height);

 XCloseDisplay( pdsp );
 
 return 1;
}


/* gcc -o $@ $< -lX11 */
/* set ts=4 sts=4 tw=100 sw=4 */

/*
Note that here "#define XLIB_ILLEGAL_ACCESS" was used for accessing to some of the data member in the Display structure in C.

For more data member accessible, see the definition/declarations in the header /usr/include/X11/Xlib.h.

PS: It is thankfully in the courtesy of http://www.craftyfella.com/2010/01/syntax-highlighting-with-blogger-engine.html to make the code snippets I posted above have a highlighted effect and look organized more trimly (otherwise it is always bit of mangled!) Thanks to craftyfella! 
*/