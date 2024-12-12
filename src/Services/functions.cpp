#include "../Models/library.h"

void addPlaylist(PlaylistsMap& playlists) {
    std::string name;
    std::cout << "Type the Name of the new Playlist: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    
    if (playlists.find(name) == playlists.end()) {
        playlists[name] = Playlist();
        std::cout << "Playlist '" << nome << "' added!\n";
    } else {
        std::cout << "There's already a Playlist with that Name.\n";
    }
}

void addMusic(PlaylistsMap& playlists) {
    std::string namePlaylist;
    std::cout << "Type the Name of the Playlist: ";
    std::cin.ignore();
    std::getline(std::cin, namePlaylist);

    auto it = playlists.find(namePlaylist);
    if (it != playlists.end()) {
        Music newMusic;
        std::cout << "Type the Title: ";
        std::getline(std::cin, newMusic.title);
        std::cout << "Type the Artist: ";
        std::getline(std::cin, newMusic.artist);
        std::cout << "Type the Duration (in minutes): ";
        std::cin >> newMusic.duration;

        it->second.push_back(newMusic);
        std::cout << "Music added to the Playlist '" << namePlaylist << "'.\n";
    } else {
        std::cout << "No Playlist found.\n";
    }
}

void showPlaylist(const PlaylistsMap& playlists) {
    if (playlists.empty()) {
        std::cout << "No Playlist found.\n";
        return;
    }

    for (const auto& [name, playlist] : playlists) {
        std::cout << "\nPlaylist: " << name << "\n";
        for (const auto& musica : playlist) {
            std::cout << "- " << musica.title << " ("
                      << musica.artist << ", " << musica.duration << " min)\n";
        }
    }
}
