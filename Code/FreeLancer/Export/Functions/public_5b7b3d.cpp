#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7892);
CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);

#define public_5b7b91 _public_5b7b91
#define public_5b7b97 _public_5b7b97
#define public_5b7ba6 _public_5b7ba6
#define public_5b7bad _public_5b7bad
#define public_5b7bb2 _public_5b7bb2
#define public_5b7bd0 _public_5b7bd0
#define public_5b7bd4 _public_5b7bd4
#define public_5b7bd9 _public_5b7bd9
#define public_5b7be5 _public_5b7be5
#define public_5b7bec _public_5b7bec
#define public_5b7bef _public_5b7bef
#define public_5b7bff _public_5b7bff
#define public_5b7c2b _public_5b7c2b
#define public_5b7c3e _public_5b7c3e
#define public_5b7c45 _public_5b7c45
#define public_5b7c76 _public_5b7c76
#define public_5b7c83 _public_5b7c83
#define public_5b7c8c _public_5b7c8c
#define public_5b7c99 _public_5b7c99

PROC_DECLARE(0x5b7b3d, internal_5b7b3d, public_5b7b3d);
extern "C" NAKED register_t __cdecl internal_5b7b3d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ds : [public_67ed64], 0
        push ebx
        push esi
        push edi
        push 2
        pop ebx
        jne public_5b7b97
        push dword ptr ds : [public_616358]
        call dword ptr ds : [public_5c6f68]
/*FIXUP push offset public_5e7494 @0x5b7b5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7494
        push eax
        mov dword ptr ds : [public_61635c], eax
        call public_5b7793
        test eax, eax
        je public_5b7b91
/*FIXUP push offset public_5e7484 @0x5b7b6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7484
        call eax
        cmp eax, 0xFFFFFFFF
        jne public_5b7b91
        call dword ptr ds : [public_5c6f04]
        cmp eax, 0x7B
        jne public_5b7b91
        xor edi, edi
        inc edi
        mov dword ptr ds : [public_67ed64], edi
        jmp public_5b7ba6
        public_5b7b91 : nop
        mov dword ptr ds : [public_67ed64], ebx
        public_5b7b97 : nop
        xor edi, edi
        inc edi
        cmp dword ptr ds : [public_67ed64], edi
        jne public_5b7c45
        public_5b7ba6 : nop
        mov eax, dword ptr ds : [public_616358]
        jmp public_5b7be5
        public_5b7bad : nop
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        public_5b7bb2 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_5b7bd4
        test cl, cl
        je public_5b7bd0
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_5b7bd4
        add eax, ebx
        add esi, ebx
        test cl, cl
        jne public_5b7bb2
        public_5b7bd0 : nop
        xor eax, eax
        jmp public_5b7bd9
        public_5b7bd4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5b7bd9 : nop
        test eax, eax
        je public_5b7bff
        mov eax, dword ptr ds : [edi*8+public_616358]
        inc edi
        public_5b7be5 : nop
        test eax, eax
        mov dword ptr ss : [ebp+0x14], edi
        jne public_5b7bad
        public_5b7bec : nop
        push dword ptr ss : [ebp+0x18]
        public_5b7bef : nop
        push dword ptr ss : [ebp+0x10]
        call dword ptr ds : [public_5c6f60]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0x14
        public_5b7bff : nop
        lea edi, ds : [edi*8+public_616354]
        cmp dword ptr ds : [edi], 0
        jne public_5b7c3e
        push dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [public_5c6f00]
        call esi
        mov ebx, eax
        test ebx, ebx
        jne public_5b7c2b
        cmp dword ptr ss : [ebp+0x14], 0xD
        jne public_5b7c2b
/*FIXUP push offset public_5e7474 @0x5b7c22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7474
        call esi
        mov ebx, eax
        public_5b7c2b : nop
        push ebx
        push edi
        call dword ptr ds : [public_5c6f60]
        test eax, eax
        je public_5b7c3e
        push ebx
        call dword ptr ds : [public_5c6f08]
        public_5b7c3e : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [edi]
        jmp public_5b7c8c
        public_5b7c45 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        jne public_5b7c99
        cmp dword ptr ds : [public_616354], eax
        jne public_5b7c83
        call public_5b7892
        mov esi, eax
        test esi, esi
        je public_5b7c76
        push esi
/*FIXUP push offset public_616354 @0x5b7c60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616354
        call dword ptr ds : [public_5c6f60]
        test eax, eax
        je public_5b7c76
        push esi
        call dword ptr ds : [public_5c6f08]
        public_5b7c76 : nop
        cmp dword ptr ds : [public_616354], 0
        je public_5b7bec
        public_5b7c83 : nop
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [public_616354]
        public_5b7c8c : nop
        call public_5b7793
        test eax, eax
        je public_5b7bec
        public_5b7c99 : nop
        push eax
        jmp public_5b7bef
        UNREACHABLE_TRAP(0x5b7b3d)
    }
}

#undef public_5b7b91
#undef public_5b7b97
#undef public_5b7ba6
#undef public_5b7bad
#undef public_5b7bb2
#undef public_5b7bd0
#undef public_5b7bd4
#undef public_5b7bd9
#undef public_5b7be5
#undef public_5b7bec
#undef public_5b7bef
#undef public_5b7bff
#undef public_5b7c2b
#undef public_5b7c3e
#undef public_5b7c45
#undef public_5b7c76
#undef public_5b7c83
#undef public_5b7c8c
#undef public_5b7c99
