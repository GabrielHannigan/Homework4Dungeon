#include <stdio.h>
#include "tools.h"

roomOpen(){
    
    *fp("dungeonRoomList_large.txt");
    fopen(fp);
    fgets(fp);
    printf(fp);
    fclose(fp);
    
}