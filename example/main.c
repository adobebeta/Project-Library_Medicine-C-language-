#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	int c;
	FILE *file; //ประกาศตัวแปลไฟล์
	file = fopen("test.txt", "r");
	if (file) {
	    while ((c = getc(file)) != EOF)
	        putchar(c);
	    fclose(file);
	}
	    return 0;
}