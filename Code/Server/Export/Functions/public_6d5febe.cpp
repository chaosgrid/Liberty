#include "Server-PCH.h"

PROC_DECLARE(0x6d5febe, internal_6d5febe, public_6d5febe);
extern "C" NAKED register_t __cdecl internal_6d5febe()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64160]
        UNREACHABLE_TRAP(0x6d5febe)
    }
}
