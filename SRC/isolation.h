//include //include guard
#ifndef ISOLATION_H
#define ISOLATION_H

//include dependencies
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <sstream>

//include headers
#include "texture.h"

//Screen dimension constants
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

//forward delcarlation
//class Texture;

//start up SDL create window
bool init();

//load all media
bool load_media();

//free all and shut down SDL
void close();

//full screen flag
extern  bool full_screen;

//load global front
extern TTF_Font* g_font;

//window
extern SDL_Window* g_window;

//renderer
extern SDL_Renderer* g_renderer;

//background texture
extern Texture background_texture;

//text overlay texture
extern Texture text_overlay;

//rendered font texture
extern Texture g_text_texture;

//timer Texture
extern Texture timer_text_texture;

#endif
