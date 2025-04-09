#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8110);

PROC_DECLARE(0x4c8110, internal_4c8110, public_4c8110);
extern "C" NAKED register_t __cdecl internal_4c8110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_612274]
        and eax, dword ptr ss : [esp+4]
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x4c8110)
    }
}
