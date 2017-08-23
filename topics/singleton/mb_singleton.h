// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef TOPICS_SINGLETON_MB_SINGLETON_H_
#define TOPICS_SINGLETON_MB_SINGLETON_H_

#include "topics/base/base.h"

class MbSingleton {
 public:
  static MbSingleton* Instance();
  void CallMe();

 protected:
  MbSingleton();

 private:
  static MbSingleton* instance_;
  static MutexWrapper mutex_;

  DISALLOW_COPY_AND_ASSIGN(MbSingleton);
};

#endif  // TOPICS_SINGLETON_MB_SINGLETON_H_
