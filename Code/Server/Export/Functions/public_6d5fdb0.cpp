#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdb0, internal_6d5fdb0, public_6d5fdb0);
extern "C" NAKED register_t __cdecl internal_6d5fdb0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640ac]
        UNREACHABLE_TRAP(0x6d5fdb0)
    }
}
