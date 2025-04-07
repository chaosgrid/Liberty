#include "THORN-PCH.h"

PROC_DECLARE(0x6f580c2, internal_6f580c2, public_6f580c2);
extern "C" NAKED register_t __cdecl internal_6f580c2()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a08c]
        UNREACHABLE_TRAP(0x6f580c2)
    }
}
