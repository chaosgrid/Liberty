#include "FreeLancer-PCH.h"

PROC_DECLARE(0x446bc0, internal_446bc0, public_446bc0);
extern "C" NAKED register_t __cdecl internal_446bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbd6c]
        mov dword ptr ds : [public_668a90], eax
        ret 
        UNREACHABLE_TRAP(0x446bc0)
    }
}
