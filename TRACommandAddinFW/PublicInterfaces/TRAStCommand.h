#ifdef  _WINDOWS_SOURCE
#ifdef  __TRAStCommand
#define ExportedByTRAStCommand     __declspec(dllexport)
#else
#define ExportedByTRAStCommand     __declspec(dllimport)
#endif
#else
#define ExportedByTRAStCommand
#endif
