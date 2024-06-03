#include <stdio.h>

int main(void) {
	int i, n[3];
	
	//scanf("%d %d %d", &n[0], &n[1], &n[2]);
	
	//printf("v0 %d \nv1 %d \nv2 %d", n[0], n[1], n[2]);
	
	for(i=0; i<3; i++)
		scanf("%d", &n[i]);
	
	for(i=0; i<3; i++)
		printf("v[%d] = %d\n", i, n[i]);
	
	return 0;
}
