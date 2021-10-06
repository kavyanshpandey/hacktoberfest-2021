def selection_sort(arr):
    # Traverse through all array elements
    for i in range(len(arr)):
        # Find the minimum element in remaining 
        # unsorted array
        min_idx = i
        for j in range(i+1, len(arr)):
            if arr[min_idx] > arr[j]:
                min_idx = j       
        # Swap the found minimum element with 
        # the first element        
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    return arr
  

  
# Driver code to test above
try:
    print('Enter the array elements seperated by a space')
    arr = list(map(int, input().split()))
    arr = selection_sort(arr)
    print('Sorted Array is : ')
    print(arr)
except Exception as e:
    print(e)
