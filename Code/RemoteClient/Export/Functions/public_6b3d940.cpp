#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d940, internal_6b3d940, public_6b3d940);
extern "C" NAKED register_t __cdecl internal_6b3d940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0d8]
        mov dword ptr ds : [public_6b73e04], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d940)
    }
}
