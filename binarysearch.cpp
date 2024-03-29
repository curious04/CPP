// #include<iostream>
// #include<cstdlib>

// using namespace std;

// int binarysearch(int a[],int n,int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=s+e/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid]>key){
//             e=mid-1;
//         }
//          else{
//              s=mid+1;
//          }
//     }
//     return -1;
// }
// int main(){
//     // int n;
//     // cin>>n;
//     int n;
//     n = (rand() % 100) + 1;
//     cout << "Size of array " << n << endl;
    
//     int a[n];
//     for(int i=0;i<n;i++){
//          a[i] = rand() % 100;
//         cout << a[i] << "   ";
        
//     }
//     int key;
//     cin>>key;
//     cout<<binarysearch(a,n,key)<<endl;
//     return 0;
// }

// // Time Complexity: O(log n)

// C++ program to implement iterative
// randomized algorithm.
#include <iostream>
#include <ctime>
using namespace std;

// To generate random number
// between x and y ie.. [x, y]
int getRandom(int x, int y)
{
	srand(time(NULL));
	return (x + rand()%(y-x+1));
}

// A iterative randomized binary search function.
// It returns location of x in
// given array arr[l..r] if present, otherwise -1
int randomizedBinarySearch(int arr[], int l,
							int r, int x)
{
	while (l <= r)
	{
		// Here we have defined middle as
		// random index between l and r ie.. [l, r]
		int m = getRandom(l, r);

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 10;
	int result = randomizedBinarySearch(arr, 0, n-1, x);
	(result == -1)? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
