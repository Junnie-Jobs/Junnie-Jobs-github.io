#include <stdio.h>
#include <stdlib.h>

int isSorted(int arr[], int length)
{
    int i;
    
    for(i=0; i<length-1; i++)
    {
        if(arr[i]>arr[i+1])
            return 0;
        
    }
    return 1;
}

void merge(int arr[], int left, int mid, int right)
{
    int fIdx=left; int rIdx=mid+1; int i;
    int *sortArr = (int*)malloc(sizeof(int)*(right+1)); //병합결과 담을 메모리 공간 할당
    int sIdx=left;
    
    while(fIdx <= mid && rIdx <= right) //병합해 가면서 sortArr에 담는 과정
    {
        if(arr[fIdx] <= arr[rIdx])
            sortArr[sIdx]=arr[fIdx++];
        else
            sortArr[sIdx]=arr[rIdx++];
        sIdx++;
    }
    
    if(fIdx > mid)  //배열의 앞 부분이 sortArr에 모두 이동되어서 배열 뒷부분에 남은 데이터를 모두 sortArr로 이동
    {
        for(i=rIdx; i<=right; i++,sIdx++)
            sortArr[sIdx] = arr[i];
    }
    else            //배열의 뒷부분이 sortArr로 모두 이동되어서 배열 앞부분에 남은 데이터를 모두 sortArr로 이동!
    {
        for(i=fIdx; i<=mid; i++,sIdx++)
            sortArr[sIdx] = arr[i];
    }
    for(i=left; i<=right; i++){
        arr[i]=sortArr[i];      //병합 결과를 원래의 메모리 공간에 옮겨 담는다.
    }
    free(sortArr);
    
}

void mergeSort(int arr[], int left,  int right)
{
    int mid;
    
    if(left<right) //left가 작다는 것은 더 나눌 수 있다는 뜻!
    {
        //중간 지점 계산하기
        mid = (left+right) /2;
        
        //둘로 나누어 각각 정렬하기
        mergeSort(arr, left, mid); //left~mid에 위치한 데이터 정렬!
        mergeSort(arr, mid+1, right); //mid+1~right에 위치한 데이터 정렬!
        
        //정렬된 두 배열 병합
        merge(arr, left, mid, right);
    }
}

int main(int argc, const char * argv[]) {
    
    
    int arr0[]={};
    int arr1[1]={1};
    int arr2[2]={2,1};
    int arr20[20]={20,17,19,18,16,11,13,15,14,12,10,8,5,6,9,7,4,1,3,2}; //랜덤
    int arr201[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; //증가순
    int arr202[20]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}; //감소순
    int arr3[10]={3,3,3,3,3,3,3,3,3,3};
    
    mergeSort(arr0,NULL,NULL);
    mergeSort(arr1,0,0);
    mergeSort(arr2,0,1);
    mergeSort(arr20,0,19);
    mergeSort(arr201,0,19);
    mergeSort(arr202,0,19);
    mergeSort(arr3,0,9);
    
    isSorted(arr0,sizeof(arr0)/sizeof(int));
    isSorted(arr1,sizeof(arr1)/sizeof(int));
    isSorted(arr2,sizeof(arr2)/sizeof(int));
    isSorted(arr20,sizeof(arr20)/sizeof(int));
    isSorted(arr201, sizeof(arr201)/sizeof(int));
    isSorted(arr202,sizeof(arr202)/sizeof(int));
    isSorted(arr3,sizeof(arr3)/sizeof(int));
    
    printf("\n");
    
    for(int i=0; i<1; i++)
        printf("%d ", arr0[i]);
    
    printf("\n");
    
    for(int i=0; i<1; i++)
        printf("%d ", arr1[i]);
    
    printf("\n");
    
    for(int i=0; i<2; i++)
        printf("%d ", arr2[i]);
    
    printf("\n");
    
    for(int i=0; i<20; i++)
        printf("%d ", arr20[i]);
    
    printf("\n");
    
    for(int i=0; i<20; i++)
        printf("%d ", arr201[i]);
    
    printf("\n");
    
    for(int i=0; i<20; i++)
        printf("%d ", arr202[i]);
    printf("\n");
    
    for(int i=0; i<10; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    
    return 0;
    
}