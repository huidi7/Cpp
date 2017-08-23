// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#ifndef TOPICS_SINGLETON_GOF_SINGLETON_H_
#define TOPICS_SINGLETON_GOF_SINGLETON_H_

class GofSingleton {
 public:
  static GofSingleton* Instance();
  void CallMe();

 protected:
  GofSingleton();

 private:
  static GofSingleton* instance_;
};

#endif  // TOPICS_SINGLETON_GOF_SINGLETON_H_
