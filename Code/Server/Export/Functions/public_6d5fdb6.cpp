#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdb6, internal_6d5fdb6, public_6d5fdb6);
extern "C" NAKED register_t __cdecl internal_6d5fdb6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640b0]
        UNREACHABLE_TRAP(0x6d5fdb6)
    }
}
