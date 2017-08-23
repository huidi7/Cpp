// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef TOPICS_SINGLETON_DCLP_SINGLETON_H_
#define TOPICS_SINGLETON_DCLP_SINGLETON_H_

#include "topics/base/base.h"

class DclpSingleton {
 public:
  static DclpSingleton* Instance();
  void CallMe();

 protected:
  DclpSingleton();

 private:
  static DclpSingleton* instance_;
  static MutexWrapper mutex_;

  DISALLOW_COPY_AND_ASSIGN(DclpSingleton);
};

#endif  // TOPICS_SINGLETON_DCLP_SINGLETON_H_
