#include "FLServer-PCH.h"

PROC_DECLARE(0x41987a, internal_41987a, public_41987a);
extern "C" NAKED register_t __cdecl internal_41987a()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc2c]
        UNREACHABLE_TRAP(0x41987a)
    }
}
