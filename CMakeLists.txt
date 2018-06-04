cmake_minimum_required(VERSION 3.10)
project(datastruct)

set(CMAKE_CXX_STANDARD 11)

add_executable(datastruct main.cpp stack.h linearList tree tree/queue.h tree/queue.h tree/levelOrder.h tree/binary_tree_depth.h "tree/preOrder_inOrder_creat_tree.h" tree/delete_x.h tree/tree_width.h)