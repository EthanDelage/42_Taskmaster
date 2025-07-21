#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <yaml.h>

int process_spawn(char **argv, char **envp);

int main(int argc, char **argv, char **envp) {
  int pid;
  char* args[] = {"/bin/cat"};

  (void)argc;
  (void)argv;

  printf("Server\n");

  pid = process_spawn(args, envp);
  if (pid == -1) {
    perror("spawning process failed");
    exit(1);
  }
  if (kill(pid, SIGTERM) == -1) {
    perror("kill failed");
  }
  printf("Process killed successfully\n");
  return 0;
}

/**
  * @brief Spawn a new process
**/
int process_spawn(char **argv, char **envp) {
  int pid;

  pid = fork();
  if (pid == -1) {
    return -1;
  }
  if (pid == 0) {
    if (execve(argv[0], argv, envp) == -1) {
      exit(1);
    }
  }
  printf("Process spawned successfully with pid %d\n", pid);
  return pid;
}
