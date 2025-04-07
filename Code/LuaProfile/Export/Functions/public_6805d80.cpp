#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802730);
CLANG_FORWARD_PROC_SYMBOL(public_6802760);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6805db7 _public_6805db7
#define public_6805dd0 _public_6805dd0

PROC_DECLARE(0x6805d80, internal_6805d80, public_6805d80);
extern "C" NAKED register_t __cdecl internal_6805d80()
{
    __asm
    {
        push ecx
        push esi
        push 0
        call public_68026e0
        mov esi, eax
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6802760
        push esi
        call public_6802730
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 0x10
        test eax, eax
        pop esi
        jne public_6805db7
        mov eax, offset public_680d4f0
        mov dword ptr ss : [esp], eax
        public_6805db7 : nop
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        jne public_6805dd0
        push eax
        push ecx
/*FIXUP push offset public_680d870 @0x6805dc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d870
        call public_6805fb0
        add esp, 0xC
        pop ecx
        ret 
        public_6805dd0 : nop
        push edx
        push eax
        push ecx
/*FIXUP push offset public_680d840 @0x6805dd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d840
        call public_6805fb0
        UNREACHABLE_TRAP(0x6805d80)
    }
}

#undef public_6805db7
#undef public_6805dd0
