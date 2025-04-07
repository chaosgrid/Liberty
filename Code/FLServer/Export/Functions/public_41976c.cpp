#include "FLServer-PCH.h"

PROC_DECLARE(0x41976c, internal_41976c, public_41976c);
extern "C" NAKED register_t __cdecl internal_41976c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b17c]
        UNREACHABLE_TRAP(0x41976c)
    }
}
