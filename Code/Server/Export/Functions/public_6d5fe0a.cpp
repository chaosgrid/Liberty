#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe0a, internal_6d5fe0a, public_6d5fe0a);
extern "C" NAKED register_t __cdecl internal_6d5fe0a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640e8]
        UNREACHABLE_TRAP(0x6d5fe0a)
    }
}
