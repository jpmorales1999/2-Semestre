
#include <stdlib.h>
#include<stdio.h>



bool esprimo(int);
void insertarnummatriz(int);
int matriz[3][3],l=3,f=0,c=0;

int main(){
int n;
while(f!=l){
	n= rand()%100;

if(esprimo(n)){
	insertarnummatriz(n);
}
}

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
	}
	printf("\n");
}

getch();
return 0;
}

bool esprimo(int n){
	int i,primitos=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			primitos+=1;

		}
	}
	if(primitos==2){
		return true;
	}
	else{
		return false;
	}
}
void insertarnummatriz(int n){
	matriz[f][c]=n;
	c+=1;
	if(c==l){
		f+=1;
		c=0;

	}
}

