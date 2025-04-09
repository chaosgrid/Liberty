#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548da0, internal_548da0, public_548da0);
extern "C" NAKED register_t __cdecl internal_548da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0534]
        mov dword ptr ds : [public_67976c], eax
        ret 
        UNREACHABLE_TRAP(0x548da0)
    }
}
