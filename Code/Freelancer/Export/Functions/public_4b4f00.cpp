#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b4f00, internal_4b4f00, public_4b4f00);
extern "C" NAKED register_t __cdecl internal_4b4f00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d543c]
        mov dword ptr ds : [public_672278], eax
        ret 
        UNREACHABLE_TRAP(0x4b4f00)
    }
}
