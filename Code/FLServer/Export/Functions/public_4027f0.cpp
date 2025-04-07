#include "FLServer-PCH.h"

PROC_DECLARE(0x4027f0, internal_4027f0, public_4027f0);
extern "C" NAKED register_t __cdecl internal_4027f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c194]
        mov dword ptr ds : [public_425f7c], eax
        ret 
        UNREACHABLE_TRAP(0x4027f0)
    }
}
