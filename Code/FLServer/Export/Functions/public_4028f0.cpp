#include "FLServer-PCH.h"

PROC_DECLARE(0x4028f0, internal_4028f0, public_4028f0);
extern "C" NAKED register_t __cdecl internal_4028f0()
{
    __asm
    {
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x4028f0)
    }
}
