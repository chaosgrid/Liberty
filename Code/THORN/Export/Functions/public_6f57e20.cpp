#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e20, internal_6f57e20, public_6f57e20);
extern "C" NAKED register_t __cdecl internal_6f57e20()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a00c]
        UNREACHABLE_TRAP(0x6f57e20)
    }
}
