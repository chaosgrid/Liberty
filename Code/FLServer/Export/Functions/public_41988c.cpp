#include "FLServer-PCH.h"

PROC_DECLARE(0x41988c, internal_41988c, public_41988c);
extern "C" NAKED register_t __cdecl internal_41988c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b878]
        UNREACHABLE_TRAP(0x41988c)
    }
}
