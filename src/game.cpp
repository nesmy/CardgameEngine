#include "game.h"

game::game()
{
}

game::~game()
{
}

void game::Init(const char* name)
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    fprintf(stderr, "could not initialize sdl2: %s\n", SDL_GetError());
    SDL_Log("failed init");
    std::cout << "init" << std::endl;
    //return 1;
    }
  window = SDL_CreateWindow(
			    name,
			    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			    SCREEN_WIDTH, SCREEN_HEIGHT,
			    SDL_WINDOW_SHOWN
			    );
  if (window == NULL) {
    fprintf(stderr, "could not create window: %s\n", SDL_GetError());
    SDL_Log("Failed window");
    std::cout << "Failed window" << std::endl;
    //return 1;
  }
  //std::cout << "surface" << std::endl;
  screenSurface = SDL_GetWindowSurface(window);
}

void game::update()
{
}

void game::render()
{
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
}

void game::Event()
{
  while( SDL_PollEvent( &event ) ){
    /* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
    switch( event.type ){
      case SDL_KEYDOWN:
        printf( "Key press detected\n" );
        break;

      case SDL_KEYUP:
        printf( "Key release detected\n" );
        break;
      case SDL_QUIT:
        isRunning = false;
        break;
      default:
        break;
    }
  }
}

void game::OnQuit()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}
