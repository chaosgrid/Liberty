#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c40);
CLANG_FORWARD_PROC_SYMBOL(public_6244660);

PROC_DECLARE(0x6235c40, internal_6235c40, public_6235c40);
extern "C" NAKED register_t __cdecl internal_6235c40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244660
        UNREACHABLE_TRAP(0x6235c40)
    }
}
