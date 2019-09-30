def merge(Arr, start, mid, end) :

	temp[] = [0] * (end - start + 1)

	i, j, k = start, mid+1, 0

	while(i <= mid and j <= end) :
		if(Arr[i] <= Arr[j]) :
			temp[k] = Arr[i]
			k += 1; i += 1
		else :
			temp[k] = Arr[j]
			k += 1; j += 1

	while(i <= mid) 
		temp[k] = Arr[i]
		k += 1; i += 1

	while(j <= end)
		temp[k] = Arr[j]
		k += 1; j += 1


	for(i = start; i <= end; i += 1)
		Arr[i] = temp[i - start]


def mergeSort(Arr, start, end) {

	if(start < end) :
		mid = (start + end) / 2
		mergeSort(Arr, start, mid)
		mergeSort(Arr, mid+1, end)
		merge(Arr, start, mid, end)
