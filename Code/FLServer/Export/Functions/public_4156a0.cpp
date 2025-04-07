#include "FLServer-PCH.h"

PROC_DECLARE(0x4156a0, internal_4156a0, public_4156a0);
extern "C" NAKED register_t __cdecl internal_4156a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e3c0]
        mov dword ptr ds : [public_429508], eax
        ret 
        UNREACHABLE_TRAP(0x4156a0)
    }
}
