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

void rlw_SetWindowIcon(Image image) {
    rlw::SetWindowIcon(image);
}

void rlw_SetWindowIcons(Image *images, int count) {
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

Vector2 rlw_GetMonitorPosition(int monitor) {
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

Vector2 rlw_GetWindowPosition(void) {
    return rlw::GetWindowPosition();
}

Vector2 rlw_GetWindowScaleDPI(void) {
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

void rlw_ClearBackground(Color color) {
    rlw::ClearBackground(color);
}

void rlw_BeginDrawing(void) {
    rlw::BeginDrawing();
}

void rlw_EndDrawing(void) {
    rlw::EndDrawing();
}

void rlw_BeginMode2D(Camera2D camera) {
    rlw::BeginMode2D(camera);
}

void rlw_EndMode2D(void) {
    rlw::EndMode2D();
}

void rlw_BeginMode3D(Camera3D camera) {
    rlw::BeginMode3D(camera);
}

void rlw_EndMode3D(void) {
    rlw::EndMode3D();
}

void rlw_BeginTextureMode(RenderTexture2D target) {
    rlw::BeginTextureMode(target);
}

void rlw_EndTextureMode(void) {
    rlw::EndTextureMode();
}

void rlw_BeginShaderMode(Shader shader) {
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

void rlw_BeginVrStereoMode(VrStereoConfig config) {
    rlw::BeginVrStereoMode(config);
}

void rlw_EndVrStereoMode(void) {
    rlw::EndVrStereoMode();
}

VrStereoConfig rlw_LoadVrStereoConfig(VrDeviceInfo device) {
    return rlw::LoadVrStereoConfig(device);
}

void rlw_UnloadVrStereoConfig(VrStereoConfig config) {
    rlw::UnloadVrStereoConfig(config);
}

Shader rlw_LoadShader(const char *vsFileName, const char *fsFileName) {
    return rlw::LoadShader(vsFileName, fsFileName);
}

Shader rlw_LoadShaderFromMemory(const char *vsCode, const char *fsCode) {
    return rlw::LoadShaderFromMemory(vsCode, fsCode);
}

bool rlw_IsShaderValid(Shader shader) {
    return rlw::IsShaderValid(shader);
}

int rlw_GetShaderLocation(Shader shader, const char *uniformName) {
    return rlw::GetShaderLocation(shader, uniformName);
}

int rlw_GetShaderLocationAttrib(Shader shader, const char *attribName) {
    return rlw::GetShaderLocationAttrib(shader, attribName);
}

void rlw_SetShaderValue(Shader shader, int locIndex, const void *value, int uniformType) {
    rlw::SetShaderValue(shader, locIndex, value, uniformType);
}

void rlw_SetShaderValueV(Shader shader, int locIndex, const void *value, int uniformType, int count) {
    rlw::SetShaderValueV(shader, locIndex, value, uniformType, count);
}

void rlw_SetShaderValueMatrix(Shader shader, int locIndex, Matrix mat) {
    rlw::SetShaderValueMatrix(shader, locIndex, mat);
}

void rlw_SetShaderValueTexture(Shader shader, int locIndex, Texture2D texture) {
    rlw::SetShaderValueTexture(shader, locIndex, texture);
}

void rlw_UnloadShader(Shader shader) {
    rlw::UnloadShader(shader);
}

Ray rlw_GetScreenToWorldRay(Vector2 mousePosition, Camera camera) {
    return rlw::GetScreenToWorldRay(mousePosition, camera);
}

Matrix rlw_GetCameraMatrix(Camera camera) {
    return rlw::GetCameraMatrix(camera);
}

Matrix rlw_GetCameraMatrix2D(Camera2D camera) {
    return rlw::GetCameraMatrix2D(camera);
}

Vector2 rlw_GetWorldToScreen(Vector3 position, Camera camera) {
    return rlw::GetWorldToScreen(position, camera);
}

Vector2 rlw_GetScreenToWorld2D(Vector2 position, Camera2D camera) {
    return rlw::GetScreenToWorld2D(position, camera);
}

Vector2 rlw_GetWorldToScreenEx(Vector3 position, Camera camera, int width, int height) {
    return rlw::GetWorldToScreenEx(position, camera, width, height);
}

Vector2 rlw_GetWorldToScreen2D(Vector2 position, Camera2D camera) {
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

void rlw_SetTraceLogCallback(TraceLogCallback callback) {
    rlw::SetTraceLogCallback(callback);
}

void rlw_SetLoadFileDataCallback(LoadFileDataCallback callback) {
    rlw::SetLoadFileDataCallback(callback);
}

void rlw_SetSaveFileDataCallback(SaveFileDataCallback callback) {
    rlw::SetSaveFileDataCallback(callback);
}

void rlw_SetLoadFileTextCallback(LoadFileTextCallback callback) {
    rlw::SetLoadFileTextCallback(callback);
}

void rlw_SetSaveFileTextCallback(SaveFileTextCallback callback) {
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

FilePathList rlw_LoadDirectoryFiles(const char *dirPath) {
    return rlw::LoadDirectoryFiles(dirPath);
}

FilePathList rlw_LoadDirectoryFilesEx(const char *basePath, const char *filter, bool scanSubdirs) {
    return rlw::LoadDirectoryFilesEx(basePath, filter, scanSubdirs);
}

void rlw_UnloadDirectoryFiles(FilePathList files) {
    rlw::UnloadDirectoryFiles(files);
}

bool rlw_IsFileDropped(void) {
    return rlw::IsFileDropped();
}

FilePathList rlw_LoadDroppedFiles(void) {
    return rlw::LoadDroppedFiles();
}

void rlw_UnloadDroppedFiles(FilePathList files) {
    rlw::UnloadDroppedFiles(files);
}

long rlw_GetFileModTime(const char *fileName) {
    return rlw::GetFileModTime(fileName);
}

AutomationEventList rlw_LoadAutomationEventList(const char *fileName) {
    return rlw::LoadAutomationEventList(fileName);
}

void rlw_UnloadAutomationEventList(AutomationEventList list) {
    rlw::UnloadAutomationEventList(list);
}

bool rlw_ExportAutomationEventList(AutomationEventList list, const char *fileName) {
    return rlw::ExportAutomationEventList(list, fileName);
}

void rlw_SetAutomationEventList(AutomationEventList *list) {
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

void rlw_PlayAutomationEvent(AutomationEvent event) {
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

Vector2 rlw_GetMousePosition(void) {
    return rlw::GetMousePosition();
}

Vector2 rlw_GetMouseDelta(void) {
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

Vector2 rlw_GetMouseWheelMoveV(void) {
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

Vector2 rlw_GetTouchPosition(int index) {
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

Vector2 rlw_GetGestureDragVector(void) {
    return rlw::GetGestureDragVector();
}

float rlw_GetGestureDragAngle(void) {
    return rlw::GetGestureDragAngle();
}

Vector2 rlw_GetGesturePinchVector(void) {
    return rlw::GetGesturePinchVector();
}

float rlw_GetGesturePinchAngle(void) {
    return rlw::GetGesturePinchAngle();
}

void rlw_UpdateCamera(Camera *camera, int mode) {
    rlw::UpdateCamera(camera, mode);
}

void rlw_UpdateCameraPro(Camera *camera, Vector3 movement, Vector3 rotation, float zoom) {
    rlw::UpdateCameraPro(camera, movement, rotation, zoom);
}

void rlw_SetShapesTexture(Texture2D texture, Rectangle source) {
    rlw::SetShapesTexture(texture, source);
}

void rlw_DrawPixel(int posX, int posY, Color color) {
    rlw::DrawPixel(posX, posY, color);
}

void rlw_DrawPixelV(Vector2 position, Color color) {
    rlw::DrawPixelV(position, color);
}

void rlw_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color) {
    rlw::DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

void rlw_DrawLineV(Vector2 startPos, Vector2 endPos, Color color) {
    rlw::DrawLineV(startPos, endPos, color);
}

void rlw_DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color) {
    rlw::DrawLineEx(startPos, endPos, thick, color);
}

void rlw_DrawLineStrip(Vector2 *points, int pointCount, Color color) {
    rlw::DrawLineStrip(points, pointCount, color);
}

void rlw_DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color) {
    rlw::DrawLineBezier(startPos, endPos, thick, color);
}

void rlw_DrawCircle(int centerX, int centerY, float radius, Color color) {
    rlw::DrawCircle(centerX, centerY, radius, color);
}

void rlw_DrawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
    rlw::DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

void rlw_DrawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
    rlw::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

void rlw_DrawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2) {
    rlw::DrawCircleGradient(centerX, centerY, radius, color1, color2);
}

void rlw_DrawCircleV(Vector2 center, float radius, Color color) {
    rlw::DrawCircleV(center, radius, color);
}

void rlw_DrawCircleLines(int centerX, int centerY, float radius, Color color) {
    rlw::DrawCircleLines(centerX, centerY, radius, color);
}

void rlw_DrawCircleLinesV(Vector2 center, float radius, Color color) {
    rlw::DrawCircleLinesV(center, radius, color);
}

void rlw_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
    rlw::DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

void rlw_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color) {
    rlw::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
}

void rlw_DrawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
    rlw::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void rlw_DrawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
    rlw::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

void rlw_DrawRectangle(int posX, int posY, int width, int height, Color color) {
    rlw::DrawRectangle(posX, posY, width, height, color);
}

void rlw_DrawRectangleV(Vector2 position, Vector2 size, Color color) {
    rlw::DrawRectangleV(position, size, color);
}

void rlw_DrawRectangleRec(Rectangle rec, Color color) {
    rlw::DrawRectangleRec(rec, color);
}

void rlw_DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color) {
    rlw::DrawRectanglePro(rec, origin, rotation, color);
}

void rlw_DrawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2) {
    rlw::DrawRectangleGradientV(posX, posY, width, height, color1, color2);
}

void rlw_DrawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2) {
    rlw::DrawRectangleGradientH(posX, posY, width, height, color1, color2);
}

void rlw_DrawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4) {
    rlw::DrawRectangleGradientEx(rec, col1, col2, col3, col4);
}

void rlw_DrawRectangleLines(int posX, int posY, int width, int height, Color color) {
    rlw::DrawRectangleLines(posX, posY, width, height, color);
}

void rlw_DrawRectangleLinesEx(Rectangle rec, float lineThick, Color color) {
    rlw::DrawRectangleLinesEx(rec, lineThick, color);
}

void rlw_DrawRectangleRounded(Rectangle rec, float roundness, int segments, Color color) {
    rlw::DrawRectangleRounded(rec, roundness, segments, color);
}

void rlw_DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, Color color) {
    rlw::DrawRectangleRoundedLines(rec, roundness, segments, color);
}

void rlw_DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    rlw::DrawTriangle(v1, v2, v3, color);
}

void rlw_DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    rlw::DrawTriangleLines(v1, v2, v3, color);
}

void rlw_DrawTriangleFan(Vector2 *points, int pointCount, Color color) {
    rlw::DrawTriangleFan(points, pointCount, color);
}

void rlw_DrawTriangleStrip(Vector2 *points, int pointCount, Color color) {
    rlw::DrawTriangleStrip(points, pointCount, color);
}

void rlw_DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color) {
    rlw::DrawPoly(center, sides, radius, rotation, color);
}

void rlw_DrawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color) {
    rlw::DrawPolyLines(center, sides, radius, rotation, color);
}

void rlw_DrawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color) {
    rlw::DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
}

void rlw_DrawSplineLinear(Vector2 *points, int pointCount, float thick, Color color) {
    rlw::DrawSplineLinear(points, pointCount, thick, color);
}

void rlw_DrawSplineBasis(Vector2 *points, int pointCount, float thick, Color color) {
    rlw::DrawSplineBasis(points, pointCount, thick, color);
}

void rlw_DrawSplineCatmullRom(Vector2 *points, int pointCount, float thick, Color color) {
    rlw::DrawSplineCatmullRom(points, pointCount, thick, color);
}

void rlw_DrawSplineBezierQuadratic(Vector2 *points, int pointCount, float thick, Color color) {
    rlw::DrawSplineBezierQuadratic(points, pointCount, thick, color);
}

void rlw_DrawSplineBezierCubic(Vector2 *points, int pointCount, float thick, Color color) {
    rlw::DrawSplineBezierCubic(points, pointCount, thick, color);
}

void rlw_DrawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color) {
    rlw::DrawSplineSegmentLinear(p1, p2, thick, color);
}

void rlw_DrawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color) {
    rlw::DrawSplineSegmentBasis(p1, p2, p3, p4, thick, color);
}

void rlw_DrawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color) {
    rlw::DrawSplineSegmentCatmullRom(p1, p2, p3, p4, thick, color);
}

void rlw_DrawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color) {
    rlw::DrawSplineSegmentBezierQuadratic(p1, c2, p3, thick, color);
}

void rlw_DrawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color) {
    rlw::DrawSplineSegmentBezierCubic(p1, c2, c3, p4, thick, color);
}

Vector2 rlw_GetSplinePointLinear(Vector2 startPos, Vector2 endPos, float t) {
    return rlw::GetSplinePointLinear(startPos, endPos, t);
}

Vector2 rlw_GetSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t) {
    return rlw::GetSplinePointBasis(p1, p2, p3, p4, t);
}

Vector2 rlw_GetSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t) {
    return rlw::GetSplinePointCatmullRom(p1, p2, p3, p4, t);
}

Vector2 rlw_GetSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t) {
    return rlw::GetSplinePointBezierQuad(p1, c2, p3, t);
}

Vector2 rlw_GetSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t) {
    return rlw::GetSplinePointBezierCubic(p1, c2, c3, p4, t);
}

bool rlw_CheckCollisionRecs(Rectangle rec1, Rectangle rec2) {
    return rlw::CheckCollisionRecs(rec1, rec2);
}

bool rlw_CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2) {
    return rlw::CheckCollisionCircles(center1, radius1, center2, radius2);
}

bool rlw_CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec) {
    return rlw::CheckCollisionCircleRec(center, radius, rec);
}

bool rlw_CheckCollisionPointRec(Vector2 point, Rectangle rec) {
    return rlw::CheckCollisionPointRec(point, rec);
}

bool rlw_CheckCollisionPointCircle(Vector2 point, Vector2 center, float radius) {
    return rlw::CheckCollisionPointCircle(point, center, radius);
}

bool rlw_CheckCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3) {
    return rlw::CheckCollisionPointTriangle(point, p1, p2, p3);
}

bool rlw_CheckCollisionPointPoly(Vector2 point, Vector2 *points, int pointCount) {
    return rlw::CheckCollisionPointPoly(point, points, pointCount);
}

bool rlw_CheckCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint) {
    return rlw::CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

bool rlw_CheckCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold) {
    return rlw::CheckCollisionPointLine(point, p1, p2, threshold);
}

Rectangle rlw_GetCollisionRec(Rectangle rec1, Rectangle rec2) {
    return rlw::GetCollisionRec(rec1, rec2);
}

Image rlw_LoadImage(const char *fileName) {
    return rlw::LoadImage(fileName);
}

Image rlw_LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize) {
    return rlw::LoadImageRaw(fileName, width, height, format, headerSize);
}

Image rlw_LoadImageAnim(const char *fileName, int *frames) {
    return rlw::LoadImageAnim(fileName, frames);
}

Image rlw_LoadImageFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return rlw::LoadImageFromMemory(fileType, fileData, dataSize);
}

Image rlw_LoadImageFromTexture(Texture2D texture) {
    return rlw::LoadImageFromTexture(texture);
}

Image rlw_LoadImageFromScreen(void) {
    return rlw::LoadImageFromScreen();
}

bool rlw_IsImageValid(Image image) {
    return rlw::IsImageValid(image);
}

void rlw_UnloadImage(Image image) {
    rlw::UnloadImage(image);
}

bool rlw_ExportImage(Image image, const char *fileName) {
    return rlw::ExportImage(image, fileName);
}

bool rlw_ExportImageAsCode(Image image, const char *fileName) {
    return rlw::ExportImageAsCode(image, fileName);
}

Image rlw_GenImageColor(int width, int height, Color color) {
    return rlw::GenImageColor(width, height, color);
}

Image rlw_GenImageGradientLinear(int width, int height, int direction, Color start, Color end) {
    return rlw::GenImageGradientLinear(width, height, direction, start, end);
}

Image rlw_GenImageGradientRadial(int width, int height, float density, Color inner, Color outer) {
    return rlw::GenImageGradientRadial(width, height, density, inner, outer);
}

Image rlw_GenImageGradientSquare(int width, int height, float density, Color inner, Color outer) {
    return rlw::GenImageGradientSquare(width, height, density, inner, outer);
}

Image rlw_GenImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2) {
    return rlw::GenImageChecked(width, height, checksX, checksY, col1, col2);
}

Image rlw_GenImageWhiteNoise(int width, int height, float factor) {
    return rlw::GenImageWhiteNoise(width, height, factor);
}

Image rlw_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
    return rlw::GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
}

Image rlw_GenImageCellular(int width, int height, int tileSize) {
    return rlw::GenImageCellular(width, height, tileSize);
}

Image rlw_GenImageText(int width, int height, const char *text) {
    return rlw::GenImageText(width, height, text);
}

Image rlw_ImageCopy(Image image) {
    return rlw::ImageCopy(image);
}

Image rlw_ImageFromImage(Image image, Rectangle rec) {
    return rlw::ImageFromImage(image, rec);
}

Image rlw_ImageText(const char *text, int fontSize, Color color) {
    return rlw::ImageText(text, fontSize, color);
}

Image rlw_ImageTextEx(Font font, const char *text, float fontSize, float spacing, Color tint) {
    return rlw::ImageTextEx(font, text, fontSize, spacing, tint);
}

void rlw_ImageFormat(Image *image, int newFormat) {
    rlw::ImageFormat(image, newFormat);
}

void rlw_ImageToPOT(Image *image, Color fill) {
    rlw::ImageToPOT(image, fill);
}

void rlw_ImageCrop(Image *image, Rectangle crop) {
    rlw::ImageCrop(image, crop);
}

void rlw_ImageAlphaCrop(Image *image, float threshold) {
    rlw::ImageAlphaCrop(image, threshold);
}

void rlw_ImageAlphaClear(Image *image, Color color, float threshold) {
    rlw::ImageAlphaClear(image, color, threshold);
}

void rlw_ImageAlphaMask(Image *image, Image alphaMask) {
    rlw::ImageAlphaMask(image, alphaMask);
}

void rlw_ImageAlphaPremultiply(Image *image) {
    rlw::ImageAlphaPremultiply(image);
}

void rlw_ImageBlurGaussian(Image *image, int blurSize) {
    rlw::ImageBlurGaussian(image, blurSize);
}

void rlw_ImageResize(Image *image, int newWidth, int newHeight) {
    rlw::ImageResize(image, newWidth, newHeight);
}

void rlw_ImageResizeNN(Image *image, int newWidth, int newHeight) {
    rlw::ImageResizeNN(image, newWidth, newHeight);
}

void rlw_ImageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill) {
    rlw::ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
}

void rlw_ImageMipmaps(Image *image) {
    rlw::ImageMipmaps(image);
}

void rlw_ImageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp) {
    rlw::ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

void rlw_ImageFlipVertical(Image *image) {
    rlw::ImageFlipVertical(image);
}

void rlw_ImageFlipHorizontal(Image *image) {
    rlw::ImageFlipHorizontal(image);
}

void rlw_ImageRotate(Image *image, int degrees) {
    rlw::ImageRotate(image, degrees);
}

void rlw_ImageRotateCW(Image *image) {
    rlw::ImageRotateCW(image);
}

void rlw_ImageRotateCCW(Image *image) {
    rlw::ImageRotateCCW(image);
}

void rlw_ImageColorTint(Image *image, Color color) {
    rlw::ImageColorTint(image, color);
}

void rlw_ImageColorInvert(Image *image) {
    rlw::ImageColorInvert(image);
}

void rlw_ImageColorGrayscale(Image *image) {
    rlw::ImageColorGrayscale(image);
}

void rlw_ImageColorContrast(Image *image, float contrast) {
    rlw::ImageColorContrast(image, contrast);
}

void rlw_ImageColorBrightness(Image *image, int brightness) {
    rlw::ImageColorBrightness(image, brightness);
}

void rlw_ImageColorReplace(Image *image, Color color, Color replace) {
    rlw::ImageColorReplace(image, color, replace);
}

void rlw_UnloadImageColors(Color *colors) {
    rlw::UnloadImageColors(colors);
}

void rlw_UnloadImagePalette(Color *colors) {
    rlw::UnloadImagePalette(colors);
}

Rectangle rlw_GetImageAlphaBorder(Image image, float threshold) {
    return rlw::GetImageAlphaBorder(image, threshold);
}

Color rlw_GetImageColor(Image image, int x, int y) {
    return rlw::GetImageColor(image, x, y);
}

void rlw_ImageClearBackground(Image *dst, Color color) {
    rlw::ImageClearBackground(dst, color);
}

void rlw_ImageDrawPixel(Image *dst, int posX, int posY, Color color) {
    rlw::ImageDrawPixel(dst, posX, posY, color);
}

void rlw_ImageDrawPixelV(Image *dst, Vector2 position, Color color) {
    rlw::ImageDrawPixelV(dst, position, color);
}

void rlw_ImageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color) {
    rlw::ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
}

void rlw_ImageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color) {
    rlw::ImageDrawLineV(dst, start, end, color);
}

void rlw_ImageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color) {
    rlw::ImageDrawCircle(dst, centerX, centerY, radius, color);
}

void rlw_ImageDrawCircleV(Image *dst, Vector2 center, int radius, Color color) {
    rlw::ImageDrawCircleV(dst, center, radius, color);
}

void rlw_ImageDrawCircleLines(Image *dst, int centerX, int centerY, int radius, Color color) {
    rlw::ImageDrawCircleLines(dst, centerX, centerY, radius, color);
}

void rlw_ImageDrawCircleLinesV(Image *dst, Vector2 center, int radius, Color color) {
    rlw::ImageDrawCircleLinesV(dst, center, radius, color);
}

void rlw_ImageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color) {
    rlw::ImageDrawRectangle(dst, posX, posY, width, height, color);
}

void rlw_ImageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color) {
    rlw::ImageDrawRectangleV(dst, position, size, color);
}

void rlw_ImageDrawRectangleRec(Image *dst, Rectangle rec, Color color) {
    rlw::ImageDrawRectangleRec(dst, rec, color);
}

void rlw_ImageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color) {
    rlw::ImageDrawRectangleLines(dst, rec, thick, color);
}

void rlw_ImageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint) {
    rlw::ImageDraw(dst, src, srcRec, dstRec, tint);
}

void rlw_ImageDrawText(Image *dst, const char *text, int posX, int posY, int fontSize, Color color) {
    rlw::ImageDrawText(dst, text, posX, posY, fontSize, color);
}

void rlw_ImageDrawTextEx(Image *dst, Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint) {
    rlw::ImageDrawTextEx(dst, font, text, position, fontSize, spacing, tint);
}

Texture2D rlw_LoadTexture(const char *fileName) {
    return rlw::LoadTexture(fileName);
}

Texture2D rlw_LoadTextureFromImage(Image image) {
    return rlw::LoadTextureFromImage(image);
}

TextureCubemap rlw_LoadTextureCubemap(Image image, int layout) {
    return rlw::LoadTextureCubemap(image, layout);
}

RenderTexture2D rlw_LoadRenderTexture(int width, int height) {
    return rlw::LoadRenderTexture(width, height);
}

bool rlw_IsTextureValid(Texture2D texture) {
    return rlw::IsTextureValid(texture);
}

void rlw_UnloadTexture(Texture2D texture) {
    rlw::UnloadTexture(texture);
}

bool rlw_IsRenderTextureValid(RenderTexture2D target) {
    return rlw::IsRenderTextureValid(target);
}

void rlw_UnloadRenderTexture(RenderTexture2D target) {
    rlw::UnloadRenderTexture(target);
}

void rlw_UpdateTexture(Texture2D texture, const void *pixels) {
    rlw::UpdateTexture(texture, pixels);
}

void rlw_UpdateTextureRec(Texture2D texture, Rectangle rec, const void *pixels) {
    rlw::UpdateTextureRec(texture, rec, pixels);
}

void rlw_GenTextureMipmaps(Texture2D *texture) {
    rlw::GenTextureMipmaps(texture);
}

void rlw_SetTextureFilter(Texture2D texture, int filter) {
    rlw::SetTextureFilter(texture, filter);
}

void rlw_SetTextureWrap(Texture2D texture, int wrap) {
    rlw::SetTextureWrap(texture, wrap);
}

void rlw_DrawTexture(Texture2D texture, int posX, int posY, Color tint) {
    rlw::DrawTexture(texture, posX, posY, tint);
}

void rlw_DrawTextureV(Texture2D texture, Vector2 position, Color tint) {
    rlw::DrawTextureV(texture, position, tint);
}

void rlw_DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint) {
    rlw::DrawTextureEx(texture, position, rotation, scale, tint);
}

void rlw_DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint) {
    rlw::DrawTextureRec(texture, source, position, tint);
}

void rlw_DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint) {
    rlw::DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

void rlw_DrawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint) {
    rlw::DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
}

Color rlw_Fade(Color color, float alpha) {
    return rlw::Fade(color, alpha);
}

int rlw_ColorToInt(Color color) {
    return rlw::ColorToInt(color);
}

Vector4 rlw_ColorNormalize(Color color) {
    return rlw::ColorNormalize(color);
}

Color rlw_ColorFromNormalized(Vector4 normalized) {
    return rlw::ColorFromNormalized(normalized);
}

Vector3 rlw_ColorToHSV(Color color) {
    return rlw::ColorToHSV(color);
}

Color rlw_ColorFromHSV(float hue, float saturation, float value) {
    return rlw::ColorFromHSV(hue, saturation, value);
}

Color rlw_ColorTint(Color color, Color tint) {
    return rlw::ColorTint(color, tint);
}

Color rlw_ColorBrightness(Color color, float factor) {
    return rlw::ColorBrightness(color, factor);
}

Color rlw_ColorContrast(Color color, float contrast) {
    return rlw::ColorContrast(color, contrast);
}

Color rlw_ColorAlpha(Color color, float alpha) {
    return rlw::ColorAlpha(color, alpha);
}

Color rlw_ColorAlphaBlend(Color dst, Color src, Color tint) {
    return rlw::ColorAlphaBlend(dst, src, tint);
}

Color rlw_GetColor(unsigned int hexValue) {
    return rlw::GetColor(hexValue);
}

Color rlw_GetPixelColor(void *srcPtr, int format) {
    return rlw::GetPixelColor(srcPtr, format);
}

void rlw_SetPixelColor(void *dstPtr, Color color, int format) {
    rlw::SetPixelColor(dstPtr, color, format);
}

int rlw_GetPixelDataSize(int width, int height, int format) {
    return rlw::GetPixelDataSize(width, height, format);
}

Font rlw_GetFontDefault(void) {
    return rlw::GetFontDefault();
}

Font rlw_LoadFont(const char *fileName) {
    return rlw::LoadFont(fileName);
}

Font rlw_LoadFontEx(const char *fileName, int fontSize, int *codepoints, int codepointCount) {
    return rlw::LoadFontEx(fileName, fontSize, codepoints, codepointCount);
}

Font rlw_LoadFontFromImage(Image image, Color key, int firstChar) {
    return rlw::LoadFontFromImage(image, key, firstChar);
}

Font rlw_LoadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *codepoints, int codepointCount) {
    return rlw::LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount);
}

bool rlw_IsFontValid(Font font) {
    return rlw::IsFontValid(font);
}

Image rlw_GenImageFontAtlas(const GlyphInfo *glyphs, Rectangle **glyphRecs, int glyphCount, int fontSize, int padding, int packMethod) {
    return rlw::GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod);
}

void rlw_UnloadFontData(GlyphInfo *glyphs, int glyphCount) {
    rlw::UnloadFontData(glyphs, glyphCount);
}

void rlw_UnloadFont(Font font) {
    rlw::UnloadFont(font);
}

bool rlw_ExportFontAsCode(Font font, const char *fileName) {
    return rlw::ExportFontAsCode(font, fileName);
}

void rlw_DrawFPS(int posX, int posY) {
    rlw::DrawFPS(posX, posY);
}

void rlw_DrawText(const char *text, int posX, int posY, int fontSize, Color color) {
    rlw::DrawText(text, posX, posY, fontSize, color);
}

void rlw_DrawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint) {
    rlw::DrawTextEx(font, text, position, fontSize, spacing, tint);
}

void rlw_DrawTextPro(Font font, const char *text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint) {
    rlw::DrawTextPro(font, text, position, origin, rotation, fontSize, spacing, tint);
}

void rlw_DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint) {
    rlw::DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

void rlw_DrawTextCodepoints(Font font, const int *codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint) {
    rlw::DrawTextCodepoints(font, codepoints, codepointCount, position, fontSize, spacing, tint);
}

void rlw_SetTextLineSpacing(int spacing) {
    rlw::SetTextLineSpacing(spacing);
}

int rlw_MeasureText(const char *text, int fontSize) {
    return rlw::MeasureText(text, fontSize);
}

Vector2 rlw_MeasureTextEx(Font font, const char *text, float fontSize, float spacing) {
    return rlw::MeasureTextEx(font, text, fontSize, spacing);
}

int rlw_GetGlyphIndex(Font font, int codepoint) {
    return rlw::GetGlyphIndex(font, codepoint);
}

GlyphInfo rlw_GetGlyphInfo(Font font, int codepoint) {
    return rlw::GetGlyphInfo(font, codepoint);
}

Rectangle rlw_GetGlyphAtlasRec(Font font, int codepoint) {
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

void rlw_DrawLine3D(Vector3 startPos, Vector3 endPos, Color color) {
    rlw::DrawLine3D(startPos, endPos, color);
}

void rlw_DrawPoint3D(Vector3 position, Color color) {
    rlw::DrawPoint3D(position, color);
}

void rlw_DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    rlw::DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

void rlw_DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color) {
    rlw::DrawTriangle3D(v1, v2, v3, color);
}

void rlw_DrawTriangleStrip3D(Vector3 *points, int pointCount, Color color) {
    rlw::DrawTriangleStrip3D(points, pointCount, color);
}

void rlw_DrawCube(Vector3 position, float width, float height, float length, Color color) {
    rlw::DrawCube(position, width, height, length, color);
}

void rlw_DrawCubeV(Vector3 position, Vector3 size, Color color) {
    rlw::DrawCubeV(position, size, color);
}

void rlw_DrawCubeWires(Vector3 position, float width, float height, float length, Color color) {
    rlw::DrawCubeWires(position, width, height, length, color);
}

void rlw_DrawCubeWiresV(Vector3 position, Vector3 size, Color color) {
    rlw::DrawCubeWiresV(position, size, color);
}

void rlw_DrawSphere(Vector3 centerPos, float radius, Color color) {
    rlw::DrawSphere(centerPos, radius, color);
}

void rlw_DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color) {
    rlw::DrawSphereEx(centerPos, radius, rings, slices, color);
}

void rlw_DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color) {
    rlw::DrawSphereWires(centerPos, radius, rings, slices, color);
}

void rlw_DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color) {
    rlw::DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

void rlw_DrawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color) {
    rlw::DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void rlw_DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color) {
    rlw::DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

void rlw_DrawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color) {
    rlw::DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color);
}

void rlw_DrawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color) {
    rlw::DrawCapsule(startPos, endPos, radius, slices, rings, color);
}

void rlw_DrawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color) {
    rlw::DrawCapsuleWires(startPos, endPos, radius, slices, rings, color);
}

void rlw_DrawPlane(Vector3 centerPos, Vector2 size, Color color) {
    rlw::DrawPlane(centerPos, size, color);
}

void rlw_DrawRay(Ray ray, Color color) {
    rlw::DrawRay(ray, color);
}

void rlw_DrawGrid(int slices, float spacing) {
    rlw::DrawGrid(slices, spacing);
}

Model rlw_LoadModel(const char *fileName) {
    return rlw::LoadModel(fileName);
}

Model rlw_LoadModelFromMesh(Mesh mesh) {
    return rlw::LoadModelFromMesh(mesh);
}

bool rlw_IsModelValid(Model model) {
    return rlw::IsModelValid(model);
}

void rlw_UnloadModel(Model model) {
    rlw::UnloadModel(model);
}

BoundingBox rlw_GetModelBoundingBox(Model model) {
    return rlw::GetModelBoundingBox(model);
}

void rlw_DrawModel(Model model, Vector3 position, float scale, Color tint) {
    rlw::DrawModel(model, position, scale, tint);
}

void rlw_DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint) {
    rlw::DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void rlw_DrawModelWires(Model model, Vector3 position, float scale, Color tint) {
    rlw::DrawModelWires(model, position, scale, tint);
}

void rlw_DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint) {
    rlw::DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

void rlw_DrawBoundingBox(BoundingBox box, Color color) {
    rlw::DrawBoundingBox(box, color);
}

void rlw_DrawBillboard(Camera camera, Texture2D texture, Vector3 position, float size, Color tint) {
    rlw::DrawBillboard(camera, texture, position, size, tint);
}

void rlw_DrawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint) {
    rlw::DrawBillboardRec(camera, texture, source, position, size, tint);
}

void rlw_DrawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint) {
    rlw::DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint);
}

void rlw_UploadMesh(Mesh *mesh, bool dynamic) {
    rlw::UploadMesh(mesh, dynamic);
}

void rlw_UpdateMeshBuffer(Mesh mesh, int index, const void *data, int dataSize, int offset) {
    rlw::UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

void rlw_UnloadMesh(Mesh mesh) {
    rlw::UnloadMesh(mesh);
}

void rlw_DrawMesh(Mesh mesh, Material material, Matrix transform) {
    rlw::DrawMesh(mesh, material, transform);
}

void rlw_DrawMeshInstanced(Mesh mesh, Material material, const Matrix *transforms, int instances) {
    rlw::DrawMeshInstanced(mesh, material, transforms, instances);
}

bool rlw_ExportMesh(Mesh mesh, const char *fileName) {
    return rlw::ExportMesh(mesh, fileName);
}

BoundingBox rlw_GetMeshBoundingBox(Mesh mesh) {
    return rlw::GetMeshBoundingBox(mesh);
}

void rlw_GenMeshTangents(Mesh *mesh) {
    rlw::GenMeshTangents(mesh);
}

Mesh rlw_GenMeshPoly(int sides, float radius) {
    return rlw::GenMeshPoly(sides, radius);
}

Mesh rlw_GenMeshPlane(float width, float length, int resX, int resZ) {
    return rlw::GenMeshPlane(width, length, resX, resZ);
}

Mesh rlw_GenMeshCube(float width, float height, float length) {
    return rlw::GenMeshCube(width, height, length);
}

Mesh rlw_GenMeshSphere(float radius, int rings, int slices) {
    return rlw::GenMeshSphere(radius, rings, slices);
}

Mesh rlw_GenMeshHemiSphere(float radius, int rings, int slices) {
    return rlw::GenMeshHemiSphere(radius, rings, slices);
}

Mesh rlw_GenMeshCylinder(float radius, float height, int slices) {
    return rlw::GenMeshCylinder(radius, height, slices);
}

Mesh rlw_GenMeshCone(float radius, float height, int slices) {
    return rlw::GenMeshCone(radius, height, slices);
}

Mesh rlw_GenMeshTorus(float radius, float size, int radSeg, int sides) {
    return rlw::GenMeshTorus(radius, size, radSeg, sides);
}

Mesh rlw_GenMeshKnot(float radius, float size, int radSeg, int sides) {
    return rlw::GenMeshKnot(radius, size, radSeg, sides);
}

Mesh rlw_GenMeshHeightmap(Image heightmap, Vector3 size) {
    return rlw::GenMeshHeightmap(heightmap, size);
}

Mesh rlw_GenMeshCubicmap(Image cubicmap, Vector3 cubeSize) {
    return rlw::GenMeshCubicmap(cubicmap, cubeSize);
}

Material rlw_LoadMaterialDefault(void) {
    return rlw::LoadMaterialDefault();
}

bool rlw_IsMaterialValid(Material material) {
    return rlw::IsMaterialValid(material);
}

void rlw_UnloadMaterial(Material material) {
    rlw::UnloadMaterial(material);
}

void rlw_SetMaterialTexture(Material *material, int mapType, Texture2D texture) {
    rlw::SetMaterialTexture(material, mapType, texture);
}

void rlw_SetModelMeshMaterial(Model *model, int meshId, int materialId) {
    rlw::SetModelMeshMaterial(model, meshId, materialId);
}

void rlw_UpdateModelAnimation(Model model, ModelAnimation anim, int frame) {
    rlw::UpdateModelAnimation(model, anim, frame);
}

void rlw_UnloadModelAnimation(ModelAnimation anim) {
    rlw::UnloadModelAnimation(anim);
}

void rlw_UnloadModelAnimations(ModelAnimation *animations, int animCount) {
    rlw::UnloadModelAnimations(animations, animCount);
}

bool rlw_IsModelAnimationValid(Model model, ModelAnimation anim) {
    return rlw::IsModelAnimationValid(model, anim);
}

bool rlw_CheckCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2) {
    return rlw::CheckCollisionSpheres(center1, radius1, center2, radius2);
}

bool rlw_CheckCollisionBoxes(BoundingBox box1, BoundingBox box2) {
    return rlw::CheckCollisionBoxes(box1, box2);
}

bool rlw_CheckCollisionBoxSphere(BoundingBox box, Vector3 center, float radius) {
    return rlw::CheckCollisionBoxSphere(box, center, radius);
}

RayCollision rlw_GetRayCollisionSphere(Ray ray, Vector3 center, float radius) {
    return rlw::GetRayCollisionSphere(ray, center, radius);
}

RayCollision rlw_GetRayCollisionBox(Ray ray, BoundingBox box) {
    return rlw::GetRayCollisionBox(ray, box);
}

RayCollision rlw_GetRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform) {
    return rlw::GetRayCollisionMesh(ray, mesh, transform);
}

RayCollision rlw_GetRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3) {
    return rlw::GetRayCollisionTriangle(ray, p1, p2, p3);
}

RayCollision rlw_GetRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4) {
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

Wave rlw_LoadWave(const char *fileName) {
    return rlw::LoadWave(fileName);
}

Wave rlw_LoadWaveFromMemory(const char *fileType, const unsigned char *fileData, int dataSize) {
    return rlw::LoadWaveFromMemory(fileType, fileData, dataSize);
}

bool rlw_IsWaveValid(Wave wave) {
    return rlw::IsWaveValid(wave);
}

Sound rlw_LoadSound(const char *fileName) {
    return rlw::LoadSound(fileName);
}

Sound rlw_LoadSoundFromWave(Wave wave) {
    return rlw::LoadSoundFromWave(wave);
}

Sound rlw_LoadSoundAlias(Sound source) {
    return rlw::LoadSoundAlias(source);
}

bool rlw_IsSoundValid(Sound sound) {
    return rlw::IsSoundValid(sound);
}

void rlw_UpdateSound(Sound sound, const void *data, int sampleCount) {
    rlw::UpdateSound(sound, data, sampleCount);
}

void rlw_UnloadWave(Wave wave) {
    rlw::UnloadWave(wave);
}

void rlw_UnloadSound(Sound sound) {
    rlw::UnloadSound(sound);
}

void rlw_UnloadSoundAlias(Sound alias) {
    rlw::UnloadSoundAlias(alias);
}

bool rlw_ExportWave(Wave wave, const char *fileName) {
    return rlw::ExportWave(wave, fileName);
}

bool rlw_ExportWaveAsCode(Wave wave, const char *fileName) {
    return rlw::ExportWaveAsCode(wave, fileName);
}

void rlw_PlaySound(Sound sound) {
    rlw::PlaySound(sound);
}

void rlw_StopSound(Sound sound) {
    rlw::StopSound(sound);
}

void rlw_PauseSound(Sound sound) {
    rlw::PauseSound(sound);
}

void rlw_ResumeSound(Sound sound) {
    rlw::ResumeSound(sound);
}

bool rlw_IsSoundPlaying(Sound sound) {
    return rlw::IsSoundPlaying(sound);
}

void rlw_SetSoundVolume(Sound sound, float volume) {
    rlw::SetSoundVolume(sound, volume);
}

void rlw_SetSoundPitch(Sound sound, float pitch) {
    rlw::SetSoundPitch(sound, pitch);
}

void rlw_SetSoundPan(Sound sound, float pan) {
    rlw::SetSoundPan(sound, pan);
}

Wave rlw_WaveCopy(Wave wave) {
    return rlw::WaveCopy(wave);
}

void rlw_WaveCrop(Wave *wave, int initSample, int finalSample) {
    rlw::WaveCrop(wave, initSample, finalSample);
}

void rlw_WaveFormat(Wave *wave, int sampleRate, int sampleSize, int channels) {
    rlw::WaveFormat(wave, sampleRate, sampleSize, channels);
}

void rlw_UnloadWaveSamples(float *samples) {
    rlw::UnloadWaveSamples(samples);
}

Music rlw_LoadMusicStream(const char *fileName) {
    return rlw::LoadMusicStream(fileName);
}

Music rlw_LoadMusicStreamFromMemory(const char *fileType, const unsigned char *data, int dataSize) {
    return rlw::LoadMusicStreamFromMemory(fileType, data, dataSize);
}

bool rlw_IsMusicValid(Music music) {
    return rlw::IsMusicValid(music);
}

void rlw_UnloadMusicStream(Music music) {
    rlw::UnloadMusicStream(music);
}

void rlw_PlayMusicStream(Music music) {
    rlw::PlayMusicStream(music);
}

bool rlw_IsMusicStreamPlaying(Music music) {
    return rlw::IsMusicStreamPlaying(music);
}

void rlw_UpdateMusicStream(Music music) {
    rlw::UpdateMusicStream(music);
}

void rlw_StopMusicStream(Music music) {
    rlw::StopMusicStream(music);
}

void rlw_PauseMusicStream(Music music) {
    rlw::PauseMusicStream(music);
}

void rlw_ResumeMusicStream(Music music) {
    rlw::ResumeMusicStream(music);
}

void rlw_SeekMusicStream(Music music, float position) {
    rlw::SeekMusicStream(music, position);
}

void rlw_SetMusicVolume(Music music, float volume) {
    rlw::SetMusicVolume(music, volume);
}

void rlw_SetMusicPitch(Music music, float pitch) {
    rlw::SetMusicPitch(music, pitch);
}

void rlw_SetMusicPan(Music music, float pan) {
    rlw::SetMusicPan(music, pan);
}

float rlw_GetMusicTimeLength(Music music) {
    return rlw::GetMusicTimeLength(music);
}

float rlw_GetMusicTimePlayed(Music music) {
    return rlw::GetMusicTimePlayed(music);
}

AudioStream rlw_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
    return rlw::LoadAudioStream(sampleRate, sampleSize, channels);
}

bool rlw_IsAudioStreamValid(AudioStream stream) {
    return rlw::IsAudioStreamValid(stream);
}

void rlw_UnloadAudioStream(AudioStream stream) {
    rlw::UnloadAudioStream(stream);
}

void rlw_UpdateAudioStream(AudioStream stream, const void *data, int frameCount) {
    rlw::UpdateAudioStream(stream, data, frameCount);
}

bool rlw_IsAudioStreamProcessed(AudioStream stream) {
    return rlw::IsAudioStreamProcessed(stream);
}

void rlw_PlayAudioStream(AudioStream stream) {
    rlw::PlayAudioStream(stream);
}

void rlw_PauseAudioStream(AudioStream stream) {
    rlw::PauseAudioStream(stream);
}

void rlw_ResumeAudioStream(AudioStream stream) {
    rlw::ResumeAudioStream(stream);
}

bool rlw_IsAudioStreamPlaying(AudioStream stream) {
    return rlw::IsAudioStreamPlaying(stream);
}

void rlw_StopAudioStream(AudioStream stream) {
    rlw::StopAudioStream(stream);
}

void rlw_SetAudioStreamVolume(AudioStream stream, float volume) {
    rlw::SetAudioStreamVolume(stream, volume);
}

void rlw_SetAudioStreamPitch(AudioStream stream, float pitch) {
    rlw::SetAudioStreamPitch(stream, pitch);
}

void rlw_SetAudioStreamPan(AudioStream stream, float pan) {
    rlw::SetAudioStreamPan(stream, pan);
}

void rlw_SetAudioStreamBufferSizeDefault(int size) {
    rlw::SetAudioStreamBufferSizeDefault(size);
}

void rlw_SetAudioStreamCallback(AudioStream stream, AudioCallback callback) {
    rlw::SetAudioStreamCallback(stream, callback);
}

void rlw_AttachAudioStreamProcessor(AudioStream stream, AudioCallback processor) {
    rlw::AttachAudioStreamProcessor(stream, processor);
}

void rlw_DetachAudioStreamProcessor(AudioStream stream, AudioCallback processor) {
    rlw::DetachAudioStreamProcessor(stream, processor);
}

void rlw_AttachAudioMixedProcessor(AudioCallback processor) {
    rlw::AttachAudioMixedProcessor(processor);
}

void rlw_DetachAudioMixedProcessor(AudioCallback processor) {
    rlw::DetachAudioMixedProcessor(processor);
}

} // extern "C"