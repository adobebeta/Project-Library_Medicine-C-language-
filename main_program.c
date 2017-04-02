#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	int c;
	char customer[1000]; //อาการที่ลูกค้าเป็น
	char arkarn[1000];
	char roke[1000];
	printf("ใส่อาการที่พบ : ");
	scanf("%s", customer);
	FILE *file; //ประกาศตัวแปลไฟล์
	char line[1024]; //จำนวนบรรทัด

	file = fopen("symptom.txt", "r");
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

   	char search[1000];
   	char original[5] = ".txt";

   	printf("กรุณาใส่ชื่อโรคที่ต้องการหาข้อมูลเพิ่มเติม : ");
   	scanf("%s" , search);
   	strcat(search, original);

   	FILE *find; //ประกาศตัวแปลไฟล์
   	find = fopen( search, "r");
	if (find) {
	    while ((c = getc(find)) != EOF)
	        putchar(c);
	    fclose(find);
	}


	return(0);
}