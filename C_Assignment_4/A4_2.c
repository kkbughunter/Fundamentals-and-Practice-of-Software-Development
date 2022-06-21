#include <stdio.h>
void pushZerosToEnd(int arr[], int n);

void pushZerosToEnd(int arr[], int n)
{
	int move = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] != 0){
			arr[move++] = arr[i];
            }
        }
	while (move < n){
		arr[move++] = 0;
    }
}

int main()
{
	int arr[] = {5, 3, 0, 1, 3, 0, 8, 0};
	int n = sizeof(arr) /4;
	pushZerosToEnd(arr, n);
	for (int i = 0; i < n; i++)
	printf("%d,", arr[i]);
	return 0;
}
