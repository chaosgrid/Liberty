#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d080);
CLANG_FORWARD_PROC_SYMBOL(public_621d890);

PROC_DECLARE(0x621d890, internal_621d890, public_621d890);
extern "C" NAKED register_t __cdecl internal_621d890()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_621d080
        UNREACHABLE_TRAP(0x621d890)
    }
}
