/*
 * main.c
 *
 *  Created on: Nov 4, 2018
 *      Author: sheida
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LINE 182
int main(int argc,char *argv[]){

	FILE *fp;
	char line[MAX_LINE];
	int space;
	int i;

	if(argc!=2){
		printf("number of parameters error!\n");
		exit(1);
	}
	printf("starting...!\n");
	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Error on opening file\n");
		exit(1);
	}
	while(fgets(line,MAX_LINE,fp)!=NULL){
		space=(MAX_LINE-strlen(line))/2;
		printf("number of line: %d\n",space);
		for(i=0;i<space;i++){
			printf(" ");
		}
		printf("%s",line);
	}
	fclose(fp);
	return 0;

}
