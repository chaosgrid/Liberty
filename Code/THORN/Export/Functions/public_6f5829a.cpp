#include "THORN-PCH.h"

PROC_DECLARE(0x6f5829a, internal_6f5829a, public_6f5829a);
extern "C" NAKED register_t __cdecl internal_6f5829a()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0f8]
        UNREACHABLE_TRAP(0x6f5829a)
    }
}
