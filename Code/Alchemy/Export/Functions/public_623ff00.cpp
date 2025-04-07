#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a75b);

#define public_623ff5d _public_623ff5d
#define public_623ff5f _public_623ff5f
#define public_623ff7f _public_623ff7f
#define public_623ff8c _public_623ff8c

PROC_DECLARE(0x623ff00, internal_623ff00, public_623ff00);
extern "C" NAKED register_t __cdecl internal_623ff00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a75b @0x623ff02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a75b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x54
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_623ff5d
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_623f7b0
        mov dword ptr ds : [ebx], offset public_624f9e0
        mov dword ptr ds : [esi], offset public_624f980
        mov dword ptr ds : [esi+0x50], 1
        pop ebx
        jmp public_623ff5f
        public_623ff5d : nop
        xor esi, esi
        public_623ff5f : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_623ff8c
        test eax, eax
        je public_623ff7f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_623ff7f : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_623ff8c
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_623ff8c : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        add esi, 4
        mov dword ptr ds : [edi+0x80], esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623ff00)
    }
}

#undef public_623ff5d
#undef public_623ff5f
#undef public_623ff7f
#undef public_623ff8c
