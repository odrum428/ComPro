/*
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 各マスには 0 か 1 が書かれており、
マス i には si が書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

入力は以下の形式で標準入力から与えられる。

s1s2s3

出力
答えを出力せよ。
*/

#include <stdio.h>

#define N 3

int main() {
  int a;
  int i, count = 0;

  scanf("%d", &a);

  if(a % 10 == 1) count++; //一桁目

  if((a/10) % 10 == 1) count++; //二桁目　10で割り、10で除する

  if((a/100) % 10 == 1) count++;


  printf("%d\n", count);

  return 0;
}
