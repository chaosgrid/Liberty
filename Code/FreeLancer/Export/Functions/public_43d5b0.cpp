#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d5b0, internal_43d5b0, public_43d5b0);
extern "C" NAKED register_t __cdecl internal_43d5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb4c4]
        mov dword ptr ds : [public_668820], eax
        ret 
        UNREACHABLE_TRAP(0x43d5b0)
    }
}
