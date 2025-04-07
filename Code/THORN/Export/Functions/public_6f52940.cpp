#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52940);
CLANG_FORWARD_PROC_SYMBOL(public_6f52960);
CLANG_FORWARD_PROC_SYMBOL(public_6f53980);

PROC_DECLARE(0x6f52940, internal_6f52940, public_6f52940);
extern "C" NAKED register_t __cdecl internal_6f52940()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f52960
        push esi
        call public_6f53980
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52940)
    }
}
