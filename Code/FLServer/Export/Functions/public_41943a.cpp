#include "FLServer-PCH.h"

PROC_DECLARE(0x41943a, internal_41943a, public_41943a);
extern "C" NAKED register_t __cdecl internal_41943a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b97c]
        UNREACHABLE_TRAP(0x41943a)
    }
}
