#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c3ce0, internal_4c3ce0, public_4c3ce0);
extern "C" NAKED register_t __cdecl internal_4c3ce0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_672918], eax
        mov dword ptr ds : [public_67291c], eax
        mov dword ptr ds : [public_672920], eax
        mov dword ptr ds : [public_672924], eax
        mov dword ptr ds : [public_672948], eax
        ret 
        UNREACHABLE_TRAP(0x4c3ce0)
    }
}
