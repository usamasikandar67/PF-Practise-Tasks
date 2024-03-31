#include<stdio.h>
int main(){

FILE *fptr;
// firest parameter path , second mode
fptr= fopen("filename.txt","w");

fprintf(fptr,"Hi this\tis \nany text");

char j='a';
fputc(j,fptr);

j = fgetc(fptr);

printf("value of j is %c",j);
int h;
while((h=fgetc(fptr))!=EOF){
printf("%c",h);
}
char curr, search;
search='e';
while((curr=fgetc(fptr))!=EOF){
if(curr==search){
printf("found %c",curr);
break;
}
}
fclose(fptr);
return 0;}