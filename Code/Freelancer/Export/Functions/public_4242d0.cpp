#include "Freelancer-PCH.h"

PROC_DECLARE(0x4242d0, internal_4242d0, public_4242d0);
extern "C" NAKED register_t __cdecl internal_4242d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c980c]
        mov dword ptr ds : [public_6679e0], eax
        ret 
        UNREACHABLE_TRAP(0x4242d0)
    }
}
