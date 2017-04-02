#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	int c;
	char customer[100]; //อาการที่ลูกค้าเป็น
	char arkarn[100];
	char roke[100];
	printf("ใส่อาการที่พบ : ");
	scanf("%s", customer);
	FILE *file; //ประกาศตัวแปลไฟล์
	char line[1024]; //จำนวนบรรทัด

	file = fopen("text.txt", "r");
	printf("โรคที่มีโอกาสเป็น : ");
   	// start
   	if (file != NULL)
   	{
   		while( fgets(line,1024,file) ) { //วิ่งทีละไฟล์
	        fscanf(file, "%s %s", arkarn , roke); //รับค่าแล้วเพิ่มเข้าตัวแปร
	   		if (strcmp(arkarn,customer) == 0) //เปรียบเทียบว่าอาการมันตรงกันไหม?
	   		{
	   			printf("%s\n" , roke); //ถ้าตรงก็ปริ้นโรคเลย
	   		}
    	}
   	}
   	else
   	{
   		printf("Could not open file"); //ไม่เจอไฟล์
   	}
   	fclose(file);
	return(0);
}