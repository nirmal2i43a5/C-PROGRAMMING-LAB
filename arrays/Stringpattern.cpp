#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char s[50]="nirmal";
//	char s1[50];
//	int i,end;
//	int l=0;
//	for(l=0;s[l]!='\0';l++);
//		
//	printf("%d\n",l);
//	end=l-1;
//	for(i=0;i<l;i++)
//	{
//		s1[i]=s[end];
//		end--;
//	}
//	s1[i]='\0';
//	puts(s1);
//}
int main(){


char s[50]="virinchi";
int i,j;
		for( i=0;s[i]!='\0';i++){
			for(j=7;j>=i;j--){
				printf(" ");
			}
				for( j=0;j<=i;j++){
					printf("%c",s[j]);
				}
				
				for(j=i;j>=1;j--){
					printf("%c",s[j-1]);
				}
			
			printf("\n");
			
		
		}
	}
