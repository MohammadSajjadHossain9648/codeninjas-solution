#include<iostream>
using namespace std;
/*
    to know more: https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
*/
int sum_of_array(int arr1[], int len1, int arr2[], int len2)
{
    int num1 = 0, num2 = 0;
    for(int i=0; i<len1; i++)
    {
        num1 = num1*10 + arr1[i];
    }
    for(int i=0; i<len2; i++)
    {
        num2 = num2*10 + arr2[i];
    }

    return num1+num2;
}
int main()
{
    int arr1[] = {6}, arr2[] = {1,2,3,4};
    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    int result = sum_of_array(arr1, len1, arr2, len2);
    cout<<"sun of two arrays: "<<result<<endl;

    //output:
    //  sun of two arrays: 1240
}
