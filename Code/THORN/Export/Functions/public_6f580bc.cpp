#include "THORN-PCH.h"

PROC_DECLARE(0x6f580bc, internal_6f580bc, public_6f580bc);
extern "C" NAKED register_t __cdecl internal_6f580bc()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a088]
        UNREACHABLE_TRAP(0x6f580bc)
    }
}
