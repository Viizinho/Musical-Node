#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct nodeMusic NodeMusic;
typedef struct nodePlaylist NodePlaylist;
typedef struct list List;

List* create_list();
bool insert_playlist(List* beginning, char name);
bool insert_music(List* beginning, char name);
bool remove_playlist_beginning(List* beginning, char name);
bool remove_playlist_middle(List* beginning, int pos);
bool remove_playlist_end(List* beginning, char name);
bool remove_music_beginning(List* beginning);
bool remove_music_middle(List* beginning, int pos);
bool remove_music_end(List* beginning);
NodeMusic* search_music(List* beginning, char name);
NodeMusic* create_music(char name);
NodePlaylist* search_playlist(List* beginning, char name);
NodePlaylist* create_playlist(char name); 

#endif