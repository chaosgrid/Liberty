#include "THORN-PCH.h"

PROC_DECLARE(0x6f5826a, internal_6f5826a, public_6f5826a);
extern "C" NAKED register_t __cdecl internal_6f5826a()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0d8]
        UNREACHABLE_TRAP(0x6f5826a)
    }
}
