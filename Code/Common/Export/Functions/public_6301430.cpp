#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba270);
CLANG_FORWARD_PROC_SYMBOL(public_62bb210);
CLANG_FORWARD_PROC_SYMBOL(public_6301430);
CLANG_FORWARD_PROC_SYMBOL(public_6301d60);
CLANG_FORWARD_PROC_SYMBOL(public_6302450);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6301450 _public_6301450
#define public_6301463 _public_6301463
#define public_6301466 _public_6301466
#define public_630146a _public_630146a
#define public_63014c9 _public_63014c9
#define public_63014e1 _public_63014e1
#define public_63014eb _public_63014eb
#define public_63014ef _public_63014ef
#define public_6301500 _public_6301500
#define public_630153b _public_630153b
#define public_630154a _public_630154a
#define public_630156b _public_630156b
#define public_630158c _public_630158c
#define public_630159a _public_630159a
#define public_63015b9 _public_63015b9
#define public_63015c5 _public_63015c5
#define public_63015e1 _public_63015e1
#define public_63015fc _public_63015fc
#define public_6301603 _public_6301603
#define public_6301626 _public_6301626

PROC_DECLARE(0x6301430, internal_6301430, public_6301430);
extern "C" NAKED register_t __cdecl internal_6301430()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_630146a
        lea esp, ss:[esp]
        public_6301450 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6301463
        mov ebp, dword ptr ss : [ebp]
        jmp public_6301466
        public_6301463 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6301466 : nop
        cmp ebp, edx
        jne public_6301450
        public_630146a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_63015e1
        push 0
        push esi
        mov ecx, edi
        call public_62ba270
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62bb210
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_63014c9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_63014c9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_63014c9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_63014ef
        mov dword ptr ds : [eax+8], ebx
        jmp public_63014ef
        public_63014c9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_63014e1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_63014eb
        public_63014e1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_63014eb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_63014eb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_63014ef : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_63015c5
        lea ecx, ds:[ecx]
        public_6301500 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        jne public_63015c5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_630156b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_630153b
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_63015b9
        public_630153b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_630154a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_630154a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x30], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_63015b9
        public_630156b : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_630158c
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_63015b9
        public_630158c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_630159a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_630159a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_63015b9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6301500
        public_63015c5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_63015e1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_63015fc
        cmp esi, dword ptr ds : [ecx]
        je public_6301603
        lea ecx, ss:[esp+0x10]
        call public_6302450
        mov edx, dword ptr ss : [esp+0x10]
        public_63015fc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6301626
        public_6301603 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6301d60
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6301626 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6301430)
    }
}

#undef public_6301450
#undef public_6301463
#undef public_6301466
#undef public_630146a
#undef public_63014c9
#undef public_63014e1
#undef public_63014eb
#undef public_63014ef
#undef public_6301500
#undef public_630153b
#undef public_630154a
#undef public_630156b
#undef public_630158c
#undef public_630159a
#undef public_63015b9
#undef public_63015c5
#undef public_63015e1
#undef public_63015fc
#undef public_6301603
#undef public_6301626
