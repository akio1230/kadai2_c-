// kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num;
	int num1;
	char ope;
	char input;

	while (1)
	{
		printf("演算子 (+, -, *, /) を入力してください\n");
		scanf_s("%c", &ope);

		printf("数値を1個ずつ入力してください\n");
		scanf_s("%d  %d", &num, &num1);

		switch (ope)
		{
		case '+':
			printf("足し算の結果は %d です\n", num + num1);
			break;
		case '-':
			printf("引き算の結果は %d です\n", num - num1);
			break;
		case '*':
			printf("掛け算の結果は %d です\n", num * num1);
			break;
		case '/':
			if (num1 == 0.0)
			{
				printf("ゼロでの割り算はできません\n");
				
			}
			printf("割り算の結果は %d です\n", num / num1);
			break;
		}
		printf("---------------------------------\n");

		printf("計算を続けますか？続けるのならyを押してください、終わるのならyいがいを押してください\n");

		scanf_s("%c", &input);

		if (input != 'y' && input != 'Y')
		{
			break;
		}

		printf("----------------------------------\n");

	}
	return 0;

}

