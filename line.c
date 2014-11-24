//WAP to print that line taken from an input file having a certain pattern
//Sir's Method
#include<stdio.h>
#include<time.h>
#define MAXLINE 10000
int getlines(char line[],int max);
int strindex(char source[],char searchfor[]);
char pattern[]="ould";
int main(){
	char line[MAXLINE];
	int found=0;
	clock_t tic = clock();
	while(getlines(line,MAXLINE)>0){
		if(strindex(line,pattern)>=0){
			printf("%s",line);
			found++;
		}
	}
	printf("%d\n",found);
	clock_t toc = clock();
	printf("Elapsed: %lf seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);


	return 0;
}

int strindex(char s[],char t[]){
	int i,j,k;
	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++);
			if(k>0 && t[k]=='\0'){
				return i;
			}
	}
		//	else{
				return -1;
		//	}
	
//	}
}

int getlines (char s[],int len){
	int c,i;
	for(i=0; i<=(len-1) && ((c=getchar())!=EOF) && c!='\n';++i){
		s[i]=c;
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
