#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b34f0, internal_5b34f0, public_5b34f0);
extern "C" NAKED register_t __cdecl internal_5b34f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6df4]
        mov dword ptr ds : [public_67ed30], eax
        ret 
        UNREACHABLE_TRAP(0x5b34f0)
    }
}
