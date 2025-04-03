#ifndef ERPROC_H
#define ERPROC_H

#include <stddef.h>
#include <sys/socket.h>
#include <sys/types.h>

int create_socket(int, int, int);

void bind_socket(int, const struct sockaddr *, socklen_t);

struct sockaddr_in create_socket_address(int);

void listen_socket(int, int);

int create_accept(int, struct sockaddr *, socklen_t *);

int get_socket_name(int, struct sockaddr *, socklen_t *);

ssize_t read_socket(int, void *, size_t);

#endif
