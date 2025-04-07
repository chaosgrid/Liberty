#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803c40);
CLANG_FORWARD_PROC_SYMBOL(public_68053a0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

PROC_DECLARE(0x6803c40, internal_6803c40, public_6803c40);
extern "C" NAKED register_t __cdecl internal_6803c40()
{
    __asm
    {
        sub esp, 0x20
/*FIXUP push offset public_680d520 @0x6803c43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d520
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        call public_6805a80
        fild dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+4]
        fstp qword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_68053a0
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6803c40)
    }
}
