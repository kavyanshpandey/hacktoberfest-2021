def binary(a, l, h, n):
    if h >= l:
        mid = (h + l) //2
        if a[mid] < n:
            low = mid + 1
        elif a[mid] > n:
            high = mid - 1
        else:
            return mid
    return -1
    
a =[1,2,3, 4,10, 30]
n = 3 
res = binary(a, 0, len(a) - 1, n)
if res == -1:
    print("Number not present")
else:
    print("number is at index ",str(res))
