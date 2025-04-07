#include "THORN-PCH.h"

PROC_DECLARE(0x6f580b6, internal_6f580b6, public_6f580b6);
extern "C" NAKED register_t __cdecl internal_6f580b6()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a084]
        UNREACHABLE_TRAP(0x6f580b6)
    }
}
