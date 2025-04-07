#include "Freelancer-PCH.h"

PROC_DECLARE(0x4be5d0, internal_4be5d0, public_4be5d0);
extern "C" NAKED register_t __cdecl internal_4be5d0()
{
    __asm
    {
        mov word ptr ds : [public_672498], 0
        mov byte ptr ds : [public_67249a], 1
        ret 
        UNREACHABLE_TRAP(0x4be5d0)
    }
}
