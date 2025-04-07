#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_633c380);

#define public_633c3c1 _public_633c3c1
#define public_633c3c9 _public_633c3c9
#define public_633c3d7 _public_633c3d7

PROC_DECLARE(0x633c380, internal_633c380, public_633c380);
extern "C" NAKED register_t __cdecl internal_633c380()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        call public_630d3f0
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_658a850
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a854]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_633c3c1
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633c3c1
        lea eax, ss:[esp+4]
        jmp public_633c3c9
        public_633c3c1 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_633c3c9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_633c3d7
        add eax, 0x10
        pop esi
        add esp, 8
        ret 
        public_633c3d7 : nop
        push esi
        push 0xC9C
/*FIXUP push offset public_63a4b20 @0x633c3dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a5268 @0x633c3e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5268
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633c380)
    }
}

#undef public_633c3c1
#undef public_633c3c9
#undef public_633c3d7
