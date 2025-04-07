#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e32, internal_6f57e32, public_6f57e32);
extern "C" NAKED register_t __cdecl internal_6f57e32()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a014]
        UNREACHABLE_TRAP(0x6f57e32)
    }
}
