#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4a9240, internal_4a9240, public_4a9240);
extern "C" NAKED register_t __cdecl internal_4a9240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d49e0]
        mov dword ptr ds : [public_672204], eax
        ret 
        UNREACHABLE_TRAP(0x4a9240)
    }
}
