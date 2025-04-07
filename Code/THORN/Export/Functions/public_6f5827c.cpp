#include "THORN-PCH.h"

PROC_DECLARE(0x6f5827c, internal_6f5827c, public_6f5827c);
extern "C" NAKED register_t __cdecl internal_6f5827c()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0e4]
        UNREACHABLE_TRAP(0x6f5827c)
    }
}
