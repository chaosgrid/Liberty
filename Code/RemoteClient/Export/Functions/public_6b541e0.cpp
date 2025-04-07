#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b541e0, internal_6b541e0, public_6b541e0);
extern "C" NAKED register_t __cdecl internal_6b541e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e420]
        mov dword ptr ds : [public_6b73ffc], eax
        ret 
        UNREACHABLE_TRAP(0x6b541e0)
    }
}
