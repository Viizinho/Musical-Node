#include <iostream>
#include <stdlib.h>
#include "library.h"

using namespace std;

struct nodeMusic{
    char name[100];
    struct nodeMusic *nextMusic;
}

struct nodePlaylist{
    char name[100];
    struct nodeMusic *nextMusic;
    struct nodePlaylist *nextPlay;
}

struct list{
    struct nodePlaylist *beginning;
}

int main() {
    return 0;
}