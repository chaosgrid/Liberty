#include "FLServer-PCH.h"

PROC_DECLARE(0x413bd0, internal_413bd0, public_413bd0);
extern "C" NAKED register_t __cdecl internal_413bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x413bd0)
    }
}
