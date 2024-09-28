#include "imgui/imgui.h"
#include "imgui/imgui_impl_sdl2.h"
#include "imgui/imgui_impl_opengl3.h"

#include <SDL2/SDL.h>

EXPORT void jupiter_handle_event(SDL_Event* event) {
    ImGui_ImplSDL2_ProcessEvent(event);
}

EXPORT void jupiter_init_ui(SDL_Window* window, void* opengl_context) {
    ImGui::CreateContext();
    ImGui_ImplSDL2_InitForOpenGL(window, opengl_context);
    ImGui_ImplOpenGL3_Init();
}

EXPORT void jupiter_update_ui() {
    ImGui_ImplSDL2_NewFrame();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui::NewFrame();

    ImGui::ShowDemoWindow();

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}