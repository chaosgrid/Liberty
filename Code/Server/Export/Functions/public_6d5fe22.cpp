#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe22, internal_6d5fe22, public_6d5fe22);
extern "C" NAKED register_t __cdecl internal_6d5fe22()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640f8]
        UNREACHABLE_TRAP(0x6d5fe22)
    }
}
