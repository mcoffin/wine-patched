#ifndef __WINE_NTOSKRNL_PRIVATE_H
#define __WINE_NTOSKRNL_PRIVATE_H

#include "winbase.h"

typedef struct _EPROCESS_INTERNAL {
    DWORD ProcessID;
} EPROCESS_INTERNAL;

typedef struct _KEVENT_INTERNAL {
    HANDLE EventHandle;
} KEVENT_INTERNAL, *PKEVENT_INTERNAL;

#endif /* __WINE_NTOSKRNL_PRIVATE_H */
