// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef TOPICS_SINGLETON_MY_SINGLETON_H_
#define TOPICS_SINGLETON_MY_SINGLETON_H_

#include <iostream>
#include "topics/base/base.h"

class MySingleton {
 public:
  static MySingleton& Instance() {
    static MySingleton instance;
    return instance;
  }

  void CallMe() {
    std::cout << "Meyers CallMe" << std::endl;
  }

 private:
  MySingleton() {}
  DISALLOW_COPY_AND_ASSIGN(MySingleton);
};


#endif  // TOPICS_SINGLETON_MY_SINGLETON_H_
