#include "THORN-PCH.h"

PROC_DECLARE(0x6f580aa, internal_6f580aa, public_6f580aa);
extern "C" NAKED register_t __cdecl internal_6f580aa()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a07c]
        UNREACHABLE_TRAP(0x6f580aa)
    }
}
