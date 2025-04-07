#include "FLServer-PCH.h"

PROC_DECLARE(0x41883a, internal_41883a, public_41883a);
extern "C" NAKED register_t __cdecl internal_41883a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9d4]
        UNREACHABLE_TRAP(0x41883a)
    }
}
