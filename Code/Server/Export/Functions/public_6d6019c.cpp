#include "Server-PCH.h"

PROC_DECLARE(0x6d6019c, internal_6d6019c, public_6d6019c);
extern "C" NAKED register_t __cdecl internal_6d6019c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64c68]
        UNREACHABLE_TRAP(0x6d6019c)
    }
}
