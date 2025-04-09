#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4be5a0, internal_4be5a0, public_4be5a0);
extern "C" NAKED register_t __cdecl internal_4be5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6014]
        mov dword ptr ds : [public_6724a4], eax
        ret 
        UNREACHABLE_TRAP(0x4be5a0)
    }
}
