#include "Freelancer-PCH.h"

PROC_DECLARE(0x50c230, internal_50c230, public_50c230);
extern "C" NAKED register_t __cdecl internal_50c230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db350]
        mov dword ptr ds : [public_67508c], eax
        ret 
        UNREACHABLE_TRAP(0x50c230)
    }
}
