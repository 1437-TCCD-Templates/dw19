#include "dw.h"

Counter_log::Counter_log(int size) {
  size_ = size;
  counts_ = new int[size_];
  for (int i = 0; i < size_; i++) {
    counts_[i] = 0;
  }
}

Counter_log::~Counter_log() { delete[] counts_ }

void Counter_log::resize(int new_size) {
  delete[] counts_;
  size_ = new_size counts_ = new int[size_];
  for (int i = 0; i < size_; i++) {
    counts_[i] = 0;
  }
}

void Counter_log::increment(int index) { counts_[index]++; }

int Counter_log::get_count(int index) const { return counts_[index]; }

int Counter_log::get_size() { return size_; }
