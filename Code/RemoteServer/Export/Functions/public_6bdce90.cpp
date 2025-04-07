#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bdce90, internal_6bdce90, public_6bdce90);
extern "C" NAKED register_t __cdecl internal_6bdce90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bb90]
        mov dword ptr ds : [public_6c13ac8], eax
        ret 
        UNREACHABLE_TRAP(0x6bdce90)
    }
}
