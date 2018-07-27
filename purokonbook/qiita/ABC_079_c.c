
/*切符には4つ以上の0以上9以下の整数ABCDが整理番号として書かれている。
ABCDに対して+か-を入れることで７を作る。

答えが必ず存在する入力しか与えられない。
*/

/*ビット全探索で解く*/

#include <stdio.h>

int main() {
  int a,b,c,d;
  int i, j;
  int n;

  scanf("%1d %1d %1d %1d", &a, &b, &c, &d);


  for(i = 0; i < (1 << 4); i++){ //全てのパターンをbitによって列挙
    n = a;
    n += (i&1) ? b : -b; //1にフラグが立ってたらプラス。否だとマイナス
    n += (i&2) ? c : -c; //2にフラグが立ってたらプラス。否だとマイナス
    n += (i&4) ? d : -d; //3にフラグが立ってたらプラス。否だとマイナス
    if(n == 7){
      printf("%d%c%d%c%d%c%d=7\n", a, i&1? '+':'-',  b, i&2? '+':'-', c, i&4? '+' : '-', d);
      return 0;
    }
  }
}
