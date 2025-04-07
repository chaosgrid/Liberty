#include "FLServer-PCH.h"

PROC_DECLARE(0x4196ac, internal_4196ac, public_4196ac);
extern "C" NAKED register_t __cdecl internal_4196ac()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1b0]
        UNREACHABLE_TRAP(0x4196ac)
    }
}
