#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e44, internal_6f57e44, public_6f57e44);
extern "C" NAKED register_t __cdecl internal_6f57e44()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a024]
        UNREACHABLE_TRAP(0x6f57e44)
    }
}
