#include <stdio.h>

int interpol_serach(int *list , int n , int key){
    int low , high , j;
    low = 0;
    high = n-1;
    while(list[high] >= key && key > list[low]){
        j = ((float)(key - list[low]) / (list[high] - list[low])) * (high - low) + low;
        if(key > list[j]) low = j + 1;
        else if(key < list[j]) high = j - 1;
        else    low = j;
    }
    if(list[low] == key)    return(low);
    else    return -1;
}