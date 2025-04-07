#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a6ab0, internal_4a6ab0, public_4a6ab0);
extern "C" NAKED register_t __cdecl internal_4a6ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d4604]
        mov dword ptr ds : [public_672174], eax
        ret 
        UNREACHABLE_TRAP(0x4a6ab0)
    }
}
