#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
 /*
 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，
这样它就有足够的空间保存来自 nums2 的元素。

链接：https://leetcode-cn.com/problems/merge-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 */
/*
把数组2拷贝到数组一上去，再进行排序。
时间复杂度：O(M+N*log(M+N))

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int* tmp=(int*)malloc(sizeof(int)*(m+n));
    int i1=0;int i2=0;
    int i=0;
    while(i1<m&&i2<n)
    {
        if(nums1[i1]<nums2[i2])
        {
            tmp[i]=nums1[i1];
            i1++;
            i++;
        }
        else
        {
            tmp[i]=nums2[i2];
            i2++;
            i++;
        }
    }
    while(i1<m)
    {
        tmp[i]=nums1[i1];
        i++;i1++;
    }
    while(i2<n)
    {
        tmp[i]=nums2[i2];
        i++;i2++;
    }
    memcpy(nums1,tmp,sizeof(int)*(m+n));
    free(tmp);
}
*/


/*
给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
进阶：
尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？

链接：https://leetcode-cn.com/problems/rotate-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*
1,开辟K大小的临时数组，后k个和前K个互换一下， 时间复杂度O N  空间复杂度 O K

2,每次旋转一次，保存最后一个，前n-1个数依次往后挪动，最后一个数放到第一个位置去。旋转K次
时间复杂度O（N*K）

3,前n-k个逆置，后k个逆置，整体逆置。 时间复杂度O（N） 空间复杂度0（1）

void reverse(int*nums,int left,int right)
{
    while(left<right)
    {
        int tmp=nums[left];
        nums[left]=nums[right];
        nums[right]=tmp;
        ++left;--right;
    }
}

void rotate(int* nums, int numsSize, int k){
    k%=numsSize;
reverse(nums,0,numsSize-k-1);
reverse(nums,numsSize-k,numsSize-1);
reverse(nums,0,numsSize-1);
}
*/