#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e4a, internal_6f57e4a, public_6f57e4a);
extern "C" NAKED register_t __cdecl internal_6f57e4a()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a028]
        UNREACHABLE_TRAP(0x6f57e4a)
    }
}
