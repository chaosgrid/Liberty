#include "THORN-PCH.h"

PROC_DECLARE(0x6f58300, internal_6f58300, public_6f58300);
extern "C" NAKED register_t __cdecl internal_6f58300()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a13c]
        UNREACHABLE_TRAP(0x6f58300)
    }
}
