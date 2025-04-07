#include "Freelancer-PCH.h"

PROC_DECLARE(0x575d50, internal_575d50, public_575d50);
extern "C" NAKED register_t __cdecl internal_575d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e426c]
        mov dword ptr ds : [public_67c294], eax
        ret 
        UNREACHABLE_TRAP(0x575d50)
    }
}
