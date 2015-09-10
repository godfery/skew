#include <cv.h>
#include <highgui.h>

#define TEMPLATE_DIR_1 "/home/andrei/img/pas/templ1/"

#define TEMPLATE_DIR_2 "/home/andrei/img/pas/templ2/"

#define TEMPLATE1 "template1.jpg"

#define TEMPLATE2 "template2.jpg"

void templMatching(IplImage *src);

IplImage *templCreateTempl(char *dir, char *files[], char *filename, int filesc);

IplImage *templGet(char *templ, char *files[], int filesc);
