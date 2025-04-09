#include "Freelancer-PCH.h"

PROC_DECLARE(0x4be610, internal_4be610, public_4be610);
extern "C" NAKED register_t __cdecl internal_4be610()
{
    __asm
    {
        mov word ptr ds : [public_672490], 2
        mov byte ptr ds : [public_672492], 1
        ret 
        UNREACHABLE_TRAP(0x4be610)
    }
}
