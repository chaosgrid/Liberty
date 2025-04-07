#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b490);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624876b);

#define public_621b813 _public_621b813
#define public_621b815 _public_621b815
#define public_621b835 _public_621b835
#define public_621b842 _public_621b842

PROC_DECLARE(0x621b7b0, internal_621b7b0, public_621b7b0);
extern "C" NAKED register_t __cdecl internal_621b7b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624876b @0x621b7b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624876b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x84
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_621b813
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_621b490
        mov dword ptr ds : [ebx], offset public_624d270
        mov dword ptr ds : [esi], offset public_624d210
        mov dword ptr ds : [esi+0x80], 1
        pop ebx
        jmp public_621b815
        public_621b813 : nop
        xor esi, esi
        public_621b815 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_621b842
        test eax, eax
        je public_621b835
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_621b835 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_621b842
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_621b842 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xF0], eax
        mov dword ptr ds : [edi+0x9C], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621b7b0)
    }
}

#undef public_621b813
#undef public_621b815
#undef public_621b835
#undef public_621b842
