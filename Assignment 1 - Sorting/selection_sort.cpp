
// Thuật toán Selection sort

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {

    // Tim phan tu be nhat trong mang
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		// Swap voi phan tu dau tien
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}
