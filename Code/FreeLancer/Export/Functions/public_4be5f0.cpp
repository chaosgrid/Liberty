#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4be5f0, internal_4be5f0, public_4be5f0);
extern "C" NAKED register_t __cdecl internal_4be5f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_672494], ax
        mov byte ptr ds : [public_672496], al
        ret 
        UNREACHABLE_TRAP(0x4be5f0)
    }
}
