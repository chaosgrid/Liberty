#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);

PROC_DECLARE(0x53e400, internal_53e400, public_53e400);
extern "C" NAKED register_t __cdecl internal_53e400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0xC], eax
        call public_42ae40
        push 0
        push 0
        push 0
        push eax
        call public_428680
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x53e400)
    }
}
