#include <stdio.h>
#include <string.h>
//计算字符串最后一个单词的长度，单词以空格隔开。
int main() {
    char str[5000] = {'\0'};
    int length = -1;
    int indexBegin,indexEnd;
    gets(str);
    indexEnd = strlen(str) - 1;
    for(indexBegin = indexEnd -1;indexBegin >= 0;--indexBegin) {
        if(str[indexBegin] == ' ')
            break;
    }
    printf("%d",indexEnd-indexBegin);
    return 0;
}
