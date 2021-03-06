
/*---
 * - 6-5.c
 * 2014/12/23(THU)
 * Walking Mask
 *
 * - プログラムの説明
 * C言語勉強会2014lt用プログラム
 * テキストC実践プログラミング p84 6.10 実習6-5
 * 西暦で入力した任意の年が閏年か判断する
---*/

#include <stdio.h>

int main(){
	int uru;

	printf("西暦年数を入力してください => ");
	scanf("%d", &uru);

	// 4で割り切れる年は閏年
	if(uru % 4 == 0){
		// 100で割り切れるが，400で割り切れない年は閏年ではない
		if((uru % 100 == 0) && (uru % 400 != 0)){
			printf("%d年は閏年ではありません\n", uru);
			return(0);
		}
		else
			printf("%d年は閏年です\n", uru);
	}
	else
		printf("%d年は閏年ではありません\n", uru);

	return(0);
}

/*---
出力結果
% ./6-5
西暦年数を入力してください => 2000
2000年は閏年です
---*/
