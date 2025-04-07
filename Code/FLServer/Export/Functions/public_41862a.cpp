#include "FLServer-PCH.h"

PROC_DECLARE(0x41862a, internal_41862a, public_41862a);
extern "C" NAKED register_t __cdecl internal_41862a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b088]
        UNREACHABLE_TRAP(0x41862a)
    }
}
