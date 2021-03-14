#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>


//消失的数字。 一个数组0-n,消失了一个数，找到那个数。
//int missingNumber(int* nums, int numsSize) {
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; ++i)
//    {
//        ret = ret ^ nums[i];
//    }
//    for (i = 0; i <=numsSize; ++i)
//    {
//        ret = ret ^ nums[i];
//    }
//    return ret;
//}

/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-element
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
//
//int removeElement(int* nums, int numsSize, int val) {
//    int src = 0; int dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] != val)
//        {
//            nums[dst] = nums[src];
//            ++src;
//            ++dst;
//        }
//        else
//        {
//            ++src;
//        }
//    }
//    return dst;
//}


//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
//来源：力扣（LeetCode）
//链接：https :cn.com/problems/remove-duplicates-from-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*
int removeDuplicates(int* nums, int numsSize){
if(numsSize==0)
    return 0;
int prev=0;int cur=1;int dst=0;
while(cur<numsSize)
{
    if(nums[prev]!=nums[cur])
    {
        nums[dst]=nums[prev];
        ++dst;
        ++cur;
        ++prev;
    }
    else{
        ++cur;
        ++prev;
    }
}
 nums[dst]=nums[prev];
    dst++;
    prev++;
return dst;
}
*/


/*
对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，那么其数组形式为 [1,2,3,1]。

给定非负整数 X 的数组形式 A，返回整数 X+K 的数组形式。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-to-array-form-of-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
void nixu(int* arr,int x)
{
    int left = 0; int right = x - 1;
    while (left<right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++; right++;
    }
}

int* addToArryForm(int* A,int Asize,int k,int* returnsize)
{
    int ksize = 0;
    int kunm = k;//123
    while (kunm)
    {
        ksize++;
        kunm /=10;
    }
    int len = Asize > ksize ? Asize : ksize;
    int jinwei = 0;
    int ai = Asize - 1;
    int ri = 0;
    int* retArry = (int*)malloc(sizeof(int) * (len + 1));
    int ret = 0;
    while (len--)
    {
        int a = 0;
        if (ai >= 0)
        {
            a = A[ai];
            ai--;
        }
        ret = a+ k % 10 + jinwei;
        k /= 10;
        if (ret>=10)
        {
            ret -= 10;
            int jinwei = 1;
        }
        else
        {
            int jinwei = 0;
        }
        retArry[ri] = ret;
        ri++;
    }
    if (jinwei==1)
    {
        retArry[ri] = jinwei;
    }
    //逆序一下
    nixu(retArry,ri);
    return retArry;
    *returnsize = ri;
}