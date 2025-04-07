#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e7a, internal_6f57e7a, public_6f57e7a);
extern "C" NAKED register_t __cdecl internal_6f57e7a()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a04c]
        UNREACHABLE_TRAP(0x6f57e7a)
    }
}
