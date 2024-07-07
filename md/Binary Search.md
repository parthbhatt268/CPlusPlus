# Binary Search

### 1. Simple Binary Search[- LeetCode](https://leetcode.com/problems/binary-search/description/)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-12-49-44-image.png)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-12-50-10-image.png)

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = 0;
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end) {
            mid = start + (end - start)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if (target <= nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
};
```

---

---

---



### 2. Search in 2D matrix [- LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-13-18-48-image.png)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-13-19-13-image.png)

#### hint - apply BS 2 times (First to find extact row and nex tot find element in that row)

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bot = matrix.size() - 1;

        while (top <= bot) {
            int mid = (top + bot) / 2;

            if (matrix[mid][0] < target && matrix[mid][matrix[mid].size() - 1] > target) {
                break;
            } else if (matrix[mid][0] > target) {
                bot = mid - 1;
            } else {
                top = mid + 1;
            }
        }

        int row = (top + bot) / 2;

        int left = 0;
        int right = matrix[row].size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return false;        
    }
};
```



---

---

---

### 3. Koko eating bananas

(Basically we are tyring to reduce the search space,, so first we will plot the min k value that koko will have and max she can have. and then we will skrink the search space using BS)

solution link - [Koko Eating Bananas - Binary Search - Leetcode 875 - Python - YouTube](https://www.youtube.com/watch?v=U2SozAs9RzA)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-15-26-34-image.png)

![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-15-26-46-image.png)

hint - ![](C:\Users\parth\AppData\Roaming\marktext\images\2024-07-07-16-45-20-image.png)

```cpp
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        while(start < end)
        {
            int mid = start + (end - start)/2;
            int total = 0;
            for(int pile : piles)
            {
                total = total + ceil((double)pile / mid);
            }
            if(total > h)
            {
                start = mid + 1;
            }
             else {
                end = mid;
            }
        }
        return start;
    }
};  
```

---

---

---
