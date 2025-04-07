#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6806750);
CLANG_FORWARD_PROC_SYMBOL(public_68067d0);
CLANG_FORWARD_PROC_SYMBOL(public_68068d0);
CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806a40);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);
CLANG_FORWARD_PROC_SYMBOL(public_680a8c0);

#define public_68067b7 _public_68067b7

PROC_DECLARE(0x6806750, internal_6806750, public_6806750);
extern "C" NAKED register_t __cdecl internal_6806750()
{
    __asm
    {
        sub esp, 0x4A4
        push esi
        mov esi, dword ptr ss : [esp+0x4AC]
        lea eax, ss:[esp+4]
        push esi
        push eax
        call public_680a8c0
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6805a80
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_68067d0
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6806a20
        lea edx, ss:[esp+0x20]
        push edx
        call public_6806a40
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x20
        cmp eax, 0x11D
        pop esi
        je public_68067b7
        lea eax, ss:[esp]
/*FIXUP push offset public_680db1c @0x68067a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db1c
        push eax
        call public_680a850
        add esp, 8
        public_68067b7 : nop
        lea ecx, ss:[esp]
        push ecx
        call public_68068d0
        mov eax, dword ptr ss : [esp+0x64]
        add esp, 0x4A8
        ret 
        UNREACHABLE_TRAP(0x6806750)
    }
}

#undef public_68067b7
