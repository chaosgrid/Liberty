#include "FLServer-PCH.h"

PROC_DECLARE(0x41872c, internal_41872c, public_41872c);
extern "C" NAKED register_t __cdecl internal_41872c()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba84]
        UNREACHABLE_TRAP(0x41872c)
    }
}
