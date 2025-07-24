#include "pch.h"
#include "SoundDll.h"
#pragma comment(lib, "winmm.lib")

void play_alarm(const wchar_t* audPath) {
    PlaySound(audPath, NULL, SND_FILENAME | SND_ASYNC);
}