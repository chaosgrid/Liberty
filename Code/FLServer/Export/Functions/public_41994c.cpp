#include "FLServer-PCH.h"

PROC_DECLARE(0x41994c, internal_41994c, public_41994c);
extern "C" NAKED register_t __cdecl internal_41994c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8e0]
        UNREACHABLE_TRAP(0x41994c)
    }
}
