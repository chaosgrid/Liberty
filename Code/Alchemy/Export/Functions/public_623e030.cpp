#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e030);
CLANG_FORWARD_PROC_SYMBOL(public_62403f0);

PROC_DECLARE(0x623e030, internal_623e030, public_623e030);
extern "C" NAKED register_t __cdecl internal_623e030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62403f0
        UNREACHABLE_TRAP(0x623e030)
    }
}
