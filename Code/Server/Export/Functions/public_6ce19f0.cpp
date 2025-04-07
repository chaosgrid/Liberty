#include "Server-PCH.h"

PROC_DECLARE(0x6ce19f0, internal_6ce19f0, public_6ce19f0);
extern "C" NAKED register_t __cdecl internal_6ce19f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        dec eax
        ret 4
        UNREACHABLE_TRAP(0x6ce19f0)
    }
}
