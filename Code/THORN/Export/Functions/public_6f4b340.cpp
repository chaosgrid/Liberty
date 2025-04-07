#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e560);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);

PROC_DECLARE(0x6f4b340, internal_6f4b340, public_6f4b340);
extern "C" NAKED register_t __cdecl internal_6f4b340()
{
    __asm
    {
        sub esp, 0x10
        call public_6f4edc0
        push 0
        call public_6f4e560
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+8], 0xFFFFFFFD
        call public_6f4b190
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f4b340)
    }
}
