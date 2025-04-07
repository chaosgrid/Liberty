#include "DALib-PCH.h"

PROC_DECLARE(0x65c2c40, internal_65c2c40, public_65c2c40);
extern "C" NAKED register_t __cdecl internal_65c2c40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca1b8]
        cmp eax, dword ptr ds : [public_65ca1b4]
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x65c2c40)
    }
}
