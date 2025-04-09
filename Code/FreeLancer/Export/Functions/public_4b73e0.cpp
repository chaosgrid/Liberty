#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b73e0, internal_4b73e0, public_4b73e0);
extern "C" NAKED register_t __cdecl internal_4b73e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d56e0]
        mov dword ptr ds : [public_672304], eax
        ret 
        UNREACHABLE_TRAP(0x4b73e0)
    }
}
