#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_633c4af _public_633c4af
#define public_633c4b7 _public_633c4b7
#define public_633c4c4 _public_633c4c4

PROC_DECLARE(0x633c480, internal_633c480, public_633c480);
extern "C" NAKED register_t __cdecl internal_633c480()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_658a850
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a854]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp], eax
        je public_633c4af
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c4af
        lea eax, ss:[esp]
        jmp public_633c4b7
        public_633c4af : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633c4b7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c4c4
        add eax, 0x10
        add esp, 8
        ret 
        public_633c4c4 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push 0xCB7
/*FIXUP push offset public_63a4b20 @0x633c4d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a52c8 @0x633c4da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a52c8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c480)
    }
}

#undef public_633c4af
#undef public_633c4b7
#undef public_633c4c4
