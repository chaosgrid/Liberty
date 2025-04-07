#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_6807b50);
CLANG_FORWARD_PROC_SYMBOL(public_6807b80);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6807b41 _public_6807b41

PROC_DECLARE(0x6807b00, internal_6807b00, public_6807b00);
extern "C" NAKED register_t __cdecl internal_6807b00()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+4]
        push eax
        push esi
        call public_6807b80
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call public_6807630
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_680da28 @0x6807b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da28
        push edx
        call public_6807b50
        add esp, 0x18
        test eax, eax
        jge public_6807b41
/*FIXUP push offset public_680dc50 @0x6807b33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc50
        push esi
        call public_680a850
        add esp, 8
        public_6807b41 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6807b00)
    }
}

#undef public_6807b41
