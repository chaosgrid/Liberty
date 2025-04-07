#include "FLServer-PCH.h"

PROC_DECLARE(0x4196be, internal_4196be, public_4196be);
extern "C" NAKED register_t __cdecl internal_4196be()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1a4]
        UNREACHABLE_TRAP(0x4196be)
    }
}
