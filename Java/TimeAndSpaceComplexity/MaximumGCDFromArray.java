class Solution {
    public int maxGCD(int[] nums) {
        Map<Integer, Integer> freq = new HashMap<>();
        int ans = 1;
        for (int num : nums) {
            for (int d = 1; d * d <= num; d++) {
                if (num % d == 0) {
                    freq.put(d, freq.getOrDefault(d, 0) + 1);
                    if (d != num / d) {
                        freq.put(num / d, freq.getOrDefault(num / d, 0) + 1);
                    }
                }
            }
        }
        
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            if (entry.getValue() >= 2) {
                ans = Math.max(ans, entry.getKey());
            }
        }
        return ans;

    }
}
