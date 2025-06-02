class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        int res = 0;
        int majority = 0;
        for(int i:nums){
            map.put(i,1+map.getOrDefault(i,0));
            if(map.get(i)>majority){
                res = i;
                majority = map.get(i);
            }
        }
        return res;
    }
}