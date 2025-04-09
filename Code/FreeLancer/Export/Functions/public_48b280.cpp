#include "FreeLancer-PCH.h"

PROC_DECLARE(0x48b280, internal_48b280, public_48b280);
extern "C" NAKED register_t __cdecl internal_48b280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2694]
        mov dword ptr ds : [public_672030], eax
        ret 
        UNREACHABLE_TRAP(0x48b280)
    }
}
