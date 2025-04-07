#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621cdd0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624898b);

#define public_621d1a3 _public_621d1a3
#define public_621d1a5 _public_621d1a5
#define public_621d1c5 _public_621d1c5
#define public_621d1d2 _public_621d1d2

PROC_DECLARE(0x621d140, internal_621d140, public_621d140);
extern "C" NAKED register_t __cdecl internal_621d140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624898b @0x621d142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624898b
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
        je public_621d1a3
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_621cdd0
        mov dword ptr ds : [ebx], offset public_624d5d0
        mov dword ptr ds : [esi], offset public_624d570
        mov dword ptr ds : [esi+0x84], 1
        pop ebx
        jmp public_621d1a5
        public_621d1a3 : nop
        xor esi, esi
        public_621d1a5 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_621d1d2
        test eax, eax
        je public_621d1c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_621d1c5 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_621d1d2
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_621d1d2 : nop
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
        UNREACHABLE_TRAP(0x621d140)
    }
}

#undef public_621d1a3
#undef public_621d1a5
#undef public_621d1c5
#undef public_621d1d2
