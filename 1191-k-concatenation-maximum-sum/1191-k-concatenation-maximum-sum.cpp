class Solution {
public:
   
	int kConcatenationMaxSum(vector<int>& arr, int k) {
	 int n = arr.size(), sum = arr[0], mx = arr[0];
    int64_t total = accumulate(arr.begin(), arr.end(), 0), mod = 1e9+7;
    for (int i = 1; i < n * min(k, 2); i++) {
        sum = max(arr[i % n], sum + arr[i % n]);
        mx = max(mx, sum);
    }
    return max<int64_t>({0, mx, total * max(0, k - 2) + mx}) % mod;
}
};