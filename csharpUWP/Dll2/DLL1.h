#ifndef __DLL1_H__
#define __DLL1_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#ifdef SDK1_EXPORTS
#define SDK1_API __declspec(dllexport)
#else // SDK1_EXPORTS
#define SDK1_API __declspec(dllimport)
#endif // SDK1_EXPORTS
#else
#define SDK1_API
#endif // #ifdef _WIN32
	SDK1_API void DLL1Init();

#ifdef __cplusplus
}
#endif

#endif //
