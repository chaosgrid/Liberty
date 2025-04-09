#include "FreeLancer-PCH.h"

PROC_DECLARE(0x474b50, internal_474b50, public_474b50);
extern "C" NAKED register_t __cdecl internal_474b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d09bc]
        mov dword ptr ds : [public_66dc44], eax
        ret 
        UNREACHABLE_TRAP(0x474b50)
    }
}
