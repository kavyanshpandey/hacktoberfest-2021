#ifndef _SEARCH_H_
#define _SEARCH_H_

#include<iostream>

template<class T> int linearSearch(T arr[], int l, int r, const T& val){
    for(int i = 0; i <= r; i++){
        if(val == arr[i]) return i;
    }
    return -1;
}

template<class T> int binarySearch(T arr[], int l, int r, const T& val, bool recursive = true){
	if(val < arr[l] || val > arr[r]) return -1;
	if(recursive){  //recursive method
		int m = (r + l) / 2;
		if(val < arr[m]) return binarySearch(arr, l, m-1, val);
		if(val > arr[m]) return binarySearch(arr, m+1, r, val);
		return m;
	}
	else{  //iterative method
		while(l <= r){
			int m = (r + l) / 2;
			if(val < arr[m]) r = m-1;
			else if(val > arr[m]) l = m+1;
			else return m;
		}
	}
}

template<class T> int interpolationSearch(T arr[], int l, int r, const T& val){
	if(val < arr[l] || val > arr[r]) return -1;
	int m = l + ((val - arr[l])*(r-l) / (arr[r] - arr[l]));
	if(val > arr[m]) return interpolationSearch(arr, m+1, r, val);
	else if(val < arr[m]) return interpolationSearch(arr, l, m-1, val);
	return m;
}
#endif
