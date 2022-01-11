#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	char s;
	for(int i=1;i<=n;i++){
	    scanf(" %c",&s);
	    if(s=='B' || s=='b')
	        printf("BattleShip\n");
	    else if(s=='C' || s=='c')
	        printf("Cruiser\n");
	    else if(s=='D' || s=='d')
	        printf("Destroyer\n");
	    else if(s=='F' || s=='f')
	        printf("Frigate\n");
	}
	return 0;
}

