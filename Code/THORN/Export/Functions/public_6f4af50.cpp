#include "THORN-PCH.h"

PROC_DECLARE(0x6f4af50, internal_6f4af50, public_6f4af50);
extern "C" NAKED register_t __cdecl internal_6f4af50()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a000]
        UNREACHABLE_TRAP(0x6f4af50)
    }
}
