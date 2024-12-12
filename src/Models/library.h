#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <map>
#include <string>

struct Music {
    std::string title;
    std::string artist;
    double duration;
};

using Playlist = std::vector<Music>;
using PlaylistsMap = std::map<std::string, Playlist>;

void Menu(PlaylistsMap& playlists);
void addPlaylist(PlaylistsMap& playlists);
void addMusic(PlaylistsMap& playlists);
void showPlaylist(const PlaylistsMap& playlists);

#endif
