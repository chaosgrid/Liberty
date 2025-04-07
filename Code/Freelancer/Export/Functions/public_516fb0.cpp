#include "Freelancer-PCH.h"

PROC_DECLARE(0x516fb0, internal_516fb0, public_516fb0);
extern "C" NAKED register_t __cdecl internal_516fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db928]
        mov dword ptr ds : [public_67521c], eax
        ret 
        UNREACHABLE_TRAP(0x516fb0)
    }
}
