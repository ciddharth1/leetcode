class Solution {
    public int[] twoSum(int[] a, int target) {
        // Code2Git UPDATE TEST// i am sid 
        int t,k;
        for( int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++){
                if(a[i]+a[j]==target){
                     return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
}
