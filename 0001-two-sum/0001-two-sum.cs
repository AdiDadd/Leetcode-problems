public class Solution {
    public int[] TwoSum(int[] nums, int target) {
  Dictionary<int, int> map = new Dictionary<int, int>();
         for(int i=0; i<=nums.Length;i++){
         int a = target - nums[i];
           if(map.ContainsKey(a) ){
               return new int[] {map[a], i};
           }

           if (!map.ContainsKey(nums[i])){
               map[nums[i]] = i;
           }
        }
        return new int[]{};
    }
    
    
}