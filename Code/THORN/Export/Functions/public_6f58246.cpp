#include "THORN-PCH.h"

PROC_DECLARE(0x6f58246, internal_6f58246, public_6f58246);
extern "C" NAKED register_t __cdecl internal_6f58246()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0b4]
        UNREACHABLE_TRAP(0x6f58246)
    }
}
