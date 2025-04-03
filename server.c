#include "socket_utils.h"
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PORT 8080
#define BUFFER_SIZE 256

int main(void) {
  char buffer[BUFFER_SIZE];
  int sockfd = create_socket(AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in host_addr = create_socket_address(PORT);
  int host_addrlen = sizeof(host_addr);
  bind_socket(sockfd, (struct sockaddr *)&host_addr, host_addrlen);
  listen_socket(sockfd, SOMAXCONN);
  printf("server lisenning for connections port: %d\n", PORT);

  // accept incoming connections
  while (1) {
    int fd = create_accept(sockfd, (struct sockaddr *)&host_addr,
                           (socklen_t *)&host_addrlen);

    // create client address
    /*struct sockaddr_in client_addr;*/
    /*int client_addrlen = sizeof(client_addr);*/
    /*int sockn = get_socket_name(fd, (struct sockaddr *)&client_addr,*/
    /*                            (socklen_t *)&client_addrlen);*/
    /*printf("socket name: %d", sockn);*/

    /*printf("[%s:%u]\n", inet_ntoa(client_addr.sin_addr),*/
    /*       ntohs(client_addr.sin_port));*/

    // read from the socket
    read_socket(fd, &buffer, BUFFER_SIZE);

    // read the request
    char method[BUFFER_SIZE], uri[BUFFER_SIZE], version[BUFFER_SIZE];
    sscanf(buffer, "%s %s %s", method, uri, version);
    /*printf("[%s:%u] %s %s %s\n", inet_ntoa(client_addr.sin_addr),*/
    /*       ntohs(client_addr.sin_port), method, version, uri);*/

    if (strcmp(method, "GET") == 0 && strcmp(uri, "/") == 0) {
      /*printf("method = GET, uri = '/' \n");*/
      /*static int result[10000000];*/
      int *result = (int *)malloc(10000000 * sizeof(int));
      if (result == NULL) {
        fprintf(stderr, "Error memory\n");
        return 1;
      }
      static long long sum = 0;

      for (int i = 0; i < 10000000; i++) {
        result[i] = i * i * 2;
      }

      for (int i = 0; i < 10000000; i++) {
        sum += result[i];
      }

      free(result);
      /*printf("Сумма: %lld\n", sum);*/
    }

    /*cJSON *json = cJSON_CreateObject();*/
    /*cJSON_AddStringToObject(json, "name", "John Doe");*/
    /*cJSON_AddNumberToObject(json, "age", 30);*/
    /*cJSON_AddStringToObject(json, "email", "john.doe@example.com");*/

    // write to the socket
    /*char resp[] = "HTTP/1.1 200 OK\r\n"*/
    /*              "Access-Control-Allow-Origin: *\r\n"*/
    /*              "Server: webserver-c\r\n"*/
    /*              "Content-type: application/json\r\n"*/
    /*              "Content-Length: 28\r\n"*/
    /*              "\r\n"*/
    /*              "{\"name\": \"Ruslan\"}";*/

    char response[] =
        "HTTP/1.1 200 OK\r\n"
        "Access-Control-Allow-Origin: *\r\n"
        "Server: webserver-c\r\n"
        /*"Date: Thu, 19 Feb 2009 12:27:04 GMT\r\n"*/
        /*"Last-Modified: Wed, 18 Jun 2003 16:05:58 GMT\r\n"*/
        /*"ETag: \"56d-9989200-1132c580\"\r\n"*/
        "Content-type: application/json\r\n"
        "Content-Length: 268\r\n"
        /*"Content-Length: 18\r\n"*/
        "Accept-Ranges: bytes\r\n"
        "Connection: close\r\n"
        "\r\n"
        "{\"name\": "
        "\"Ruslan11111111111111111111111111111111111111111111111111111111111111"
        "1111111111111111111111111111111111111111111111111111111111111111111111"
        "1111111111111111111111111111111111111111111111111111111111111111111111"
        "111111111111111111111111111111111111111111111111\"}";
    /*"sdfkjsdnbfkjbs1"; // resp.text() */

    size_t response_length = strlen(response);

    /*int valwrite = write(fd, response, response_length);*/
    /*if (valwrite < 0) {*/
    /*  perror("websocket (write)");*/
    /*  continue;*/
    /*};*/

    if (fd > 0) {
      send(fd, response, response_length, 0);
    }

    close(fd);
  }

  close(sockfd);

  return 0;
}
