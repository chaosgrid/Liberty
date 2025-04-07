#include "FLServer-PCH.h"

PROC_DECLARE(0x418ef4, internal_418ef4, public_418ef4);
extern "C" NAKED register_t __cdecl internal_418ef4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6a0]
        UNREACHABLE_TRAP(0x418ef4)
    }
}
