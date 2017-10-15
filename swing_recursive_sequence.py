## 递归求解双递推摆动数列
## 已知递推数列:a[1]=1;a[2i]=a[i]+1;a[2i+1]=a[i]+a[i+1]
## 试建立递归，求该数列的第n(n<100000)项与前n项的和
def recursive(n):
	if n == 1 :
		a =  1
	elif n % 2 == 0 :
		a = recursive(n/2) + 1
	else:
		a = recursive(n//2) + recursive(n//2 + 1)
	return a
s = 0
n = 50
parameters={}
for i in range(n, 0, -1):
	parameters["a"+str(i)] = recursive(i)
	s = s + parameters["a"+str(i)]
print ("The sum is %d" % s)
print ("The last num is %d " % parameters["a"+str(n)])
