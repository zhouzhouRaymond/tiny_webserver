//
// 线程池
//

#pragma once

#ifndef TINY_WEBSERVER_SRC_TINY_THREADPOOL_H_
#define TINY_WEBSERVER_SRC_TINY_THREADPOOL_H_

#include <atomic>
#include <condition_variable>
#include <functional>
#include <future>
#include <queue>
#include <stdexcept>
#include <thread>
#include <vector>

/* 固定数量的线程 */
class fix_threadpool {
 public:
  fix_threadpool() {}
  fix_threadpool(std::size_t _num_thread) {}
  ~fix_threadpool() {}

 private:
  std::vector<std::thread> workers;         // 线程队列
  std::queue<std::function<void()>> tasks;  // 任务队列

  std::mutex mutex_queue;
  std::condition_variable condition;
  std::size_t num_thread;
  bool stop;
};

#endif  // TINY_WEBSERVER_SRC_TINY_THREADPOOL_H_
