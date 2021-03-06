/*---
 * - 5-1.c
 * 2014/12/23(THU)
 * Walking Mask
 *
 * - プログラムの説明
 * C言語勉強会2014lt用プログラム
 * テキストC実践プログラミング p73 5.16 実習5-1
 * 摂氏を華氏に変換する
---*/

#include <stdio.h>

int main(){
	int p, q;			// 摂氏温度p，華氏温度q
	p = q = 0;
	printf("摂氏温度を入力してください => ");scanf("%d", &p);
	q = (9*p)/5 + 32;	// 華氏 = 9/5 * 摂氏 + 32
	printf("摂氏で%d度は華氏では%d度です\n", p, q);
	return(0);
}

/*---
出力結果
% ./5-1
摂氏温度を入力してください => 21
摂氏で21度は華氏では69度です
---*/
