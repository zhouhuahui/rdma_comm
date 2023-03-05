#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define DEVICE_NAME ("mlx5_0")
#define RDMA_PORT   (1)

#define MY_COMPUTE_ID (0)
// 总的计算节点个数，每个计算节点的编号是0, 1 ... TOTAL_COMPUTE_NUM-1
#define TOTAL_COMPUTE_NUM (2)

// for test
#define IS_SERVER (1)   // 是否是RdmaServer
#define SERVER_IP ("49.52.27.135")  //RdmaServer的地址
#define TEST_SHARED_MEMORY
// #define TEST_SIMPLE_SERVER
// #define TEST_SIMPLE_SERVER2
// #define TEST_SHARED_CLIENT


/** 
 * @todo
 */
// node_num, slot_num, slot_size值
// 每个工作线程的接收队列长度

#endif