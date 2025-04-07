#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_558d80);
CLANG_FORWARD_PROC_SYMBOL(public_558ed0);

PROC_DECLARE(0x437230, internal_437230, public_437230);
extern "C" NAKED register_t __cdecl internal_437230()
{
    __asm
    {
        sub esp, 8
        lea ecx, ss:[esp]
        call public_415850
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+4]
        call public_558d80
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp]
        push ecx
        push edx
        call public_558ed0
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x437230)
    }
}
