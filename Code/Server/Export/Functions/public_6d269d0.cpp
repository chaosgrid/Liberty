#include "Server-PCH.h"

PROC_DECLARE(0x6d269d0, internal_6d269d0, public_6d269d0);
extern "C" NAKED register_t __cdecl internal_6d269d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax+0x10], 0xFFFFFFFE
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6d269d0)
    }
}
