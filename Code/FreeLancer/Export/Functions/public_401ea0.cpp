#include "Freelancer-PCH.h"

PROC_DECLARE(0x401ea0, internal_401ea0, public_401ea0);
extern "C" NAKED register_t __cdecl internal_401ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7404]
        mov dword ptr ds : [public_61646c], eax
        ret 
        UNREACHABLE_TRAP(0x401ea0)
    }
}
