#include "Server-PCH.h"

PROC_DECLARE(0x6d453e0, internal_6d453e0, public_6d453e0);
extern "C" NAKED register_t __cdecl internal_6d453e0()
{
    __asm
    {
        mov ecx, offset public_6d90270
        jmp dword ptr ds : [public_6d64670]
        UNREACHABLE_TRAP(0x6d453e0)
    }
}
