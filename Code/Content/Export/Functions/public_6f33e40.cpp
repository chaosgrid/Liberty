#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

PROC_DECLARE(0x6f33e40, internal_6f33e40, public_6f33e40);
extern "C" NAKED register_t __cdecl internal_6f33e40()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        mov dword ptr ss : [esp], eax
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        call dword ptr ds : [public_6fb3498]
        fld dword ptr ss : [esp+0xC]
        add esp, 0x10
        jmp public_6fa9130
        UNREACHABLE_TRAP(0x6f33e40)
    }
}
