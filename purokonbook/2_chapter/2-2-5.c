/*Fence Repair
フェンスを修理するためにとても長い板からN個の板を切り出す。
切り出す板の長さはそれぞれに異なり、板の合計長はもとの板と同じ。
板を切断するにはその板の長さと同じだけのコストがかかる。

長さ21の板から5,8,8の板をきりだす。
21の板を13と8に切り出すには21のコストがかかる。

与えられた板に対して最小のコストですべての板を切り出す。
*/

/*この問題は2分木で対応する。
一つの板が分割されると、二分木は一つ深くなる。
これより、コストは以下の式で求められる。
コストの合計　＝　板の長さ　×　ノードの深さ

これはコストはノードの深さと板の長さに依存することに由来する。
板を切るコストは板の元の長さに依存するため、ノード深さの分だけ
コストがかかる。
*/

#include <stdio.h>

int main() {
  int n;
  int l[20000];

  scanf("%d %d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &l[i]);
  }

  
  return 0;
}
