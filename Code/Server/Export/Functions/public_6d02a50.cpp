#include "Server-PCH.h"

PROC_DECLARE(0x6d02a50, internal_6d02a50, public_6d02a50);
extern "C" NAKED register_t __cdecl internal_6d02a50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp dword ptr ds : [public_6d645f8]
        UNREACHABLE_TRAP(0x6d02a50)
    }
}
