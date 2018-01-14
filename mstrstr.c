#include <stdio.h>
#include <string.h>
char * mstrstr(char* str1, const char* str2){

	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	int count = 1;
	int index = 0;
	if(str2_len>str1_len && str2_len != str1_len){
		return NULL;
	}
	for(int i=0;i<str1_len;i++){
		if(*(str1+i) == *(str2)){
			index = i;
			for(int k =1;k<str2_len;k++){
				i++;
				if(*(str1+i) == *(str2+k)){
					count++;			
				}else{
					count = 1;
					break;
				}
			}
			if(count == str2_len)
				return str1+index;
		}
	}
	return NULL;

}
int main(int argc, char* argv[]){
	
	char * ch = mstrstr(argv[1],argv[2]);
	if(ch != NULL){
		printf("存在%s\n",ch);
	}else{
		printf("不存在\n");
	}

	return 0;
}
