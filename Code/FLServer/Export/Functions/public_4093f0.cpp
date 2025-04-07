#include "FLServer-PCH.h"

PROC_DECLARE(0x4093f0, internal_4093f0, public_4093f0);
extern "C" NAKED register_t __cdecl internal_4093f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x4093f0)
    }
}
