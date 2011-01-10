#ifndef SOFA_PLUGIN_CONTINUOUSCONTACT_H
#define SOFA_PLUGIN_CONTINUOUSCONTACT_H

#ifndef WIN32
#define SOFA_EXPORT_DYNAMIC_LIBRARY
#define SOFA_IMPORT_DYNAMIC_LIBRARY
#define SOFA_CONTINUOUSCONTACT_API
#else
#ifdef SOFA_BUILD_CONTINUOUSCONTACT
#define SOFA_EXPORT_DYNAMIC_LIBRARY __declspec( dllexport )
#define SOFA_CONTINUOUSCONTACT_API SOFA_EXPORT_DYNAMIC_LIBRARY
#else
#define SOFA_IMPORT_DYNAMIC_LIBRARY __declspec( dllimport )
#define SOFA_CONTINUOUSCONTACT_API SOFA_IMPORT_DYNAMIC_LIBRARY
#endif
#endif

#endif // SOFA_PLUGIN_CONTINUOUSCONTACT_H
