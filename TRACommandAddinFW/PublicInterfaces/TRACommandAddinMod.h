#ifdef  _WINDOWS_SOURCE
#ifdef  __TRACommandAddinMod
#define ExportedByTRACommandAddinMod     __declspec(dllexport)
#else
#define ExportedByTRACommandAddinMod     __declspec(dllimport)
#endif
#else
#define ExportedByTRACommandAddinMod
#endif
