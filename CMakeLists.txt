cmake_minimum_required(VERSION 3.10)
project(datastruct)

set(CMAKE_CXX_STANDARD 11)

add_executable(datastruct stack.h graph/ALG_graph.h graph/DFS_not_recursion.h graph/stack.h mainGraph.cpp linearList tree tree/queue.h tree/queue.h tree/levelOrder.h tree/binary_tree_depth.h "tree/preOrder_inOrder_creat_tree.h" tree/delete_x.h tree/tree_width.h tree/fulltree_preTopost.h tree/leaf_node_to_linkList.h tree/similar_binary_tree.h tree/WPL.h tree/LRN2.h tree/usual_tree_deepth.h tree/detemine_BST.h Sort/SelectSort.h mainSort.cpp Sort/BubbleSort.h Sort/QuickSort.h)