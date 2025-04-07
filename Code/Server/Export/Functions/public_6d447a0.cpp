#include "Server-PCH.h"

PROC_DECLARE(0x6d447a0, internal_6d447a0, public_6d447a0);
extern "C" NAKED register_t __cdecl internal_6d447a0()
{
    __asm
    {
        mov ecx, offset public_6d8f970
        jmp dword ptr ds : [public_6d64820]
        UNREACHABLE_TRAP(0x6d447a0)
    }
}
