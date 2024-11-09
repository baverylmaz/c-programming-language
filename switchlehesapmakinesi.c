#include<stdio.h>

int main()
{
	
	int a,b,sonuc;
	int islem;
	
	printf("islemler\n1 toplama\n2 cikarma\n3 carpma\n4 bolme\n\n");
	
	printf("islemi seciniz:");
	scanf("%d",&islem);
	
	printf("iki sayi giriniz:");
	scanf("%d %d",&a,&b);
	
	switch(islem)
	{
		case 1:
		sonuc=a+b;
		break;
			
		case 2:
		sonuc=a-b;
		break;
				
		case 3:
		sonuc=a*b;
		break;
					
		case 4:
		if(a<b)
		{
		printf("a b ye bolunemez.");
		}
		else
		{
		sonuc=a/b;
		}
		break;
						
		default:
		printf("bilinmeyen islem.");
		break;
	}
	
	printf("islem sonucu: %d",sonuc);
	
	return 0;
	
}