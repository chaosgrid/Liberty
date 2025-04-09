#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4a60e0, internal_4a60e0, public_4a60e0);
extern "C" NAKED register_t __cdecl internal_4a60e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d441c]
        mov dword ptr ds : [public_672134], eax
        ret 
        UNREACHABLE_TRAP(0x4a60e0)
    }
}
