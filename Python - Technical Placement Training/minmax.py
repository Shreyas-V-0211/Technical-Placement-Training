def find_min_max(arr):
    arr.sort()  
    result = [arr[0], arr[-1]]  
    return result

array = [3, 7, 1, 9, 2, 5]
min_max = find_min_max(array)
print("Minimum and Maximum:", min_max)