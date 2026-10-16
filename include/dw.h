#ifndef DW_H
#define DW_H

class Counter_log {
public:
  Counter_log(int size);
  ~Counter_log();
  void resize(int new_size);
  void increment(int index);
  int get_count(int index) const;
  int get_size() const;

private:
  int *m_counts;
  int m_size;
};

#endif
