#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4be650, internal_4be650, public_4be650);
extern "C" NAKED register_t __cdecl internal_4be650()
{
    __asm
    {
        mov word ptr ds : [public_672488], 4
        mov byte ptr ds : [public_67248a], 1
        ret 
        UNREACHABLE_TRAP(0x4be650)
    }
}
