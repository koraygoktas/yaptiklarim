#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char min,mak,str1[100],str2[100],str3[200];
	int i,j,k=0,l=0,s;
	printf("birinci metni giriniz");
	gets(str1);
	printf("ikinci metni giriniz");
	gets(str2);
	for(i=0;str1[1]!='\0';i++)
		k++;
	
	while(str2[1]!='\0')
		l++;
	
	printf("\n 1-str1 dizisinin uzunlugunu bulunuz");
	printf("\n 2-str2 dizisinin uzunlugunu bulunuz");
	printf("\n 3-str1 ve str2 dizilerini birlestir");
	printf("\n 4-str1 dizisindeki en buyuk karakteri bulunuz");
	printf("\n 5-str2 dizisindeki en kucuk karakteri bulunuz");
	printf("\n\n yapmak istediginiz islemi seciniz");
	scanf("%d",&s);
	while(s!=-1)
	{
		switch(s)
		{
		case 1:
			printf("\nstr1=%d",k);
			break;
		case 2:
			printf("\nstr2=%d",l);
			break;
		case 3:
			for(i=0;str1[i]!='\0';i++)
				str3[i]=str1[i];
			for(j=0;str2[j]!='\0';j++)
				str3[i+j]=str2[j];
			str3[i+j]='\0';
			printf("\n%s",str3);
			break ;
		case 4:
			mak=str1[0];
			for(i=0;str1[i]!='\0';i++)
			{
				if(str1[i]>mak)
					mak=str1[i];
					
			}
			printf("\n%c",mak);
			break;
		case 5:
			min = str2[0];
			for(j=0;str2[j]!='\0';i++)
			{
				if(str2[j]<min)
				min=str2[j];
				
			}
			printf("\n%c",min);
			break;
		}
		printf("\n\n devam etmek icin bir islem seciniz cikis icin -1'e basiniz");
		scanf("%d",&s);
	}
		
	
	return 0;
}