#include "FLServer-PCH.h"

PROC_DECLARE(0x41908c, internal_41908c, public_41908c);
extern "C" NAKED register_t __cdecl internal_41908c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7c4]
        UNREACHABLE_TRAP(0x41908c)
    }
}
