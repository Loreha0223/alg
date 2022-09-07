n = int(input())
m1 = list(map(int, input().split()))
m1.sort()

m = int(input())
m2 = list(map(int, input().split()))

def binary(target):
    left = 0
    right = n-1

    while (left<=right):
        mid = (left+right)//2
        if(m1[mid] == target):
            return True
        elif m1[mid] < target:
            left = mid+1
        else:
            right = mid-1
    return False

for i in m2:
    if binary(i):
        print(1)
    else:
        print(0)
        
