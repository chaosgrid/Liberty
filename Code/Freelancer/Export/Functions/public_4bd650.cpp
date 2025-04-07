#include "Freelancer-PCH.h"

PROC_DECLARE(0x4bd650, internal_4bd650, public_4bd650);
extern "C" NAKED register_t __cdecl internal_4bd650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d5f6c]
        mov dword ptr ds : [public_672440], eax
        ret 
        UNREACHABLE_TRAP(0x4bd650)
    }
}
