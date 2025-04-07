#include "THORN-PCH.h"

PROC_DECLARE(0x6f58222, internal_6f58222, public_6f58222);
extern "C" NAKED register_t __cdecl internal_6f58222()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a09c]
        UNREACHABLE_TRAP(0x6f58222)
    }
}
