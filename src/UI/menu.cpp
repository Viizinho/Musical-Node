#include "../Models/library.h"

void Menu(PlaylistsMap& playlists) {
    int option;

    do {
        std::cout << "\nMusical Node Menu\n";
        std::cout << "1. Create a new Playlist\n";
        std::cout << "2. Add Music to a Playlist\n";
        std::cout << "3. Show Playlists\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an Option: ";
        std::cin >> option;

        switch (option) {
            case 1:
                addPlaylist(playlists);
                break;
            case 2:
                addMusic(playlists);
                break;
            case 3:
                showPlaylist(playlists);
                break;
            case 0:
                std::cout << "Thanks for using Musical Node\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    } while (option != 0);
}
