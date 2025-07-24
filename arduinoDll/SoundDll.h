#pragma once

#ifdef SoundDll_EXPORTS
#define SoundDll_API __declspec(dllexport)
#else
#define SoundDll_API __declspec(dllimport)
#endif

extern "C" {
    SoundDll_API void play_alarm(const wchar_t* audPath);
}