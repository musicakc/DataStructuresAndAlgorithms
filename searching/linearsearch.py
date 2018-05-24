'''Linear Search or Traversing'''

def linearsearch(array, elem):
	for i in range(len(array)):
		if array[i] == elem:
			return True
	return False

arr = [2,4,6,7,8,9,10,14,16,33,455,99,33]
print(linearsearch(arr, 33))