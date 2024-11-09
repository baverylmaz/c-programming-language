#include<stdio.h>

int main()
{
	
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("islemler\n1:para cekme\n2:para yatirma\n3:havale yapma\n4:bakiye sorgulama\n5:kart iade\n\n\n");
	
	printf("islemi seciniz:");
	scanf("%d",&islem);
	
	switch(islem)
	{
	        case 1:
	        printf("bakiyeniz: %d\n",bakiye);
	        printf("cekilecek tutar:");
	        scanf("%d",&tutar);
	        if(tutar>bakiye)
	        {
	            printf("bakiyeniz yetersiz.\n");
	        }
	        bakiye-=tutar;
	        printf("bakiyeniz: %d\n",bakiye);
	        break;
			
	        case 2:
	        printf("bakiyeniz: %d\n",bakiye);
	        printf("yatirilacak tutar:");
	        scanf("%d",&tutar);
	        bakiye+=tutar;
	        printf("bakiyeniz: %d\n",bakiye);
	        break;
		
	        case 3:
	        printf("bakiyeniz: %d\n",bakiye);
	        printf("havale yapilacak tutar:");
	        scanf("%d",&tutar);
	        if(tutar>bakiye)
	        {
	            printf("bakiyeniz yetersiz.\n");
	        }
	        bakiye-=tutar;
	        printf("bakiyeniz: %d\n",bakiye);
	        break;
	        
	        case 4:
	        printf("bakiyeniz: %d\n",bakiye);
	        break;
					
	        case 5:
	        printf("kart iade edildi.\n");
	        break;
				
	        default:
	        printf("bilinmeyen islem.\n");
	        break;				
	}
	return 0;
}