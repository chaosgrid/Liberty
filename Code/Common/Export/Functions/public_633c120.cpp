#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_633c120);

#define public_633c168 _public_633c168
#define public_633c170 _public_633c170
#define public_633c19d _public_633c19d

PROC_DECLARE(0x633c120, internal_633c120, public_633c120);
extern "C" NAKED register_t __cdecl internal_633c120()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call public_630d3f0
        mov esi, dword ptr ds : [public_658a840]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_658a83c
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a840]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_633c168
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c168
        lea eax, ss:[esp+8]
        jmp public_633c170
        public_633c168 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_633c170 : nop
        cmp dword ptr ds : [eax], esi
        jne public_633c19d
        mov ecx, dword ptr ds : [public_6399028]
        push edi
        push 0xBFF
/*FIXUP push offset public_63a4b20 @0x633c180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a4b50 @0x633c18a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b50
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_633c19d : nop
        pop edi
        mov eax, edx
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c120)
    }
}

#undef public_633c168
#undef public_633c170
#undef public_633c19d
