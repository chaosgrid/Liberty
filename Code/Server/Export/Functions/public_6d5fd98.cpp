#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd98, internal_6d5fd98, public_6d5fd98);
extern "C" NAKED register_t __cdecl internal_6d5fd98()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6409c]
        UNREACHABLE_TRAP(0x6d5fd98)
    }
}
