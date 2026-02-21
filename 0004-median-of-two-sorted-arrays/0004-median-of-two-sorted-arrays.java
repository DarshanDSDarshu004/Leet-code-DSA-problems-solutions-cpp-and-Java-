class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        List<Integer> li = new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            li.add(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            li.add(nums2[i]);
        }
        Collections.sort(li);
        int x = li.size();
        if(x%2!=0)
        {
             
            return li.get(x/2);
        }
        return(li.get(x/2)+li.get((x/2)-1))/2.0;

    }
}