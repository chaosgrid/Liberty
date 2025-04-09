#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b2b80, internal_4b2b80, public_4b2b80);
extern "C" NAKED register_t __cdecl internal_4b2b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d51a8]
        mov dword ptr ds : [public_672240], eax
        ret 
        UNREACHABLE_TRAP(0x4b2b80)
    }
}
