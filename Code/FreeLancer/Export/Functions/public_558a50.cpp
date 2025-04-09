#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4284f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ad30);
CLANG_FORWARD_PROC_SYMBOL(public_4348b0);
CLANG_FORWARD_PROC_SYMBOL(public_435630);
CLANG_FORWARD_PROC_SYMBOL(public_43b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_443e90);
CLANG_FORWARD_PROC_SYMBOL(public_4564e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_5575e0);
CLANG_FORWARD_PROC_SYMBOL(public_558a50);

PROC_DECLARE(0x558a50, internal_558a50, public_558a50);
extern "C" NAKED register_t __cdecl internal_558a50()
{
    __asm
    {
        push ecx
        call dword ptr ds : [public_5c6bc0]
        fstp dword ptr ds : [public_610a0c]
        mov ecx, offset public_668708
        call public_43b3e0
        mov ecx, offset public_66d2d0
        call public_4564e0
        call public_443e90
        call public_435630
        call public_4284f0
        push 2
        call public_42ad30
        add esp, 4
        call public_5575e0
        mov ecx, offset public_667e50
        call public_4348b0
        lea eax, ss:[esp]
        push eax
        mov dword ptr ss : [esp+4], 0
        call public_4c4910
        push 0
        call public_4c4a10
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x558a50)
    }
}
