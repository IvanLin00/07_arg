#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char ** parse_args(char *line){
	char ** return_array = malloc(5 * sizeof(char *));
	char *curr = line;
	int i = 0;
	while (curr){
		return_array[i] = strsep(&curr, " ");
		i++;
	}
	return return_array;
}

int main(){
	char line[100] = "ls -a -l";
	char ** args = parse_args(line);
	execvp(args[0], args);
	return 0;
}
