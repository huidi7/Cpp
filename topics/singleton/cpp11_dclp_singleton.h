// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef TOPICS_SINGLETON_CPP11_DCLP_SINGLETON_H_
#define TOPICS_SINGLETON_CPP11_DCLP_SINGLETON_H_

#include <atomic>
#include <mutex>

#include "topics/base/base.h"

class Cpp11DclpSingleton {
 public:
  static Cpp11DclpSingleton* Instance();
  void CallMe();

 private:
  static std::atomic<Cpp11DclpSingleton*> instance_;
  static std::mutex mutex_;

  Cpp11DclpSingleton() = default;
  DISALLOW_COPY_AND_ASSIGN(Cpp11DclpSingleton);
};

#endif  // TOPICS_SINGLETON_CPP11_DCLP_SINGLETON_H_
