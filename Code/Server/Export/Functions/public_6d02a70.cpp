#include "Server-PCH.h"

PROC_DECLARE(0x6d02a70, internal_6d02a70, public_6d02a70);
extern "C" NAKED register_t __cdecl internal_6d02a70()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp dword ptr ds : [public_6d64600]
        UNREACHABLE_TRAP(0x6d02a70)
    }
}
