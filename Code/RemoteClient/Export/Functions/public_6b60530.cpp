#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60530, internal_6b60530, public_6b60530);
extern "C" NAKED register_t __cdecl internal_6b60530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7dc]
        mov dword ptr ds : [public_6b74380], eax
        ret 
        UNREACHABLE_TRAP(0x6b60530)
    }
}
