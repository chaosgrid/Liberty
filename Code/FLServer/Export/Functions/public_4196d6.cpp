#include "FLServer-PCH.h"

PROC_DECLARE(0x4196d6, internal_4196d6, public_4196d6);
extern "C" NAKED register_t __cdecl internal_4196d6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b194]
        UNREACHABLE_TRAP(0x4196d6)
    }
}
