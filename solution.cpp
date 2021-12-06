//
// Created by Антон Шмидт on 04.12.2021.
//

#include "solution.h"

int Solution::search(std::vector<int> &nums, int target) {
  int index = -1;
  int size = nums.size();
  if (0 < size) {
    int lower = 0;
    int upper = size - 1;

    while (lower <= upper) {
      index = (lower + upper) / 2;
      int mid = nums[index];
      if (target == mid) {
        return index;
      } else if (target < mid) {
        upper = index - 1;
      } else {
        lower = index + 1;
      }
    }
  }

  return -1;
}
