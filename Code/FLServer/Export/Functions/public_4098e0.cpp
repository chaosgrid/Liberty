#include "FLServer-PCH.h"

PROC_DECLARE(0x4098e0, internal_4098e0, public_4098e0);
extern "C" NAKED register_t __cdecl internal_4098e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cdac]
        mov dword ptr ds : [public_4277e8], eax
        ret 
        UNREACHABLE_TRAP(0x4098e0)
    }
}
