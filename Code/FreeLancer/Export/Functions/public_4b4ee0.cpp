#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b4ee0, internal_4b4ee0, public_4b4ee0);
extern "C" NAKED register_t __cdecl internal_4b4ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d5438]
        mov dword ptr ds : [public_672280], eax
        ret 
        UNREACHABLE_TRAP(0x4b4ee0)
    }
}
