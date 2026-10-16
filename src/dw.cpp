#include "dw.h"

Counter_log::Counter_log(int size) {
  m_size = size;
  m_counts = new int[m_size];
  for (int i = 0; i < m_size; i++) {
    m_counts[i] = 0;
  }
}

Counter_log::~Counter_log() { delete[] m_counts }

void Counter_log::resize(int new_size) {
  delete[] m_counts;
  m_size = new_size m_counts = new int[m_size];
  for (int i = 0; i < m_size; i++) {
    m_counts[i] = 0;
  }
}

void Counter_log::increment(int index) { m_counts[index]++; }

int Counter_log::get_count(int index) const { return m_counts[index]; }

int Counter_log::get_size() { return m_size; }
