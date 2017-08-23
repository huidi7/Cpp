# Copyright 2017. All Rights Reserved.
# Author: huiding7@gmail.com (Hui Ding)

cc_binary(
    name = "singleton_main",
    srcs = [
        "singleton_main.cc",
    ],
    copts = [
        "-std=c++11",  #-- use -std=c++98 for pre-cpp11 only
    ],
    deps = [
        ":cpp11_singleton",  #-- comment this line for pre-cpp11 only
        ":old_singleton",
        "//topics/base",
    ],
)

cc_library(
    name = "old_singleton",
    srcs = [
        "dclp_singleton.cc",
        "dclp_singleton.h",
        "gof_singleton.cc",
        "gof_singleton.h",
        "mb_singleton.cc",
        "mb_singleton.h",
        "mt_singleton.cc",
        "mt_singleton.h",
        "my_singleton.h",
    ],
    copts = [
        "-std=c++98",
    ],
    deps = [
        "//topics/base",
    ],
)

cc_library(
    name = "cpp11_singleton",
    srcs = [
        "callonce_singleton.cc",
        "callonce_singleton.h",
        "cpp11_dclp_singleton.cc",
        "cpp11_dclp_singleton.h",
    ],
    copts = [
        "-std=c++11",
    ],
    linkopts = [
        "-pthread",
    ],
    deps = [
        "//topics/base",
    ],
)
