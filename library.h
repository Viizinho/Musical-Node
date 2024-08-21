#ifndef LIBRARY_H
#define LIBRARY_H

struct nodeMusic
{
    char name[100];
    struct nodeMusic *nextMusic;
}

struct nodePlaylist
{
    char name[100];
    struct nodeMusic *nextMusic;
    struct nodePlaylist *nextPlay;
}

struct list
{
    struct nodePlaylist *beginning;
}

void Função();

#endif