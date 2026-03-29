#define RAYLIBWRAPPER_STATIC_DEFINE
#include <RaylibWrapper/c_api.h>

#include <RaylibWrapper/RaylibWrapper.hpp>

#include <cstdarg>
#include <vector>
#include <cstdio>

extern "C" {

void rlw_InitWindow(int width, int height, const char *title) {
    rlw::InitWindow(width, height, title);
}

void rlw_CloseWindow(void) {
    rlw::CloseWindow();
}

bool rlw_WindowShouldClose(void) {
    return rlw::WindowShouldClose();
}

bool rlw_IsWindowReady(void) {
    return rlw::IsWindowReady();
}

bool rlw_IsWindowFullscreen(void) {
    return rlw::IsWindowFullscreen();
}

bool rlw_IsWindowHidden(void) {
    return rlw::IsWindowHidden();
}

bool rlw_IsWindowMinimized(void) {
    return rlw::IsWindowMinimized();
}

bool rlw_IsWindowMaximized(void) {
    return rlw::IsWindowMaximized();
}

bool rlw_IsWindowFocused(void) {
    return rlw::IsWindowFocused();
}

bool rlw_IsWindowResized(void) {
    return rlw::IsWindowResized();
}

bool rlw_IsWindowState(unsigned int flag) {
    return rlw::IsWindowState(flag);
}

void rlw_SetWindowState(unsigned int flags) {
    rlw::SetWindowState(flags);
}

void rlw_ClearWindowState(unsigned int flags) {
    rlw::ClearWindowState(flags);
}

void rlw_ToggleFullscreen(void) {
    rlw::ToggleFullscreen();
}

void rlw_ToggleBorderlessWindowed(void) {
    rlw::ToggleBorderlessWindowed();
}

void rlw_MaximizeWindow(void) {
    rlw::MaximizeWindow();
}

void rlw_MinimizeWindow(void) {
    rlw::MinimizeWindow();
}

void rlw_RestoreWindow(void) {
    rlw::RestoreWindow();
}

void rlw_SetWindowIcon(rlw::Image image) {
    rlw::SetWindowIcon(image);
}

void rlw_SetWindowIcons(rlw::Image *images, int count) {
    rlw::SetWindowIcons(images, count);
}

void rlw_SetWindowTitle(const char *title) {
    rlw::SetWindowTitle(title);
}

void rlw_SetWindowPosition(int x, int y) {
    rlw::SetWindowPosition(x, y);
}

void rlw_SetWindowMonitor(int monitor) {
    rlw::SetWindowMonitor(monitor);
}

void rlw_SetWindowMinSize(int width, int height) {
    rlw::SetWindowMinSize(width, height);
}

void rlw_SetWindowMaxSize(int width, int height) {
    rlw::SetWindowMaxSize(width, height);
}

void rlw_SetWindowSize(int width, int height) {
    rlw::SetWindowSize(width, height);
}

void rlw_SetWindowOpacity(float opacity) {
    rlw::SetWindowOpacity(opacity);
}

void rlw_SetWindowFocused(void) {
    rlw::SetWindowFocused();
}

int rlw_GetScreenWidth(void) {
    return rlw::GetScreenWidth();
}

int rlw_GetScreenHeight(void) {
    return rlw::GetScreenHeight();
}

int rlw_GetRenderWidth(void) {
    return rlw::GetRenderWidth();
}

int rlw_GetRenderHeight(void) {
    return rlw::GetRenderHeight();
}

int rlw_GetMonitorCount(void) {
    return rlw::GetMonitorCount();
}

int rlw_GetCurrentMonitor(void) {
    return rlw::GetCurrentMonitor();
}

rlw::Vector2 rlw_GetMonitorPosition(int monitor) {
    return rlw::GetMonitorPosition(monitor);
}

int rlw_GetMonitorWidth(int monitor) {
    return rlw::GetMonitorWidth(monitor);
}

int rlw_GetMonitorHeight(int monitor) {
    return rlw::GetMonitorHeight(monitor);
}

int rlw_GetMonitorPhysicalWidth(int monitor) {
    return rlw::GetMonitorPhysicalWidth(monitor);
}

int rlw_GetMonitorPhysicalHeight(int monitor) {
    return rlw::GetMonitorPhysicalHeight(monitor);
}

int rlw_GetMonitorRefreshRate(int monitor) {
    return rlw::GetMonitorRefreshRate(monitor);
}

rlw::Vector2 rlw_GetWindowPosition(void) {
    return rlw::GetWindowPosition();
}

rlw::Vector2 rlw_GetWindowScaleDPI(void) {
    return rlw::GetWindowScaleDPI();
}

void rlw_SetClipboardText(const char *text) {
    rlw::SetClipboardText(text);
}

void rlw_EnableEventWaiting(void) {
    rlw::EnableEventWaiting();
}

void rlw_DisableEventWaiting(void) {
    rlw::DisableEventWaiting();
}

void rlw_ShowCursor(void) {
    rlw::ShowCursor();
}

void rlw_HideCursor(void) {
    rlw::HideCursor();
}

bool rlw_IsCursorHidden(void) {
    return rlw::IsCursorHidden();
}

void rlw_EnableCursor(void) {
    rlw::EnableCursor();
}

void rlw_DisableCursor(void) {
    rlw::DisableCursor();
}

bool rlw_IsCursorOnScreen(void) {
    return rlw::IsCursorOnScreen();
}

void rlw_ClearBackground(rlw::Color color) {
    rlw::ClearBackground(color);
}

void rlw_BeginDrawing(void) {
    rlw::BeginDrawing();
}

void rlw_EndDrawing(void) {
    rlw::EndDrawing();
}

void rlw_BeginMode2D(rlw::Camera2D camera) {
    rlw::BeginMode2D(camera);
}

void rlw_EndMode2D(void) {
    rlw::EndMode2D();
}

void rlw_BeginMode3D(rlw::Camera3D camera) {
    rlw::BeginMode3D(camera);
}

void rlw_EndMode3D(void) {
    rlw::EndMode3D();
}

void rlw_BeginTextureMode(rlw::RenderTexture2D target) {
    rlw::BeginTextureMode(target);
}

void rlw_EndTextureMode(void) {
    rlw::EndTextureMode();
}

void rlw_BeginShaderMode(rlw::Shader shader) {
    rlw::BeginShaderMode(shader);
}

void rlw_EndShaderMode(void) {
    rlw::EndShaderMode();
}

void rlw_BeginBlendMode(int mode) {
    rlw::BeginBlendMode(mode);
}

void rlw_EndBlendMode(void) {
    rlw::EndBlendMode();
}

void rlw_BeginScissorMode(int x, int y, int width, int height) {
    rlw::BeginScissorMode(x, y, width, height);
}

void rlw_EndScissorMode(void) {
    rlw::EndScissorMode();
}

void rlw_BeginVrStereoMode(rlw::VrStereoConfig config) {
    rlw::BeginVrStereoMode(config);
}

void rlw_EndVrStereoMode(void) {
    rlw::EndVrStereoMode();
}

rlw::VrStereoConfig rlw_LoadVrStereoConfig(rlw::VrDeviceInfo device) {
    return rlw::LoadVrStereoConfig(device);
}

void rlw_UnloadVrStereoConfig(rlw::VrStereoConfig config) {
    rlw::UnloadVrStereoConfig(config);
}

rlw::Shader rlw_LoadShader(const char *vsFileName, const char *fsFileName) {
    return rlw::LoadShader(vsFileName, fsFileName);
}

rlw::Shader rlw_LoadShaderFromMemory(const char *vsCode, const char *fsCode) {
    return rlw::LoadShaderFromMemory(vsCode, fsCode);
}

bool rlw_IsShaderValid(rlw::Shader shader) {
    return rlw::IsShaderValid(shader);
}

int rlw_GetShaderLocation(rlw::Shader shader, const char *uniformName) {
    return rlw::GetShaderLocation(shader, uniformName);
}

int rlw_GetShaderLocationAttrib(rlw::Shader shader, const char *attribName) {
    return rlw::GetShaderLocationAttrib(shader, attribName);
}

void rlw_SetShaderValue(rlw::Shader shader, int locIndex, const void *value, int uniformType) {
    rlw::SetShaderValue(shader, locIndex, value, uniformType);
}

void rlw_SetShaderValueV(rlw::Shader shader, int locIndex, const void *value, int uniformType, int count) {
    rlw::SetShaderValueV(shader, locIndex, value, uniformType, count);
}

void rlw_SetShaderValueMatrix(rlw::Shader shader, int locIndex, rlw::Matrix mat) {
    rlw::SetShaderValueMatrix(shader, locIndex, mat);
}

void rlw_SetShaderValueTexture(rlw::Shader shader, int locIndex, rlw::Texture2D texture) {
    rlw::SetShaderValueTexture(shader, locIndex, texture);
}

void rlw_UnloadShader(rlw::Shader shader) {
    rlw::UnloadShader(shader);
}

rlw::Ray rlw_GetScreenToWorldRay(rlw::Vector2 mousePosition, rlw::Camera camera) {
    return rlw::GetScreenToWorldRay(mousePosition, camera);
}

rlw::Matrix rlw_GetCameraMatrix(rlw::Camera camera) {
    return rlw::GetCameraMatrix(camera);
}

rlw::Matrix rlw_GetCameraMatrix2D(rlw::Camera2D camera) {
    return rlw::GetCameraMatrix2D(camera);
}

rlw::Vector2 rlw_GetWorldToScreen(rlw::Vector3 position, rlw::Camera camera) {
    return rlw::GetWorldToScreen(position, camera);
}

rlw::Vector2 rlw_GetScreenToWorld2D(rlw::Vector2 position, rlw::Camera2D camera) {
    return rlw::GetScreenToWorld2D(position, camera);
}

rlw::Vector2 rlw_GetWorldToScreenEx(rlw::Vector3 position, rlw::Camera camera, int width, int height) {
    return rlw::GetWorldToScreenEx(position, camera, width, height);
}

rlw::Vector2 rlw_GetWorldToScreen2D(rlw::Vector2 position, rlw::Camera2D camera) {
    return rlw::GetWorldToScreen2D(position, camera);
}

void rlw_SetTargetFPS(int fps) {
    rlw::SetTargetFPS(fps);
}

float rlw_GetFrameTime(void) {
    return rlw::GetFrameTime();
}

double rlw_GetTime(void) {
    return rlw::GetTime();
}

int rlw_GetFPS(void) {
    return rlw::GetFPS();
}

void rlw_SwapScreenBuffer(void) {
    rlw::SwapScreenBuffer();
}

void rlw_PollInputEvents(void) {
    rlw::PollInputEvents();
}

void rlw_WaitTime(double seconds) {
    rlw::WaitTime(seconds);
}

void rlw_SetRandomSeed(unsigned int seed) {
    rlw::SetRandomSeed(seed);
}

int rlw_GetRandomValue(int min, int max) {
    return rlw::GetRandomValue(min, max);
}

void rlw_UnloadRandomSequence(int *sequence) {
    rlw::UnloadRandomSequence(sequence);
}

void rlw_TakeScreenshot(const char *fileName) {
    rlw::TakeScreenshot(fileName);
}

void rlw_SetConfigFlags(unsigned int flags) {
    rlw::SetConfigFlags(flags);
}

void rlw_OpenURL(const char *url) {
    rlw::OpenURL(url);
}

void rlw_TraceLog(int logLevel, const char *text, ...) {
    va_list args;
    va_start(args, text);
    va_list args_copy;
    va_copy(args_copy, args);
    int needed = std::vsnprintf(nullptr, 0, text, args_copy);
    va_end(args_copy);
    if (needed < 0) {
        va_end(args);
        rlw::TraceLog(logLevel, text);
        return;
    }
    std::vector<char> buf((size_t)needed + 1);
    std::vsnprintf(buf.data(), buf.size(), text, args);
    va_end(args);
    rlw::TraceLog(logLevel, buf.data());
}

void rlw_SetTraceLogLevel(int logLevel) {
    rlw::SetTraceLogLevel(logLevel);
}

void rlw_MemFree(void *ptr) {
    rlw::MemFree(ptr);
}

void rlw_SetTraceLogCallback(rlw::TraceLogCallback callback) {
    rlw::SetTraceLogCallback(callback);
}

void rlw_SetLoadFileDataCallback(rlw::LoadFileDataCallback callback) {
    rlw::SetLoadFileDataCallback(callback);
}

void rlw_SetSaveFileDataCallback(rlw::SaveFileDataCallback callback) {
    rlw::SetSaveFileDataCallback(callback);
}

void rlw_SetLoadFileTextCallback(rlw::LoadFileTextCallback callback) {
    rlw::SetLoadFileTextCallback(callback);
}

void rlw_SetSaveFileTextCallback(rlw::SaveFileTextCallback callback) {
    rlw::SetSaveFileTextCallback(callback);
}

void rlw_UnloadFileData(unsigned char *data) {
    rlw::UnloadFileData(data);
}

bool rlw_SaveFileData(const char *fileName, void *data, int dataSize) {
    return rlw::SaveFileData(fileName, data, dataSize);
}

bool rlw_ExportDataAsCode(const unsigned char *data, int dataSize, const char *fileName) {
    return rlw::ExportDataAsCode(data, dataSize, fileName);
}

void rlw_UnloadFileText(char *text) {
    rlw::UnloadFileText(text);
}

bool rlw_SaveFileText(const char *fileName, char *text) {
    return rlw::SaveFileText(fileName, text);
}

bool rlw_FileExists(const char *fileName) {
    return rlw::FileExists(fileName);
}

bool rlw_DirectoryExists(const char *dirPath) {
    return rlw::DirectoryExists(dirPath);
}

bool rlw_IsFileExtension(const char *fileName, const char *ext) {
    return rlw::IsFileExtension(fileName, ext);
}

int rlw_GetFileLength(const char *fileName) {
    return rlw::GetFileLength(fileName);
}

bool rlw_ChangeDirectory(const char *dir) {
    return rlw::ChangeDirectory(dir);
}

bool rlw_IsPathFile(const char *path) {
    return rlw::IsPathFile(path);
}

rlw::FilePathList rlw_LoadDirectoryFiles(const char *dirPath) {
    return rlw::LoadDirectoryFiles(dirPath);
}

rlw::FilePathList rlw_LoadDirectoryFilesEx(const char *basePath, const char *filter, bool scanSubdirs) {
    return rlw::LoadDirectoryFilesEx(basePath, filter, scanSubdirs);
}

void rlw_UnloadDirectoryFiles(rlw::FilePathList files) {
    rlw::UnloadDirectoryFiles(files);
}

bool rlw_IsFileDropped(void) {
    return rlw::IsFileDropped();
}

rlw::FilePathList rlw_LoadDroppedFiles(void) {
    return rlw::LoadDroppedFiles();
}

void rlw_UnloadDroppedFiles(rlw::FilePathList files) {
    rlw::UnloadDroppedFiles(files);
}

long rlw_GetFileModTime(const char *fileName) {
    return rlw::GetFileModTime(fileName);
}

rlw::AutomationEventList rlw_LoadAutomationEventList(const char *fileName) {
    return rlw::LoadAutomationEventList(fileName);
}

void rlw_UnloadAutomationEventList(rlw::AutomationEventList list) {
    rlw::UnloadAutomationEventList(list);
}

bool rlw_ExportAutomationEventList(rlw::AutomationEventList list, const char *fileName) {
    return rlw::ExportAutomationEventList(list, fileName);
}

void rlw_SetAutomationEventList(rlw::AutomationEventList *list) {
    rlw::SetAutomationEventList(list);
}

void rlw_SetAutomationEventBaseFrame(int frame) {
    rlw::SetAutomationEventBaseFrame(frame);
}

void rlw_StartAutomationEventRecording(void) {
    rlw::StartAutomationEventRecording();
}

void rlw_StopAutomationEventRecording(void) {
    rlw::StopAutomationEventRecording();
}

void rlw_PlayAutomationEvent(rlw::AutomationEvent event) {
    rlw::PlayAutomationEvent(event);
}

bool rlw_IsKeyPressed(int key) {
    return rlw::IsKeyPressed(key);
}

bool rlw_IsKeyPressedRepeat(int key) {
    return rlw::IsKeyPressedRepeat(key);
}

bool rlw_IsKeyDown(int key) {
    return rlw::IsKeyDown(key);
}

bool rlw_IsKeyReleased(int key) {
    return rlw::IsKeyReleased(key);
}

bool rlw_IsKeyUp(int key) {
    return rlw::IsKeyUp(key);
}

int rlw_GetKeyPressed(void) {
    return rlw::GetKeyPressed();
}

int rlw_GetCharPressed(void) {
    return rlw::GetCharPressed();
}

void rlw_SetExitKey(int key) {
    rlw::SetExitKey(key);
}

bool rlw_IsGamepadAvailable(int gamepad) {
    return rlw::IsGamepadAvailable(gamepad);
}

bool rlw_IsGamepadButtonPressed(int gamepad, int button) {
    return rlw::IsGamepadButtonPressed(gamepad, button);
}

bool rlw_IsGamepadButtonDown(int gamepad, int button) {
    return rlw::IsGamepadButtonDown(gamepad, button);
}

bool rlw_IsGamepadButtonReleased(int gamepad, int button) {
    return rlw::IsGamepadButtonReleased(gamepad, button);
}

bool rlw_IsGamepadButtonUp(int gamepad, int button) {
    return rlw::IsGamepadButtonUp(gamepad, button);
}

int rlw_GetGamepadButtonPressed(void) {
    return rlw::GetGamepadButtonPressed();
}

int rlw_GetGamepadAxisCount(int gamepad) {
    return rlw::GetGamepadAxisCount(gamepad);
}

float rlw_GetGamepadAxisMovement(int gamepad, int axis) {
    return rlw::GetGamepadAxisMovement(gamepad, axis);
}

int rlw_SetGamepadMappings(const char *mappings) {
    return rlw::SetGamepadMappings(mappings);
}

bool rlw_IsMouseButtonPressed(int button) {
    return rlw::IsMouseButtonPressed(button);
}

bool rlw_IsMouseButtonDown(int button) {
    return rlw::IsMouseButtonDown(button);
}

bool rlw_IsMouseButtonReleased(int button) {
    return rlw::IsMouseButtonReleased(button);
}

bool rlw_IsMouseButtonUp(int button) {
    return rlw::IsMouseButtonUp(button);
}

int rlw_GetMouseX(void) {
    return rlw::GetMouseX();
}

int rlw_GetMouseY(void) {
    return rlw::GetMouseY();
}

rlw::Vector2 rlw_GetMousePosition(void) {
    return rlw::GetMousePosition();
}

rlw::Vector2 rlw_GetMouseDelta(void) {
    return rlw::GetMouseDelta();
}

void rlw_SetMousePosition(int x, int y) {
    rlw::SetMousePosition(x, y);
}

void rlw_SetMouseOffset(int offsetX, int offsetY) {
    rlw::SetMouseOffset(offsetX, offsetY);
}

void rlw_SetMouseScale(float scaleX, float scaleY) {
    rlw::SetMouseScale(scaleX, scaleY);
}

float rlw_GetMouseWheelMove(void) {
    return rlw::GetMouseWheelMove();
}

rlw::Vector2 rlw_GetMouseWheelMoveV(void) {
    return rlw::GetMouseWheelMoveV();
}

void rlw_SetMouseCursor(int cursor) {
    rlw::SetMouseCursor(cursor);
}

int rlw_GetTouchX(void) {
    return rlw::GetTouchX();
}

int rlw_GetTouchY(void) {
    return rlw::GetTouchY();
}

rlw::Vector2 rlw_GetTouchPosition(int index) {
    return rlw::GetTouchPosition(index);
}

int rlw_GetTouchPointId(int index) {
    return rlw::GetTouchPointId(index);
}

int rlw_GetTouchPointCount(void) {
    return rlw::GetTouchPointCount();
}

void rlw_SetGesturesEnabled(unsigned int flags) {
    rlw::SetGesturesEnabled(flags);
}

bool rlw_IsGestureDetected(unsigned int gesture) {
    return rlw::IsGestureDetected(gesture);
}

int rlw_GetGestureDetected(void) {
    return rlw::GetGestureDetected();
}

float rlw_GetGestureHoldDuration(void) {
    return rlw::GetGestureHoldDuration();
}

rlw::Vector2 rlw_GetGestureDragVector(void) {
    return rlw::GetGestureDragVector();
}

float rlw_GetGestureDragAngle(void) {
    return rlw::GetGestureDragAngle();
}

rlw::Vector2 rlw_GetGesturePinchVector(void) {
    return rlw::GetGesturePinchVector();
}

float rlw_GetGesturePinchAngle(void) {
    return rlw::GetGesturePinchAngle();
}

void rlw_UpdateCamera(rlw::Camera *camera, int mode) {
    rlw::UpdateCamera(camera, mode);
}

void rlw_UpdateCameraPro(rlw::Camera *camera, rlw::Vector3 movement, rlw::Vector3 rotation, float zoom) {
    rlw::UpdateCameraPro(camera, movement, rotation, zoom);
}

void rlw_SetShapesTexture(rlw::Texture2D texture, rlw::Rectangle source) {
    rlw::SetShapesTexture(texture, source);
}

void rlw_DrawPixel(int posX, int posY, rlw::Color color) {
    rlw::DrawPixel(posX, posY, color);
}

void rlw_DrawPixelV(rlw::Vector2 position, rlw::Color color) {
    rlw::DrawPixelV(position, color);
}

void rlw_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, rlw::Color color) {
    rlw::DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

void rlw_DrawLineV(rlw::Vector2 startPos, rlw::Vector2 endPos, rlw::Color color) {
    rlw::DrawLineV(startPos, endPos, color);
}

void rlw_DrawLineEx(rlw::Vector2 startPos, rlw::Vector2 endPos, float thick, rlw::Color color) {
    rlw::DrawLineEx(startPos, endPos, thick, color);
}

void rlw_DrawLineStrip(rlw::Vector2 *points, int pointCount, rlw::Color color) {
    rlw::DrawLineStrip(points, pointCount, color);
}

void rlw_DrawLineBezier(rlw::Vector2 startPos, rlw::Vector2 endPos, float thick, rlw::Color color) {
    rlw::DrawLineBezier(startPos, endPos, thick, color);
}

void rlw_DrawCircle(int centerX, int centerY, float radius, rlw::Color color) {
    rlw::DrawCircle(centerX, centerY, radius, color);
}

void rlw_DrawCircleSector(rlw::Vector2 center, float radius, float startAngle, float endAngle, int segments, rlw::Color color) {
    rlw::DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

void rlw_DrawCircleSectorLines(rlw::Vector2 center, float radius, float startAngle, float endAngle, int segments, rlw::Color color) {
    rlw::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

void rlw_DrawCircleGradient(int centerX, int centerY, float radius, rlw::Color color1, rlw::Color color2) {
    rlw::DrawCircleGradient(centerX, centerY, radius, color1, color2);
}

void rlw_DrawCircleV(rlw::Vector2 center, float radius, rlw::Color color) {
    rlw::DrawCircleV(center, radius, color);
}

void rlw_DrawCircleLines(int centerX, int centerY, float radius, rlw::Color color) {
    rlw::DrawCircleLines(centerX, centerY, radius, color);
}

void rlw_DrawCircleLinesV(rlw::Vector2 center, float radius, rlw::Color color) {
    rlw::DrawCircleLinesV(center, radius, color);
}

void rlw_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, rlw::Color color) {
    rlw::DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

void rlw_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, rlw::Color color) {
    rlw::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
}

void rlw_DrawRing(rlw::Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, rlw::Color color) {
    rlw::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void rlw_DrawRingLines(rlw::Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, rlw::Color color) {
    rlw::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void rlw_DrawRectangle(int posX, int posY, int width, int height, rlw::Color color) {
    rlw::DrawRectangle(posX, posY, width, height, color);
}

void rlw_DrawRectangleV(rlw::Vector2 position, rlw::Vector2 size, rlw::Color color) {
    rlw::DrawRectangleV(position, size, color);
}

void rlw_DrawRectangleRec(rlw::Rectangle rec, rlw::Color color) {
    rlw::DrawRectangleRec(rec, color);
}

void rlw_DrawRectanglePro(rlw::Rectangle rec, rlw::Vector2 origin, float rotation, rlw::Color color) {
    rlw::DrawRectanglePro(rec, origin, rotation, color);
}

void rlw_DrawRectangleGradientV(int posX, int posY, int width, int height, rlw::Color color1, rlw::Color color2) {
    rlw::DrawRectangleGradientV(posX, posY, width, height, color1, color2);
}

void rlw_DrawRectangleGradientH(int posX, int posY, int width, int height, rlw::Color color1, rlw::Color color2) {
    rlw::DrawRectangleGradientH(posX, posY, width, height, color1, color2);
}

void rlw_DrawRectangleGradientEx(rlw::Rectangle rec, rlw::Color col1, rlw::Color col2, rlw::Color col3, rlw::Color col4) {
    rlw::DrawRectangleGradientEx(rec, col1, col2, col3, col4);
}

void rlw_DrawRectangleLines(int posX, int posY, int width, int height, rlw::Color color) {
    rlw::DrawRectangleLines(posX, posY, width, height, color);
}

void rlw_DrawRectangleLinesEx(rlw::Rectangle rec, float lineThick, rlw::Color color) {
    rlw::DrawRectangleLinesEx(rec, lineThick, color);
}

void rlw_DrawRectangleRounded(rlw::Rectangle rec, float roundness, int segments, rlw::Color color) {
    rlw::DrawRectangleRounded(rec, roundness, segments, color);
}

void rlw_DrawRectangleRoundedLines(rlw::Rectangle rec, float roundness, int segments, rlw::Color color) {
    rlw::DrawRectangleRoundedLines(rec, roundness, segments, color);
}

void rlw_DrawTriangle(rlw::Vector2 v1, rlw::Vector2 v2, rlw::Vector2 v3, rlw::Color color) {
    rlw::DrawTriangle(v1, v2, v3, color);
}

void rlw_DrawTriangleLines(rlw::Vector2 v1, rlw::Vector2 v2, rlw::Vector2 v3, rlw::Color color) {
    rlw::DrawTriangleLines(v1, v2, v3, color);
}

void rlw_DrawTriangleFan(rlw::Vector2 *points, int pointCount, rlw::Color color) {
    rlw::DrawTriangleFan(points, pointCount, color);
}

void rlw_DrawTriangleStrip(rlw::Vector2 *points, int pointCount, rlw::Color color) {
    rlw::DrawTriangleStrip(points, pointCount, color);
}

void rlw_DrawPoly(rlw::Vector2 center, int sides, float radius, float rotation, rlw::Color color) {
    rlw::DrawPoly(center, sides, radius, rotation, color);
}

void rlw_DrawPolyLines(rlw::Vector2 center, int sides, float radius, float rotation, rlw::Color color) {
    rlw::DrawPolyLines(center, sides, radius, rotation, color);
}

void rlw_DrawPolyLinesEx(rlw::Vector2 center, int sides, float radius, float rotation, float lineThick, rlw::Color color) {
    rlw::DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
}

void rlw_DrawSplineLinear(rlw::Vector2 *points, int pointCount, float thick, rlw::Color color) {
    rlw::DrawSplineLinear(points, pointCount, thick, color);
}

void rlw_DrawSplineBasis(rlw::Vector2 *points, int pointCount, float thick, rlw::Color color) {
    rlw::DrawSplineBasis(points, pointCount, thick, color);
}

void rlw_DrawSplineCatmullRom(rlw::Vector2 *points, int pointCount, float thick, rlw::Color color) {
    rlw::DrawSplineCatmullRom(points, pointCount, thick, color);
}

void rlw_DrawSplineBezierQuadratic(rlw::Vector2 *points, int pointCount, float thick, rlw::Color color) {
    rlw::DrawSplineBezierQuadratic(points, pointCount, thick, color);
}

void rlw_DrawSplineBezierCubic(rlw::Vector2 *points, int pointCount, float thick, rlw::Color color) {
    rlw::DrawSplineBezierCubic(points, pointCount, thick, color);
}

void rlw_DrawSplineSegmentLinear(rlw::Vector2 p1, rlw::Vector2 p2, float thick, rlw::Color color) {
    rlw::DrawSplineSegmentLinear(p1, p2, thick, color);
}

void rlw_DrawSplineSegmentBasis(rlw::Vector2 p1, rlw::Vector2 p2, rlw::Vector2 p3, rlw::Vector2 p4, float thick, rlw::Color color) {
    rlw::DrawSplineSegmentBasis(p1, p2, p3, p4, thick, color);
}

void rlw_DrawSplineSegmentCatmullRom(rlw::Vector2 p1, rlw::Vector2 p2, rlw::Vector2 p3, rlw::Vector2 p4, float thick, rlw::Color color) {
    rlw::DrawSplineSegmentCatmullRom(p1, p2, p3, p4, thick, color);
}

void rlw_DrawSplineSegmentBezierQuadratic(rlw::Vector2 p1, rlw::Vector2 c2, rlw::Vector2 p3, float thick, rlw::Color color) {
    rlw::DrawSplineSegmentBezierQuadratic(p1, c2, p3, thick, color);
}

void rlw_DrawSplineSegmentBezierCubic(rlw::Vector2 p1, rlw::Vector2 c2, rlw::Vector2 c3, rlw::Vector2 p4, float thick, rlw::Color color) {
    rlw::DrawSplineSegmentBezierCubic(p1, c2, c3, p4, thick, color);
}

rlw::Vector2 rlw_GetSplinePointLinear(rlw::Vector2 startPos, rlw::Vector2 endPos, float t) {
    return rlw::GetSplinePointLinear(startPos, endPos, t);
}

rlw::Vector2 rlw_GetSplinePointBasis(rlw::Vector2 p1, rlw::Vector2 p2, rlw::Vector2 p3, rlw::Vector2 p4, float t) {
    return rlw::GetSplinePointBasis(p1, p2, p3, p4, t);
}

rlw::Vector2 rlw_GetSplinePointCatmullRom(rlw::Vector2 p1, rlw::Vector2 p2, rlw::Vector2 p3, rlw::Vector2 p4, float t) {
    return rlw::GetSplinePointCatmullRom(p1, p2, p3, p4, t);
}

rlw::Vector2 rlw_GetSplinePointBezierQuad(rlw::Vector2 p1, rlw::Vector2 c2, rlw::Vector2 p3, float t) {
    return rlw::GetSplinePointBezierQuad(p1, c2, p3, t);
}

rlw::Vector2 rlw_GetSplinePointBezierCubic(rlw::Vector2 p1, rlw::Vector2 c2, rlw::Vector2 c3, rlw::Vector2 p4, float t) {
    return rlw::GetSplinePointBezierCubic(p1, c2, c3, p4, t);
}

bool rlw_CheckCollisionRecs(rlw::Rectangle rec1, rlw::Rectangle rec2) {
    return rlw::CheckCollisionRecs(rec1, rec2);
}

bool rlw_CheckCollisionCircles(rlw::Vector2 center1, float radius1, rlw::Vector2 center2, float radius2) {
    return rlw::CheckCollisionCircles(center1, radius1, center2, radius2);
}

bool rlw_CheckCollisionCircleRec(rlw::Vector2 center, float radius, rlw::Rectangle rec) {
    return rlw::CheckCollisionCircleRec(center, radius, rec);
}

bool rlw_CheckCollisionPointRec(rlw::Vector2 point, rlw::Rectangle rec) {
    return rlw::CheckCollisionPointRec(point, rec);
}

bool rlw_CheckCollisionPointCircle(rlw::Vector2 point, rlw::Vector2 center, float radius) {
    return rlw::CheckCollisionPointCircle(point, center, radius);
}

bool rlw_CheckCollisionPointTriangle(rlw::Vector2 point, rlw::Vector2 p1, rlw::Vector2 p2, rlw::Vector2 p3) {
    return rlw::CheckCollisionPointTriangle(point, p1, p2, p3);
}

bool rlw_CheckCollisionPointPoly(rlw::Vector2 point, rlw::Vector2 *points, int pointCount) {
    return rlw::CheckCollisionPointPoly(point, points, pointCount);
}

bool rlw_CheckCollisionLines(rlw::Vector2 startPos1, rlw::Vector2 endPos1, rlw::Vector2 startPos2, rlw::Vector2 endPos2, rlw::Vector2 *collisionPoint) {
    return rlw::CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

bool rlw_CheckCollisionPointLine(rlw::Vector2 point, rlw::Vector2 p1, rlw::Vector2 p2, int threshold) {
    return rlw::CheckCollisionPointLine(point, p1, p2, threshold);
}

rlw::Rectangle rlw_GetCollisionRec(rlw::Rectangle rec1, rlw::Rectangle rec2) {
    return rlw::GetCollisionRec(rec1, rec2);
}

rlw::Image rlw_LoadImage(const char *fileName) {
    return rlw::LoadImage(fileName);
}

rlw::Image rlw_LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize) {
    return rlw::LoadImageRaw(fileName, width, height, format, headerSize);
}

rlw::Image rlw_LoadImageAnim(const char *fileName, int *frames) {
    return rlw::LoadImageAnim(fileName, frames);
}

rlw::Image rlw_LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return rlw::LoadImageFromMemory(fileType, fileData, dataSize);
}

rlw::Image rlw_LoadImageFromTexture(rlw::Texture2D texture) {
    return rlw::LoadImageFromTexture(texture);
}

rlw::Image rlw_LoadImageFromScreen(void) {
    return rlw::LoadImageFromScreen();
}

bool rlw_IsImageValid(rlw::Image image) {
    return rlw::IsImageValid(image);
}

void rlw_UnloadImage(rlw::Image image) {
    rlw::UnloadImage(image);
}

bool rlw_ExportImage(rlw::Image image, const char *fileName) {
    return rlw::ExportImage(image, fileName);
}

bool rlw_ExportImageAsCode(rlw::Image image, const char *fileName) {
    return rlw::ExportImageAsCode(image, fileName);
}

rlw::Image rlw_GenImageColor(int width, int height, rlw::Color color) {
    return rlw::GenImageColor(width, height, color);
}

rlw::Image rlw_GenImageGradientLinear(int width, int height, int direction, rlw::Color start, rlw::Color end) {
    return rlw::GenImageGradientLinear(width, height, direction, start, end);
}

rlw::Image rlw_GenImageGradientRadial(int width, int height, float density, rlw::Color inner, rlw::Color outer) {
    return rlw::GenImageGradientRadial(width, height, density, inner, outer);
}

rlw::Image rlw_GenImageGradientSquare(int width, int height, float density, rlw::Color inner, rlw::Color outer) {
    return rlw::GenImageGradientSquare(width, height, density, inner, outer);
}

rlw::Image rlw_GenImageChecked(int width, int height, int checksX, int checksY, rlw::Color col1, rlw::Color col2) {
    return rlw::GenImageChecked(width, height, checksX, checksY, col1, col2);
}

rlw::Image rlw_GenImageWhiteNoise(int width, int height, float factor) {
    return rlw::GenImageWhiteNoise(width, height, factor);
}

rlw::Image rlw_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
    return rlw::GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
}

rlw::Image rlw_GenImageCellular(int width, int height, int tileSize) {
    return rlw::GenImageCellular(width, height, tileSize);
}

rlw::Image rlw_GenImageText(int width, int height, const char *text) {
    return rlw::GenImageText(width, height, text);
}

rlw::Image rlw_ImageCopy(rlw::Image image) {
    return rlw::ImageCopy(image);
}

rlw::Image rlw_ImageFromImage(rlw::Image image, rlw::Rectangle rec) {
    return rlw::ImageFromImage(image, rec);
}

rlw::Image rlw_ImageText(const char *text, int fontSize, rlw::Color color) {
    return rlw::ImageText(text, fontSize, color);
}

rlw::Image rlw_ImageTextEx(rlw::Font font, const char *text, float fontSize, float spacing, rlw::Color tint) {
    return rlw::ImageTextEx(font, text, fontSize, spacing, tint);
}

void rlw_ImageFormat(rlw::Image *image, int newFormat) {
    rlw::ImageFormat(image, newFormat);
}

void rlw_ImageToPOT(rlw::Image *image, rlw::Color fill) {
    rlw::ImageToPOT(image, fill);
}

void rlw_ImageCrop(rlw::Image *image, rlw::Rectangle crop) {
    rlw::ImageCrop(image, crop);
}

void rlw_ImageAlphaCrop(rlw::Image *image, float threshold) {
    rlw::ImageAlphaCrop(image, threshold);
}

void rlw_ImageAlphaClear(rlw::Image *image, rlw::Color color, float threshold) {
    rlw::ImageAlphaClear(image, color, threshold);
}

void rlw_ImageAlphaMask(rlw::Image *image, rlw::Image alphaMask) {
    rlw::ImageAlphaMask(image, alphaMask);
}

void rlw_ImageAlphaPremultiply(rlw::Image *image) {
    rlw::ImageAlphaPremultiply(image);
}

void rlw_ImageBlurGaussian(rlw::Image *image, int blurSize) {
    rlw::ImageBlurGaussian(image, blurSize);
}

void rlw_ImageResize(rlw::Image *image, int newWidth, int newHeight) {
    rlw::ImageResize(image, newWidth, newHeight);
}

void rlw_ImageResizeNN(rlw::Image *image, int newWidth, int newHeight) {
    rlw::ImageResizeNN(image, newWidth, newHeight);
}

void rlw_ImageResizeCanvas(rlw::Image *image, int newWidth, int newHeight, int offsetX, int offsetY, rlw::Color fill) {
    rlw::ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
}

void rlw_ImageMipmaps(rlw::Image *image) {
    rlw::ImageMipmaps(image);
}

void rlw_ImageDither(rlw::Image *image, int rBpp, int gBpp, int bBpp, int aBpp) {
    rlw::ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

void rlw_ImageFlipVertical(rlw::Image *image) {
    rlw::ImageFlipVertical(image);
}

void rlw_ImageFlipHorizontal(rlw::Image *image) {
    rlw::ImageFlipHorizontal(image);
}

void rlw_ImageRotate(rlw::Image *image, int degrees) {
    rlw::ImageRotate(image, degrees);
}

void rlw_ImageRotateCW(rlw::Image *image) {
    rlw::ImageRotateCW(image);
}

void rlw_ImageRotateCCW(rlw::Image *image) {
    rlw::ImageRotateCCW(image);
}

void rlw_ImageColorTint(rlw::Image *image, rlw::Color color) {
    rlw::ImageColorTint(image, color);
}

void rlw_ImageColorInvert(rlw::Image *image) {
    rlw::ImageColorInvert(image);
}

void rlw_ImageColorGrayscale(rlw::Image *image) {
    rlw::ImageColorGrayscale(image);
}

void rlw_ImageColorContrast(rlw::Image *image, float contrast) {
    rlw::ImageColorContrast(image, contrast);
}

void rlw_ImageColorBrightness(rlw::Image *image, int brightness) {
    rlw::ImageColorBrightness(image, brightness);
}

void rlw_ImageColorReplace(rlw::Image *image, rlw::Color color, rlw::Color replace) {
    rlw::ImageColorReplace(image, color, replace);
}

void rlw_UnloadImageColors(rlw::Color *colors) {
    rlw::UnloadImageColors(colors);
}

void rlw_UnloadImagePalette(rlw::Color *colors) {
    rlw::UnloadImagePalette(colors);
}

rlw::Rectangle rlw_GetImageAlphaBorder(rlw::Image image, float threshold) {
    return rlw::GetImageAlphaBorder(image, threshold);
}

rlw::Color rlw_GetImageColor(rlw::Image image, int x, int y) {
    return rlw::GetImageColor(image, x, y);
}

void rlw_ImageClearBackground(rlw::Image *dst, rlw::Color color) {
    rlw::ImageClearBackground(dst, color);
}

void rlw_ImageDrawPixel(rlw::Image *dst, int posX, int posY, rlw::Color color) {
    rlw::ImageDrawPixel(dst, posX, posY, color);
}

void rlw_ImageDrawPixelV(rlw::Image *dst, rlw::Vector2 position, rlw::Color color) {
    rlw::ImageDrawPixelV(dst, position, color);
}

void rlw_ImageDrawLine(rlw::Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, rlw::Color color) {
    rlw::ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
}

void rlw_ImageDrawLineV(rlw::Image *dst, rlw::Vector2 start, rlw::Vector2 end, rlw::Color color) {
    rlw::ImageDrawLineV(dst, start, end, color);
}

void rlw_ImageDrawCircle(rlw::Image *dst, int centerX, int centerY, int radius, rlw::Color color) {
    rlw::ImageDrawCircle(dst, centerX, centerY, radius, color);
}

void rlw_ImageDrawCircleV(rlw::Image *dst, rlw::Vector2 center, int radius, rlw::Color color) {
    rlw::ImageDrawCircleV(dst, center, radius, color);
}

void rlw_ImageDrawCircleLines(rlw::Image *dst, int centerX, int centerY, int radius, rlw::Color color) {
    rlw::ImageDrawCircleLines(dst, centerX, centerY, radius, color);
}

void rlw_ImageDrawCircleLinesV(rlw::Image *dst, rlw::Vector2 center, int radius, rlw::Color color) {
    rlw::ImageDrawCircleLinesV(dst, center, radius, color);
}

void rlw_ImageDrawRectangle(rlw::Image *dst, int posX, int posY, int width, int height, rlw::Color color) {
    rlw::ImageDrawRectangle(dst, posX, posY, width, height, color);
}

void rlw_ImageDrawRectangleV(rlw::Image *dst, rlw::Vector2 position, rlw::Vector2 size, rlw::Color color) {
    rlw::ImageDrawRectangleV(dst, position, size, color);
}

void rlw_ImageDrawRectangleRec(rlw::Image *dst, rlw::Rectangle rec, rlw::Color color) {
    rlw::ImageDrawRectangleRec(dst, rec, color);
}

void rlw_ImageDrawRectangleLines(rlw::Image *dst, rlw::Rectangle rec, int thick, rlw::Color color) {
    rlw::ImageDrawRectangleLines(dst, rec, thick, color);
}

void rlw_ImageDraw(rlw::Image *dst, rlw::Image src, rlw::Rectangle srcRec, rlw::Rectangle dstRec, rlw::Color tint) {
    rlw::ImageDraw(dst, src, srcRec, dstRec, tint);
}

void rlw_ImageDrawText(rlw::Image *dst, const char *text, int posX, int posY, int fontSize, rlw::Color color) {
    rlw::ImageDrawText(dst, text, posX, posY, fontSize, color);
}

void rlw_ImageDrawTextEx(rlw::Image *dst, rlw::Font font, const char *text, rlw::Vector2 position, float fontSize, float spacing, rlw::Color tint) {
    rlw::ImageDrawTextEx(dst, font, text, position, fontSize, spacing, tint);
}

rlw::Texture2D rlw_LoadTexture(const char *fileName) {
    return rlw::LoadTexture(fileName);
}

rlw::Texture2D rlw_LoadTextureFromImage(rlw::Image image) {
    return rlw::LoadTextureFromImage(image);
}

rlw::TextureCubemap rlw_LoadTextureCubemap(rlw::Image image, int layout) {
    return rlw::LoadTextureCubemap(image, layout);
}

rlw::RenderTexture2D rlw_LoadRenderTexture(int width, int height) {
    return rlw::LoadRenderTexture(width, height);
}

bool rlw_IsTextureValid(rlw::Texture2D texture) {
    return rlw::IsTextureValid(texture);
}

void rlw_UnloadTexture(rlw::Texture2D texture) {
    rlw::UnloadTexture(texture);
}

bool rlw_IsRenderTextureValid(rlw::RenderTexture2D target) {
    return rlw::IsRenderTextureValid(target);
}

void rlw_UnloadRenderTexture(rlw::RenderTexture2D target) {
    rlw::UnloadRenderTexture(target);
}

void rlw_UpdateTexture(rlw::Texture2D texture, const void *pixels) {
    rlw::UpdateTexture(texture, pixels);
}

void rlw_UpdateTextureRec(rlw::Texture2D texture, rlw::Rectangle rec, const void *pixels) {
    rlw::UpdateTextureRec(texture, rec, pixels);
}

void rlw_GenTextureMipmaps(rlw::Texture2D *texture) {
    rlw::GenTextureMipmaps(texture);
}

void rlw_SetTextureFilter(rlw::Texture2D texture, int filter) {
    rlw::SetTextureFilter(texture, filter);
}

void rlw_SetTextureWrap(rlw::Texture2D texture, int wrap) {
    rlw::SetTextureWrap(texture, wrap);
}

void rlw_DrawTexture(rlw::Texture2D texture, int posX, int posY, rlw::Color tint) {
    rlw::DrawTexture(texture, posX, posY, tint);
}

void rlw_DrawTextureV(rlw::Texture2D texture, rlw::Vector2 position, rlw::Color tint) {
    rlw::DrawTextureV(texture, position, tint);
}

void rlw_DrawTextureEx(rlw::Texture2D texture, rlw::Vector2 position, float rotation, float scale, rlw::Color tint) {
    rlw::DrawTextureEx(texture, position, rotation, scale, tint);
}

void rlw_DrawTextureRec(rlw::Texture2D texture, rlw::Rectangle source, rlw::Vector2 position, rlw::Color tint) {
    rlw::DrawTextureRec(texture, source, position, tint);
}

void rlw_DrawTexturePro(rlw::Texture2D texture, rlw::Rectangle source, rlw::Rectangle dest, rlw::Vector2 origin, float rotation, rlw::Color tint) {
    rlw::DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

void rlw_DrawTextureNPatch(rlw::Texture2D texture, rlw::NPatchInfo nPatchInfo, rlw::Rectangle dest, rlw::Vector2 origin, float rotation, rlw::Color tint) {
    rlw::DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
}

rlw::Color rlw_Fade(rlw::Color color, float alpha) {
    return rlw::Fade(color, alpha);
}

int rlw_ColorToInt(rlw::Color color) {
    return rlw::ColorToInt(color);
}

rlw::Vector4 rlw_ColorNormalize(rlw::Color color) {
    return rlw::ColorNormalize(color);
}

rlw::Color rlw_ColorFromNormalized(rlw::Vector4 normalized) {
    return rlw::ColorFromNormalized(normalized);
}

rlw::Vector3 rlw_ColorToHSV(rlw::Color color) {
    return rlw::ColorToHSV(color);
}

rlw::Color rlw_ColorFromHSV(float hue, float saturation, float value) {
    return rlw::ColorFromHSV(hue, saturation, value);
}

rlw::Color rlw_ColorTint(rlw::Color color, rlw::Color tint) {
    return rlw::ColorTint(color, tint);
}

rlw::Color rlw_ColorBrightness(rlw::Color color, float factor) {
    return rlw::ColorBrightness(color, factor);
}

rlw::Color rlw_ColorContrast(rlw::Color color, float contrast) {
    return rlw::ColorContrast(color, contrast);
}

rlw::Color rlw_ColorAlpha(rlw::Color color, float alpha) {
    return rlw::ColorAlpha(color, alpha);
}

rlw::Color rlw_ColorAlphaBlend(rlw::Color dst, rlw::Color src, rlw::Color tint) {
    return rlw::ColorAlphaBlend(dst, src, tint);
}

rlw::Color rlw_GetColor(unsigned int hexValue) {
    return rlw::GetColor(hexValue);
}

rlw::Color rlw_GetPixelColor(void *srcPtr, int format) {
    return rlw::GetPixelColor(srcPtr, format);
}

void rlw_SetPixelColor(void *dstPtr, rlw::Color color, int format) {
    rlw::SetPixelColor(dstPtr, color, format);
}

int rlw_GetPixelDataSize(int width, int height, int format) {
    return rlw::GetPixelDataSize(width, height, format);
}

rlw::Font rlw_GetFontDefault(void) {
    return rlw::GetFontDefault();
}

rlw::Font rlw_LoadFont(const char *fileName) {
    return rlw::LoadFont(fileName);
}

rlw::Font rlw_LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount) {
    return rlw::LoadFontEx(fileName, fontSize, codepoints, codepointCount);
}

rlw::Font rlw_LoadFontFromImage(rlw::Image image, rlw::Color key, int firstChar) {
    return rlw::LoadFontFromImage(image, key, firstChar);
}

rlw::Font rlw_LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount) {
    return rlw::LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount);
}

bool rlw_IsFontValid(rlw::Font font) {
    return rlw::IsFontValid(font);
}

rlw::Image rlw_GenImageFontAtlas(const rlw::GlyphInfo *glyphs, rlw::Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod) {
    return rlw::GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod);
}

void rlw_UnloadFontData(rlw::GlyphInfo *glyphs, int glyphCount) {
    rlw::UnloadFontData(glyphs, glyphCount);
}

void rlw_UnloadFont(rlw::Font font) {
    rlw::UnloadFont(font);
}

bool rlw_ExportFontAsCode(rlw::Font font, const char *fileName) {
    return rlw::ExportFontAsCode(font, fileName);
}

void rlw_DrawFPS(int posX, int posY) {
    rlw::DrawFPS(posX, posY);
}

void rlw_DrawText(const char *text, int posX, int posY, int fontSize, rlw::Color color) {
    rlw::DrawText(text, posX, posY, fontSize, color);
}

void rlw_DrawTextEx(rlw::Font font, const char *text, rlw::Vector2 position, float fontSize, float spacing, rlw::Color tint) {
    rlw::DrawTextEx(font, text, position, fontSize, spacing, tint);
}

void rlw_DrawTextPro(rlw::Font font, const char *text, rlw::Vector2 position, rlw::Vector2 origin, float rotation, float fontSize, float spacing, rlw::Color tint) {
    rlw::DrawTextPro(font, text, position, origin, rotation, fontSize, spacing, tint);
}

void rlw_DrawTextCodepoint(rlw::Font font, int codepoint, rlw::Vector2 position, float fontSize, rlw::Color tint) {
    rlw::DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

void rlw_DrawTextCodepoints(rlw::Font font, const int *codepoints, int codepointCount, rlw::Vector2 position, float fontSize, float spacing, rlw::Color tint) {
    rlw::DrawTextCodepoints(font, codepoints, codepointCount, position, fontSize, spacing, tint);
}

void rlw_SetTextLineSpacing(int spacing) {
    rlw::SetTextLineSpacing(spacing);
}

int rlw_MeasureText(const char *text, int fontSize) {
    return rlw::MeasureText(text, fontSize);
}

rlw::Vector2 rlw_MeasureTextEx(rlw::Font font, const char *text, float fontSize, float spacing) {
    return rlw::MeasureTextEx(font, text, fontSize, spacing);
}

int rlw_GetGlyphIndex(rlw::Font font, int codepoint) {
    return rlw::GetGlyphIndex(font, codepoint);
}

rlw::GlyphInfo rlw_GetGlyphInfo(rlw::Font font, int codepoint) {
    return rlw::GetGlyphInfo(font, codepoint);
}

rlw::Rectangle rlw_GetGlyphAtlasRec(rlw::Font font, int codepoint) {
    return rlw::GetGlyphAtlasRec(font, codepoint);
}

void rlw_UnloadUTF8(char *text) {
    rlw::UnloadUTF8(text);
}

void rlw_UnloadCodepoints(int *codepoints) {
    rlw::UnloadCodepoints(codepoints);
}

int rlw_GetCodepointCount(const char *text) {
    return rlw::GetCodepointCount(text);
}

int rlw_GetCodepoint(const char *text, int *codepointSize) {
    return rlw::GetCodepoint(text, codepointSize);
}

int rlw_GetCodepointNext(const char *text, int *codepointSize) {
    return rlw::GetCodepointNext(text, codepointSize);
}

int rlw_GetCodepointPrevious(const char *text, int *codepointSize) {
    return rlw::GetCodepointPrevious(text, codepointSize);
}

int rlw_TextCopy(char *dst, const char *src) {
    return rlw::TextCopy(dst, src);
}

bool rlw_TextIsEqual(const char *text1, const char *text2) {
    return rlw::TextIsEqual(text1, text2);
}

unsigned int rlw_TextLength(const char *text) {
    return rlw::TextLength(text);
}

void rlw_TextAppend(char *text, const char *append, int *position) {
    rlw::TextAppend(text, append, position);
}

int rlw_TextFindIndex(const char *text, const char *find) {
    return rlw::TextFindIndex(text, find);
}

int rlw_TextToInteger(const char *text) {
    return rlw::TextToInteger(text);
}

void rlw_DrawLine3D(rlw::Vector3 startPos, rlw::Vector3 endPos, rlw::Color color) {
    rlw::DrawLine3D(startPos, endPos, color);
}

void rlw_DrawPoint3D(rlw::Vector3 position, rlw::Color color) {
    rlw::DrawPoint3D(position, color);
}

void rlw_DrawCircle3D(rlw::Vector3 center, float radius, rlw::Vector3 rotationAxis, float rotationAngle, rlw::Color color) {
    rlw::DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

void rlw_DrawTriangle3D(rlw::Vector3 v1, rlw::Vector3 v2, rlw::Vector3 v3, rlw::Color color) {
    rlw::DrawTriangle3D(v1, v2, v3, color);
}

void rlw_DrawTriangleStrip3D(rlw::Vector3 *points, int pointCount, rlw::Color color) {
    rlw::DrawTriangleStrip3D(points, pointCount, color);
}

void rlw_DrawCube(rlw::Vector3 position, float width, float height, float length, rlw::Color color) {
    rlw::DrawCube(position, width, height, length, color);
}

void rlw_DrawCubeV(rlw::Vector3 position, rlw::Vector3 size, rlw::Color color) {
    rlw::DrawCubeV(position, size, color);
}

void rlw_DrawCubeWires(rlw::Vector3 position, float width, float height, float length, rlw::Color color) {
    rlw::DrawCubeWires(position, width, height, length, color);
}

void rlw_DrawCubeWiresV(rlw::Vector3 position, rlw::Vector3 size, rlw::Color color) {
    rlw::DrawCubeWiresV(position, size, color);
}

void rlw_DrawSphere(rlw::Vector3 centerPos, float radius, rlw::Color color) {
    rlw::DrawSphere(centerPos, radius, color);
}

void rlw_DrawSphereEx(rlw::Vector3 centerPos, float radius, int rings, int slices, rlw::Color color) {
    rlw::DrawSphereEx(centerPos, radius, rings, slices, color);
}

void rlw_DrawSphereWires(rlw::Vector3 centerPos, float radius, int rings, int slices, rlw::Color color) {
    rlw::DrawSphereWires(centerPos, radius, rings, slices, color);
}

void rlw_DrawCylinder(rlw::Vector3 position, float radiusTop, float radiusBottom, float height, int slices, rlw::Color color) {
    rlw::DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

void rlw_DrawCylinderEx(rlw::Vector3 startPos, rlw::Vector3 endPos, float startRadius, float endRadius, int sides, rlw::Color color) {
    rlw::DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void rlw_DrawCylinderWires(rlw::Vector3 position, float radiusTop, float radiusBottom, float height, int slices, rlw::Color color) {
    rlw::DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

void rlw_DrawCylinderWiresEx(rlw::Vector3 startPos, rlw::Vector3 endPos, float startRadius, float endRadius, int sides, rlw::Color color) {
    rlw::DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void rlw_DrawCapsule(rlw::Vector3 startPos, rlw::Vector3 endPos, float radius, int slices, int rings, rlw::Color color) {
    rlw::DrawCapsule(startPos, endPos, radius, slices, rings, color);
}

void rlw_DrawCapsuleWires(rlw::Vector3 startPos, rlw::Vector3 endPos, float radius, int slices, int rings, rlw::Color color) {
    rlw::DrawCapsuleWires(startPos, endPos, radius, slices, rings, color);
}

void rlw_DrawPlane(rlw::Vector3 centerPos, rlw::Vector2 size, rlw::Color color) {
    rlw::DrawPlane(centerPos, size, color);
}

void rlw_DrawRay(rlw::Ray ray, rlw::Color color) {
    rlw::DrawRay(ray, color);
}

void rlw_DrawGrid(int slices, float spacing) {
    rlw::DrawGrid(slices, spacing);
}

rlw::Model rlw_LoadModel(const char *fileName) {
    return rlw::LoadModel(fileName);
}

rlw::Model rlw_LoadModelFromMesh(rlw::Mesh mesh) {
    return rlw::LoadModelFromMesh(mesh);
}

bool rlw_IsModelValid(rlw::Model model) {
    return rlw::IsModelValid(model);
}

void rlw_UnloadModel(rlw::Model model) {
    rlw::UnloadModel(model);
}

rlw::BoundingBox rlw_GetModelBoundingBox(rlw::Model model) {
    return rlw::GetModelBoundingBox(model);
}

void rlw_DrawModel(rlw::Model model, rlw::Vector3 position, float scale, rlw::Color tint) {
    rlw::DrawModel(model, position, scale, tint);
}

void rlw_DrawModelEx(rlw::Model model, rlw::Vector3 position, rlw::Vector3 rotationAxis, float rotationAngle, rlw::Vector3 scale, rlw::Color tint) {
    rlw::DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void rlw_DrawModelWires(rlw::Model model, rlw::Vector3 position, float scale, rlw::Color tint) {
    rlw::DrawModelWires(model, position, scale, tint);
}

void rlw_DrawModelWiresEx(rlw::Model model, rlw::Vector3 position, rlw::Vector3 rotationAxis, float rotationAngle, rlw::Vector3 scale, rlw::Color tint) {
    rlw::DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void rlw_DrawBoundingBox(rlw::BoundingBox box, rlw::Color color) {
    rlw::DrawBoundingBox(box, color);
}

void rlw_DrawBillboard(rlw::Camera camera, rlw::Texture2D texture, rlw::Vector3 position, float size, rlw::Color tint) {
    rlw::DrawBillboard(camera, texture, position, size, tint);
}

void rlw_DrawBillboardRec(rlw::Camera camera, rlw::Texture2D texture, rlw::Rectangle source, rlw::Vector3 position, rlw::Vector2 size, rlw::Color tint) {
    rlw::DrawBillboardRec(camera, texture, source, position, size, tint);
}

void rlw_DrawBillboardPro(rlw::Camera camera, rlw::Texture2D texture, rlw::Rectangle source, rlw::Vector3 position, rlw::Vector3 up, rlw::Vector2 size, rlw::Vector2 origin, float rotation, rlw::Color tint) {
    rlw::DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint);
}

void rlw_UploadMesh(rlw::Mesh *mesh, bool dynamic) {
    rlw::UploadMesh(mesh, dynamic);
}

void rlw_UpdateMeshBuffer(rlw::Mesh mesh, int index, const void *data, int dataSize, int offset) {
    rlw::UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

void rlw_UnloadMesh(rlw::Mesh mesh) {
    rlw::UnloadMesh(mesh);
}

void rlw_DrawMesh(rlw::Mesh mesh, rlw::Material material, rlw::Matrix transform) {
    rlw::DrawMesh(mesh, material, transform);
}

void rlw_DrawMeshInstanced(rlw::Mesh mesh, rlw::Material material, const rlw::Matrix *transforms, int instances) {
    rlw::DrawMeshInstanced(mesh, material, transforms, instances);
}

bool rlw_ExportMesh(rlw::Mesh mesh, const char *fileName) {
    return rlw::ExportMesh(mesh, fileName);
}

rlw::BoundingBox rlw_GetMeshBoundingBox(rlw::Mesh mesh) {
    return rlw::GetMeshBoundingBox(mesh);
}

void rlw_GenMeshTangents(rlw::Mesh *mesh) {
    rlw::GenMeshTangents(mesh);
}

rlw::Mesh rlw_GenMeshPoly(int sides, float radius) {
    return rlw::GenMeshPoly(sides, radius);
}

rlw::Mesh rlw_GenMeshPlane(float width, float length, int resX, int resZ) {
    return rlw::GenMeshPlane(width, length, resX, resZ);
}

rlw::Mesh rlw_GenMeshCube(float width, float height, float length) {
    return rlw::GenMeshCube(width, height, length);
}

rlw::Mesh rlw_GenMeshSphere(float radius, int rings, int slices) {
    return rlw::GenMeshSphere(radius, rings, slices);
}

rlw::Mesh rlw_GenMeshHemiSphere(float radius, int rings, int slices) {
    return rlw::GenMeshHemiSphere(radius, rings, slices);
}

rlw::Mesh rlw_GenMeshCylinder(float radius, float height, int slices) {
    return rlw::GenMeshCylinder(radius, height, slices);
}

rlw::Mesh rlw_GenMeshCone(float radius, float height, int slices) {
    return rlw::GenMeshCone(radius, height, slices);
}

rlw::Mesh rlw_GenMeshTorus(float radius, float size, int radSeg, int sides) {
    return rlw::GenMeshTorus(radius, size, radSeg, sides);
}

rlw::Mesh rlw_GenMeshKnot(float radius, float size, int radSeg, int sides) {
    return rlw::GenMeshKnot(radius, size, radSeg, sides);
}

rlw::Mesh rlw_GenMeshHeightmap(rlw::Image heightmap, rlw::Vector3 size) {
    return rlw::GenMeshHeightmap(heightmap, size);
}

rlw::Mesh rlw_GenMeshCubicmap(rlw::Image cubicmap, rlw::Vector3 cubeSize) {
    return rlw::GenMeshCubicmap(cubicmap, cubeSize);
}

rlw::Material rlw_LoadMaterialDefault(void) {
    return rlw::LoadMaterialDefault();
}

bool rlw_IsMaterialValid(rlw::Material material) {
    return rlw::IsMaterialValid(material);
}

void rlw_UnloadMaterial(rlw::Material material) {
    rlw::UnloadMaterial(material);
}

void rlw_SetMaterialTexture(rlw::Material *material, int mapType, rlw::Texture2D texture) {
    rlw::SetMaterialTexture(material, mapType, texture);
}

void rlw_SetModelMeshMaterial(rlw::Model *model, int meshId, int materialId) {
    rlw::SetModelMeshMaterial(model, meshId, materialId);
}

void rlw_UpdateModelAnimation(rlw::Model model, rlw::ModelAnimation anim, int frame) {
    rlw::UpdateModelAnimation(model, anim, frame);
}

void rlw_UnloadModelAnimation(rlw::ModelAnimation anim) {
    rlw::UnloadModelAnimation(anim);
}

void rlw_UnloadModelAnimations(rlw::ModelAnimation *animations, int animCount) {
    rlw::UnloadModelAnimations(animations, animCount);
}

bool rlw_IsModelAnimationValid(rlw::Model model, rlw::ModelAnimation anim) {
    return rlw::IsModelAnimationValid(model, anim);
}

bool rlw_CheckCollisionSpheres(rlw::Vector3 center1, float radius1, rlw::Vector3 center2, float radius2) {
    return rlw::CheckCollisionSpheres(center1, radius1, center2, radius2);
}

bool rlw_CheckCollisionBoxes(rlw::BoundingBox box1, rlw::BoundingBox box2) {
    return rlw::CheckCollisionBoxes(box1, box2);
}

bool rlw_CheckCollisionBoxSphere(rlw::BoundingBox box, rlw::Vector3 center, float radius) {
    return rlw::CheckCollisionBoxSphere(box, center, radius);
}

rlw::RayCollision rlw_GetRayCollisionSphere(rlw::Ray ray, rlw::Vector3 center, float radius) {
    return rlw::GetRayCollisionSphere(ray, center, radius);
}

rlw::RayCollision rlw_GetRayCollisionBox(rlw::Ray ray, rlw::BoundingBox box) {
    return rlw::GetRayCollisionBox(ray, box);
}

rlw::RayCollision rlw_GetRayCollisionMesh(rlw::Ray ray, rlw::Mesh mesh, rlw::Matrix transform) {
    return rlw::GetRayCollisionMesh(ray, mesh, transform);
}

rlw::RayCollision rlw_GetRayCollisionTriangle(rlw::Ray ray, rlw::Vector3 p1, rlw::Vector3 p2, rlw::Vector3 p3) {
    return rlw::GetRayCollisionTriangle(ray, p1, p2, p3);
}

rlw::RayCollision rlw_GetRayCollisionQuad(rlw::Ray ray, rlw::Vector3 p1, rlw::Vector3 p2, rlw::Vector3 p3, rlw::Vector3 p4) {
    return rlw::GetRayCollisionQuad(ray, p1, p2, p3, p4);
}

void rlw_InitAudioDevice(void) {
    rlw::InitAudioDevice();
}

void rlw_CloseAudioDevice(void) {
    rlw::CloseAudioDevice();
}

bool rlw_IsAudioDeviceReady(void) {
    return rlw::IsAudioDeviceReady();
}

void rlw_SetMasterVolume(float volume) {
    rlw::SetMasterVolume(volume);
}

float rlw_GetMasterVolume(void) {
    return rlw::GetMasterVolume();
}

rlw::Wave rlw_LoadWave(const char *fileName) {
    return rlw::LoadWave(fileName);
}

rlw::Wave rlw_LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return rlw::LoadWaveFromMemory(fileType, fileData, dataSize);
}

bool rlw_IsWaveValid(rlw::Wave wave) {
    return rlw::IsWaveValid(wave);
}

rlw::Sound rlw_LoadSound(const char *fileName) {
    return rlw::LoadSound(fileName);
}

rlw::Sound rlw_LoadSoundFromWave(rlw::Wave wave) {
    return rlw::LoadSoundFromWave(wave);
}

rlw::Sound rlw_LoadSoundAlias(rlw::Sound source) {
    return rlw::LoadSoundAlias(source);
}

bool rlw_IsSoundValid(rlw::Sound sound) {
    return rlw::IsSoundValid(sound);
}

void rlw_UpdateSound(rlw::Sound sound, const void *data, int sampleCount) {
    rlw::UpdateSound(sound, data, sampleCount);
}

void rlw_UnloadWave(rlw::Wave wave) {
    rlw::UnloadWave(wave);
}

void rlw_UnloadSound(rlw::Sound sound) {
    rlw::UnloadSound(sound);
}

void rlw_UnloadSoundAlias(rlw::Sound alias) {
    rlw::UnloadSoundAlias(alias);
}

bool rlw_ExportWave(rlw::Wave wave, const char *fileName) {
    return rlw::ExportWave(wave, fileName);
}

bool rlw_ExportWaveAsCode(rlw::Wave wave, const char *fileName) {
    return rlw::ExportWaveAsCode(wave, fileName);
}

void rlw_PlaySound(rlw::Sound sound) {
    rlw::PlaySound(sound);
}

void rlw_StopSound(rlw::Sound sound) {
    rlw::StopSound(sound);
}

void rlw_PauseSound(rlw::Sound sound) {
    rlw::PauseSound(sound);
}

void rlw_ResumeSound(rlw::Sound sound) {
    rlw::ResumeSound(sound);
}

bool rlw_IsSoundPlaying(rlw::Sound sound) {
    return rlw::IsSoundPlaying(sound);
}

void rlw_SetSoundVolume(rlw::Sound sound, float volume) {
    rlw::SetSoundVolume(sound, volume);
}

void rlw_SetSoundPitch(rlw::Sound sound, float pitch) {
    rlw::SetSoundPitch(sound, pitch);
}

void rlw_SetSoundPan(rlw::Sound sound, float pan) {
    rlw::SetSoundPan(sound, pan);
}

rlw::Wave rlw_WaveCopy(rlw::Wave wave) {
    return rlw::WaveCopy(wave);
}

void rlw_WaveCrop(rlw::Wave *wave, int initSample, int finalSample) {
    rlw::WaveCrop(wave, initSample, finalSample);
}

void rlw_WaveFormat(rlw::Wave *wave, int sampleRate, int sampleSize, int channels) {
    rlw::WaveFormat(wave, sampleRate, sampleSize, channels);
}

void rlw_UnloadWaveSamples(float *samples) {
    rlw::UnloadWaveSamples(samples);
}

rlw::Music rlw_LoadMusicStream(const char *fileName) {
    return rlw::LoadMusicStream(fileName);
}

rlw::Music rlw_LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize) {
    return rlw::LoadMusicStreamFromMemory(fileType, data, dataSize);
}

bool rlw_IsMusicValid(rlw::Music music) {
    return rlw::IsMusicValid(music);
}

void rlw_UnloadMusicStream(rlw::Music music) {
    rlw::UnloadMusicStream(music);
}

void rlw_PlayMusicStream(rlw::Music music) {
    rlw::PlayMusicStream(music);
}

bool rlw_IsMusicStreamPlaying(rlw::Music music) {
    return rlw::IsMusicStreamPlaying(music);
}

void rlw_UpdateMusicStream(rlw::Music music) {
    rlw::UpdateMusicStream(music);
}

void rlw_StopMusicStream(rlw::Music music) {
    rlw::StopMusicStream(music);
}

void rlw_PauseMusicStream(rlw::Music music) {
    rlw::PauseMusicStream(music);
}

void rlw_ResumeMusicStream(rlw::Music music) {
    rlw::ResumeMusicStream(music);
}

void rlw_SeekMusicStream(rlw::Music music, float position) {
    rlw::SeekMusicStream(music, position);
}

void rlw_SetMusicVolume(rlw::Music music, float volume) {
    rlw::SetMusicVolume(music, volume);
}

void rlw_SetMusicPitch(rlw::Music music, float pitch) {
    rlw::SetMusicPitch(music, pitch);
}

void rlw_SetMusicPan(rlw::Music music, float pan) {
    rlw::SetMusicPan(music, pan);
}

float rlw_GetMusicTimeLength(rlw::Music music) {
    return rlw::GetMusicTimeLength(music);
}

float rlw_GetMusicTimePlayed(rlw::Music music) {
    return rlw::GetMusicTimePlayed(music);
}

rlw::AudioStream rlw_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
    return rlw::LoadAudioStream(sampleRate, sampleSize, channels);
}

bool rlw_IsAudioStreamValid(rlw::AudioStream stream) {
    return rlw::IsAudioStreamValid(stream);
}

void rlw_UnloadAudioStream(rlw::AudioStream stream) {
    rlw::UnloadAudioStream(stream);
}

void rlw_UpdateAudioStream(rlw::AudioStream stream, const void *data, int frameCount) {
    rlw::UpdateAudioStream(stream, data, frameCount);
}

bool rlw_IsAudioStreamProcessed(rlw::AudioStream stream) {
    return rlw::IsAudioStreamProcessed(stream);
}

void rlw_PlayAudioStream(rlw::AudioStream stream) {
    rlw::PlayAudioStream(stream);
}

void rlw_PauseAudioStream(rlw::AudioStream stream) {
    rlw::PauseAudioStream(stream);
}

void rlw_ResumeAudioStream(rlw::AudioStream stream) {
    rlw::ResumeAudioStream(stream);
}

bool rlw_IsAudioStreamPlaying(rlw::AudioStream stream) {
    return rlw::IsAudioStreamPlaying(stream);
}

void rlw_StopAudioStream(rlw::AudioStream stream) {
    rlw::StopAudioStream(stream);
}

void rlw_SetAudioStreamVolume(rlw::AudioStream stream, float volume) {
    rlw::SetAudioStreamVolume(stream, volume);
}

void rlw_SetAudioStreamPitch(rlw::AudioStream stream, float pitch) {
    rlw::SetAudioStreamPitch(stream, pitch);
}

void rlw_SetAudioStreamPan(rlw::AudioStream stream, float pan) {
    rlw::SetAudioStreamPan(stream, pan);
}

void rlw_SetAudioStreamBufferSizeDefault(int size) {
    rlw::SetAudioStreamBufferSizeDefault(size);
}

void rlw_SetAudioStreamCallback(rlw::AudioStream stream, rlw::AudioCallback callback) {
    rlw::SetAudioStreamCallback(stream, callback);
}

void rlw_AttachAudioStreamProcessor(rlw::AudioStream stream, rlw::AudioCallback processor) {
    rlw::AttachAudioStreamProcessor(stream, processor);
}

void rlw_DetachAudioStreamProcessor(rlw::AudioStream stream, rlw::AudioCallback processor) {
    rlw::DetachAudioStreamProcessor(stream, processor);
}

void rlw_AttachAudioMixedProcessor(rlw::AudioCallback processor) {
    rlw::AttachAudioMixedProcessor(processor);
}

void rlw_DetachAudioMixedProcessor(rlw::AudioCallback processor) {
    rlw::DetachAudioMixedProcessor(processor);
}

} // extern "C"