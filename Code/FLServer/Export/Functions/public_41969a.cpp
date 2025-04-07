#include "FLServer-PCH.h"

PROC_DECLARE(0x41969a, internal_41969a, public_41969a);
extern "C" NAKED register_t __cdecl internal_41969a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1bc]
        UNREACHABLE_TRAP(0x41969a)
    }
}
