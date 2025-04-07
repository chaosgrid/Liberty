#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245080);

PROC_DECLARE(0x6245580, internal_6245580, public_6245580);
extern "C" NAKED register_t __cdecl internal_6245580()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245080
        UNREACHABLE_TRAP(0x6245580)
    }
}
