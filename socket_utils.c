#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

int create_socket(int domain, int type, int protocol) {
  int sockfd = socket(domain, type, protocol);

  if (sockfd == -1) {
    perror("webserver (create socket):");
    exit(EXIT_FAILURE);
  }

  return sockfd;
};

void bind_socket(int sockfd, const struct sockaddr *addr, socklen_t addrlen) {
  int result = bind(sockfd, addr, addrlen);

  if (result == -1) {
    perror("bind failed");
    exit(EXIT_FAILURE);
  };
};

struct sockaddr_in create_socket_address(int port) {
  struct sockaddr_in address = {0};

  address.sin_family = AF_INET;
  address.sin_port = htons(port);
  address.sin_addr.s_addr = htonl(INADDR_ANY);

  return address;
};

void listen_socket(int sockfd, int backlog) {
  int result = listen(sockfd, backlog);
  if (result == -1) {
    perror("lesten failed");
    exit(EXIT_FAILURE);
  }
};

int create_accept(int sockfd, struct sockaddr *host_addr,
                  socklen_t *host_addrlen) {
  int result = accept(sockfd, host_addr, host_addrlen);

  if (result == -1) {
    perror("accept failed");
    exit(EXIT_FAILURE);
  };

  return result;
};

int get_socket_name(int fd, struct sockaddr *addr, socklen_t *len) {
  int result = getsockname(fd, addr, len);

  if (result < 0) {
    perror("get client failed");
    exit(EXIT_FAILURE);
  };

  return result;
};

ssize_t read_socket(int fd, void *buffer, size_t buffer_size) {
  ssize_t result = read(fd, buffer, buffer_size);

  if (result == -1) {
    perror("read failed");
    exit(EXIT_FAILURE);
  };

  return result;
};
