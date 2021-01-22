#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Stack_base.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		printf("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1)
	{
		int menu, x;
		printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)푸쉬 (2)팝 (3)피크 (4)출력 (0)종료 : ");
		scanf("%d",&menu);

		if (menu == 0)	break;
		switch (menu){

		case 1 :
			printf("데이터 : ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				printf("\a오류 : 푸시에 실패하였습니다.");
			break;
		
		case 2 :
			if (Pop(&s, &x) == -1)
				printf("\a오류 : 팝에 실패하였습니다.");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;

		case 3 : 
			if (Peak(&s, &x) == -1)
				printf("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;

		case 4 : 
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}
