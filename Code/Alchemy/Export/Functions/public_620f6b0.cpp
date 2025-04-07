#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ef80);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247c1b);

#define public_620f713 _public_620f713
#define public_620f715 _public_620f715
#define public_620f735 _public_620f735
#define public_620f742 _public_620f742

PROC_DECLARE(0x620f6b0, internal_620f6b0, public_620f6b0);
extern "C" NAKED register_t __cdecl internal_620f6b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247c1b @0x620f6b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247c1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x88
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_620f713
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_620ef80
        mov dword ptr ds : [ebx], offset public_624c2f8
        mov dword ptr ds : [esi], offset public_624c298
        mov dword ptr ds : [esi+0x84], 1
        pop ebx
        jmp public_620f715
        public_620f713 : nop
        xor esi, esi
        public_620f715 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_620f742
        test eax, eax
        je public_620f735
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_620f735 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_620f742
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_620f742 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xE8], esi
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x620f6b0)
    }
}

#undef public_620f713
#undef public_620f715
#undef public_620f735
#undef public_620f742
