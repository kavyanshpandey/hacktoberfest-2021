arr = [3,2,8,0,32,23]
def bubblesort(arr):
    n = len(arr)
    for i in range(n-1,-1,-1):
        for j in range(i):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1] = arr[j+1],arr[j]
    print("Bubble Sort: ",arr) 
bubblesort(arr)
