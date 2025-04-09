#include "FreeLancer-PCH.h"

PROC_DECLARE(0x446bd0, internal_446bd0, public_446bd0);
extern "C" NAKED register_t __cdecl internal_446bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbd70]
        mov dword ptr ds : [public_668a8c], eax
        ret 
        UNREACHABLE_TRAP(0x446bd0)
    }
}
