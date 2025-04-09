#include "Freelancer-PCH.h"

PROC_DECLARE(0x4242c0, internal_4242c0, public_4242c0);
extern "C" NAKED register_t __cdecl internal_4242c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9808]
        mov dword ptr ds : [public_6679e4], eax
        ret 
        UNREACHABLE_TRAP(0x4242c0)
    }
}
