//
//// ????? ? ????? ?? ???? ?????. ?? ?? ???????? ?????????? ? ????.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int Merge(int* firstArr, int firstSize, int* secondArr, int secondSize, int* resultArr)
//{
//    int resultIter = 0;
//    int firstIter = 0;
//    int secondIter = 0;
//    int inversions = 0;
//
//    while (firstIter < firstSize && secondIter < secondSize) {
//
//        if (firstArr[firstIter] < secondArr[secondIter])
//            resultArr[resultIter++] = firstArr[firstIter++];
//
//        else {
//            resultArr[resultIter++] = secondArr[secondIter++];
//            inversions += firstSize - firstIter; 
//        }
//    }
//
//    while (firstIter < firstSize)
//        resultArr[resultIter++] = firstArr[firstIter++];
//
//    while (secondIter < secondSize)
//        resultArr[resultIter++] = secondArr[secondIter++];
//
//    return inversions;
//}
//
//int mergeSortCount(int* pArr, int size, int* pBuffer) {
//
//    if (size <= 1)
//        return 0;
//
//    int middle = size / 2;
//    int inversions = 0;
//
//    inversions += mergeSortCount(pArr, middle, pBuffer);
//    inversions += mergeSortCount(pArr + middle, size - middle, pBuffer + middle);
//
//    inversions += Merge(pArr, middle, pArr + middle, size - middle, pBuffer);
//
//    for (int i = 0; i < size; i++) {
//    
//        pArr[i] = pBuffer[i];
//    
//    }
//
//    return inversions;
//
//}
//
//int mergeSort(int* arr, int size) {
//
//
//    int* buffer = new int[size];
//    int result = mergeSortCount(arr, size, buffer);
//    
//    delete[] buffer;
//
//    return result;
//}
//
//
//
//int main() {
//
//    constexpr int size = 5;
//    int arr[size] = { 2, 4, 1, 3, 5 };
//
//    int res = mergeSort(arr, size);
//
//    std::cout << res;
//
//}