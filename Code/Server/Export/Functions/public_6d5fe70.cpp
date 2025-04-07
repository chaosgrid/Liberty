#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe70, internal_6d5fe70, public_6d5fe70);
extern "C" NAKED register_t __cdecl internal_6d5fe70()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6412c]
        UNREACHABLE_TRAP(0x6d5fe70)
    }
}
