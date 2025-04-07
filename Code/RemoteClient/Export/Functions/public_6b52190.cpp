#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52190, internal_6b52190, public_6b52190);
extern "C" NAKED register_t __cdecl internal_6b52190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3a8]
        mov dword ptr ds : [public_6b73f5c], eax
        ret 
        UNREACHABLE_TRAP(0x6b52190)
    }
}
