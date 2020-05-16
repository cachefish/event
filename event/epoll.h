#pragma once

typedef struct event_t event;

int epoller_create();
void epoller_free(int fd);

void epoller_add(int epoll_fd, event* e);
void epoller_del(int epoll_fd, event* e);
void epoller_modify(int epoll_fd, event* e);

struct timeval epoller_dispatch(int epoll_fd, int timeout);