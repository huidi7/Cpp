// Copyright 2017. All Rights Reserved.
// Author: huiding7@gmail.com (Hui Ding)

#include "topics/singleton/gof_singleton.h"
#include "topics/singleton/mt_singleton.h"
#include "topics/singleton/dclp_singleton.h"
#include "topics/singleton/my_singleton.h"
#include "topics/singleton/mb_singleton.h"

#if __cplusplus >= 201103L
#include "topics/singleton/callonce_singleton.h"
#include "topics/singleton/cpp11_dclp_singleton.h"
#endif

int main(int argc, char** argv) {
  GofSingleton::Instance()->CallMe();
  MtSingleton::Instance()->CallMe();
  DclpSingleton::Instance()->CallMe();
  MbSingleton::Instance()->CallMe();
  MySingleton::Instance().CallMe();

#if __cplusplus >= 201103L
  Cpp11DclpSingleton::Instance()->CallMe();
  CallOnceSingleton::Instance().CallMe();
#endif

  return 0;
}
