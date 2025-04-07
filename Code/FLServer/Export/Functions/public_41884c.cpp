#include "FLServer-PCH.h"

PROC_DECLARE(0x41884c, internal_41884c, public_41884c);
extern "C" NAKED register_t __cdecl internal_41884c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9e0]
        UNREACHABLE_TRAP(0x41884c)
    }
}
