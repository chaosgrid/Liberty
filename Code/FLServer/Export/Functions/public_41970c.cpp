#include "FLServer-PCH.h"

PROC_DECLARE(0x41970c, internal_41970c, public_41970c);
extern "C" NAKED register_t __cdecl internal_41970c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b170]
        UNREACHABLE_TRAP(0x41970c)
    }
}
