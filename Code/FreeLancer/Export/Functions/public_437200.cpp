#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_558d80);
CLANG_FORWARD_PROC_SYMBOL(public_558e00);

PROC_DECLARE(0x437200, internal_437200, public_437200);
extern "C" NAKED register_t __cdecl internal_437200()
{
    __asm
    {
        sub esp, 8
        lea ecx, ss:[esp]
        call public_415850
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+4]
        call public_558d80
        lea ecx, ss:[esp]
        push ecx
        call public_558e00
        mov al, 1
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x437200)
    }
}
