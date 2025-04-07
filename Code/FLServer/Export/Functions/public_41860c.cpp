#include "FLServer-PCH.h"

PROC_DECLARE(0x41860c, internal_41860c, public_41860c);
extern "C" NAKED register_t __cdecl internal_41860c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b018]
        UNREACHABLE_TRAP(0x41860c)
    }
}
