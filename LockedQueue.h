//
// Created by Ortal Regev and Iftach Fridental on 15/01/2018.
//
#pragma once
#ifndef OS4_LOCKEDQUEUE_H
#define OS4_LOCKEDQUEUE_H

#include <queue>
#include <thread>
#include <mutex>
#include <string>
#include "News.h"

using namespace std;

class LockedQueue {
protected:
    int size;
    queue<News> queue_;
    mutex mutex_;

public:
    LockedQueue();

    virtual ~LockedQueue() { ; }
    News remove();

    virtual bool insert(const News &item);

    bool isEmpty();

    void lock();

    void unlock();
};

#endif //OS4_LOCKEDQUEUE_H
