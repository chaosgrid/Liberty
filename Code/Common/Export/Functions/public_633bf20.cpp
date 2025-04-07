#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_633bf20);

#define public_633bf68 _public_633bf68
#define public_633bf70 _public_633bf70
#define public_633bf9d _public_633bf9d

PROC_DECLARE(0x633bf20, internal_633bf20, public_633bf20);
extern "C" NAKED register_t __cdecl internal_633bf20()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call public_630d3f0
        mov esi, dword ptr ds : [public_658a82c]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_658a828
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a82c]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_633bf68
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_633bf68
        lea eax, ss:[esp+8]
        jmp public_633bf70
        public_633bf68 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_633bf70 : nop
        cmp dword ptr ds : [eax], esi
        jne public_633bf9d
        mov ecx, dword ptr ds : [public_6399028]
        push edi
        push 0xBE4
/*FIXUP push offset public_63a4b20 @0x633bf80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a51dc @0x633bf8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51dc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_633bf9d : nop
        pop edi
        mov eax, edx
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633bf20)
    }
}

#undef public_633bf68
#undef public_633bf70
#undef public_633bf9d
