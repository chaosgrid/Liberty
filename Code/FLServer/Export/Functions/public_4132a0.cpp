#include "FLServer-PCH.h"

PROC_DECLARE(0x4132a0, internal_4132a0, public_4132a0);
extern "C" NAKED register_t __cdecl internal_4132a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e06c]
        mov dword ptr ds : [public_428c50], eax
        ret 
        UNREACHABLE_TRAP(0x4132a0)
    }
}
