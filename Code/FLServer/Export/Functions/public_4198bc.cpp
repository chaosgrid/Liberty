#include "FLServer-PCH.h"

PROC_DECLARE(0x4198bc, internal_4198bc, public_4198bc);
extern "C" NAKED register_t __cdecl internal_4198bc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b858]
        UNREACHABLE_TRAP(0x4198bc)
    }
}
