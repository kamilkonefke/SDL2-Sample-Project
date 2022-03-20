#include <SDL2/SDL.h>
#include <iostream>
#include <stdio.h>

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
const char* WINDOW_TITLE = "SDL2 Sample Project by Kamil Konefke";

int main(int argc, char** argv)
{
    // Initialize Everything
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bool isRunning = true;

    // Main Loop
    while(isRunning) 
    {
        SDL_Event event;

        while(SDL_PollEvent(&event)) {
            // Quit Event
            if (event.type == SDL_QUIT)
                isRunning = false;
        }

        // Draw
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    return 0;
}