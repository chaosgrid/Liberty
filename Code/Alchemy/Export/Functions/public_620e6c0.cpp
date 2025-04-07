#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247b1b);

#define public_620e6f2 _public_620e6f2
#define public_620e712 _public_620e712
#define public_620e716 _public_620e716
#define public_620e71b _public_620e71b
#define public_620e784 _public_620e784
#define public_620e786 _public_620e786
#define public_620e7b1 _public_620e7b1
#define public_620e7d6 _public_620e7d6
#define public_620e7e9 _public_620e7e9
#define public_620e808 _public_620e808
#define public_620e80e _public_620e80e

PROC_DECLARE(0x620e6c0, internal_620e6c0, public_620e6c0);
extern "C" NAKED register_t __cdecl internal_620e6c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247b1b @0x620e6c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247b1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp], 8
        jne public_620e7e9
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_620e6f2 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_620e716
        test cl, cl
        je public_620e712
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_620e716
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620e6f2
        public_620e712 : nop
        xor eax, eax
        jmp public_620e71b
        public_620e716 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620e71b : nop
        test eax, eax
        jne public_620e7e9
        push 0xA4
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_620e784
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624bf40
        mov ecx, edi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [edi+0x98], 0
        mov byte ptr ds : [edi+0x96], al
        mov dword ptr ds : [edi], offset public_624bee0
        mov dword ptr ds : [esi+0x1C], esi
        mov dword ptr ds : [esi], offset public_624bdd8
        mov dword ptr ds : [edi], offset public_624be80
        mov dword ptr ds : [esi+0xA0], eax
        jmp public_620e786
        public_620e784 : nop
        xor esi, esi
        public_620e786 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_620e7b1
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        public_620e7b1 : nop
        mov edx, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        test ebp, ebp
        je public_620e808
        mov eax, dword ptr ds : [edi+0x7C]
        test eax, eax
        je public_620e7d6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_620e7d6 : nop
        push esi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_620e80e
        public_620e7e9 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        public_620e808 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], esi
        public_620e80e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x620e6c0)
    }
}

#undef public_620e6f2
#undef public_620e712
#undef public_620e716
#undef public_620e71b
#undef public_620e784
#undef public_620e786
#undef public_620e7b1
#undef public_620e7d6
#undef public_620e7e9
#undef public_620e808
#undef public_620e80e
