#pragma once

/** Node Class
 * These are the building blocks of the linked list.
 */
class Node {
 private:
  int data;
  Node* next;

 public:
  Node(int d) : data(d) { next = nullptr; }
  ~Node() {}

  friend class Stack;
};

/** Stack
 * A container class that stores data using a LIFO
 * (last in, first out) scheme.
 */
class Stack {
 private:
  Node* head;
  unsigned int len;

 public:
  Stack();
  ~Stack();

  /** size()
   * Returns the size of the stack.
   */
  unsigned int size();

  /** push(int data)
   * Pushes a node containing the given data to the top of the stack.
   */
  void push(int data);

  /** pop()
   * Removes and returns the data at the top of the stack.
   */
  int pop();

  /** top()
   * Returns the data at the top of the stack without changing the stack.
   */
  int top();

  /** empty()
   * Returns whether or not the stack is empty.
   */
  bool empty();

  /** clear()
   * Clears the entire stack.
   */
  void clear();
};