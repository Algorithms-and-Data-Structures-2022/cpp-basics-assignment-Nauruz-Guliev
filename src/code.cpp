#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int res = left - right;
    return res * res;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    } else if (mask >> bit_pos & 1) {
      return true;
    }
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle && left >= right) {
      return left;
    }
    if (right >= left && right >= middle) {
      return right;
    }
    if (middle >= left && middle >= right) {
      return middle;
    }
    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left == nullptr || right == nullptr) {

    } else {
      int temp = 0;
      temp = *left;
      *left = *right;
      *right = temp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return 0;
    } else {
      int result = 0;
      for (int i = 0; i < length; i++) {
        result += arr[i];
      }
      return result;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return nullptr;
    } else {
      int temp = -100000;
      int *pointer_to_max_value = &temp;
      for (int i = 0; i < length; i++) {
        if (arr[i] > *pointer_to_max_value) {
          pointer_to_max_value = &arr[i];
        }
      }
      return pointer_to_max_value;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    int *arr_pointer = nullptr;
    if (length <= 0) {
      return nullptr;
    } else {
      int *arr = new int[length];
      std::fill(arr, arr + length, init_value);
      arr_pointer = arr;
      return arr_pointer;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    } else {
      int *arr = new int[length];
      std::copy(arr_in, arr_in + length, arr);
      return arr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i++) {
        if (i == 0) {
          os << arr[0];
          os << "\t";
        }
        if (i > 0 && length > k && i%k == 0) {
          os << arr[i];
          os << "\t";
        }
      }
    }
  }
}  // namespace assignment
