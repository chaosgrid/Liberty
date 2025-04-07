#include "FLServer-PCH.h"

PROC_DECLARE(0x4189c0, internal_4189c0, public_4189c0);
extern "C" NAKED register_t __cdecl internal_4189c0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b31c]
        UNREACHABLE_TRAP(0x4189c0)
    }
}
