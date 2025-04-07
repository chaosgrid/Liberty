#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_633c60f _public_633c60f
#define public_633c617 _public_633c617
#define public_633c624 _public_633c624

PROC_DECLARE(0x633c5e0, internal_633c5e0, public_633c5e0);
extern "C" NAKED register_t __cdecl internal_633c5e0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_658a864
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a868]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_633c60f
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c60f
        lea eax, ss:[esp]
        jmp public_633c617
        public_633c60f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_633c617 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c624
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        public_633c624 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push 0xD15
/*FIXUP push offset public_63a4b20 @0x633c630*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a52fc @0x633c63a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a52fc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c5e0)
    }
}

#undef public_633c60f
#undef public_633c617
#undef public_633c624
