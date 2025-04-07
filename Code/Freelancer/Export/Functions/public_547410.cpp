#include "Freelancer-PCH.h"

PROC_DECLARE(0x547410, internal_547410, public_547410);
extern "C" NAKED register_t __cdecl internal_547410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e000c]
        mov dword ptr ds : [public_678b74], eax
        ret 
        UNREACHABLE_TRAP(0x547410)
    }
}
