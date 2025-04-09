#include "Freelancer-PCH.h"

PROC_DECLARE(0x589ae0, internal_589ae0, public_589ae0);
extern "C" NAKED register_t __cdecl internal_589ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4f04]
        mov dword ptr ds : [public_67d8b8], eax
        ret 
        UNREACHABLE_TRAP(0x589ae0)
    }
}
