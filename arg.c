#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char ** parse_args(char *line){ //something run in function
  char *s1 = line;
  char ** return_array;
  for(int i = 0; i < 6; i+=1){
    return_array[i] = strsep(&s1, " ");
    if (s1 == NULL) break;
  }
  return return_array;
}

int main(){
  char line [100] = "ls -a -l";
  char ** args = parse_args(line);
  // printf("%s\n",args[0]);
  // printf("%s\n",args[1]);
  // printf("%s\n",args[2]);
  //execvp(args[0], args);
  return 0;
}
