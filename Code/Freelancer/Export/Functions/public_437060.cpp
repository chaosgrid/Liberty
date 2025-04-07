#include "Freelancer-PCH.h"

PROC_DECLARE(0x437060, internal_437060, public_437060);
extern "C" NAKED register_t __cdecl internal_437060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cae10]
        mov dword ptr ds : [public_6686c8], eax
        ret 
        UNREACHABLE_TRAP(0x437060)
    }
}
