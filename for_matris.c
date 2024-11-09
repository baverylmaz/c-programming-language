#include<stdio.h>

int main() {
	
	int matris[3][5];
	int i,j;
	int sum;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			scanf("%d",&matris[i][j]);
		}
    }
    
    printf("\n\n");
    
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(j=0; j<5; j++) {
		for(i=0; i<3; i++) {
			
			matris[i][j];
		}
		
	}
	
	return 0;
}