N = int(input())

des=0
for i in range(N):
	t,x,y=map(int,input().split())
	if x+y>t or ((x+y)-t)%2!=0:
		print('No')
		des=1
		break
if des==0:
	print("Yes")
