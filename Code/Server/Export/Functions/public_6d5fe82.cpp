#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe82, internal_6d5fe82, public_6d5fe82);
extern "C" NAKED register_t __cdecl internal_6d5fe82()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64138]
        UNREACHABLE_TRAP(0x6d5fe82)
    }
}
