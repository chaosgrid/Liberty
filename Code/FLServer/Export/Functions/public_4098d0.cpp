#include "FLServer-PCH.h"

PROC_DECLARE(0x4098d0, internal_4098d0, public_4098d0);
extern "C" NAKED register_t __cdecl internal_4098d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cdac]
        mov dword ptr ds : [public_4277dc], eax
        ret 
        UNREACHABLE_TRAP(0x4098d0)
    }
}
