#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_526f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_526f54 _public_526f54
#define public_526f72 _public_526f72
#define public_526f7d _public_526f7d
#define public_526f86 _public_526f86
#define public_526f91 _public_526f91
#define public_526fad _public_526fad
#define public_526fc4 _public_526fc4
#define public_526fd1 _public_526fd1
#define public_526fdc _public_526fdc
#define public_526fdf _public_526fdf
#define public_526ff7 _public_526ff7
#define public_527002 _public_527002
#define public_527005 _public_527005
#define public_52701a _public_52701a
#define public_527025 _public_527025
#define public_527030 _public_527030
#define public_527033 _public_527033
#define public_527047 _public_527047
#define public_527053 _public_527053
#define public_52705f _public_52705f
#define public_527062 _public_527062
#define public_527080 _public_527080
#define public_5270bf _public_5270bf
#define public_5270d2 _public_5270d2
#define public_5270dd _public_5270dd
#define public_5270e0 _public_5270e0
#define public_5270eb _public_5270eb
#define public_5270fe _public_5270fe
#define public_527125 _public_527125
#define public_52713f _public_52713f
#define public_527165 _public_527165
#define public_527178 _public_527178
#define public_527185 _public_527185
#define public_527187 _public_527187
#define public_527192 _public_527192
#define public_5271a9 _public_5271a9
#define public_5271c1 _public_5271c1
#define public_5271ce _public_5271ce
#define public_5271d0 _public_5271d0
#define public_5271dc _public_5271dc
#define public_527206 _public_527206
#define public_52721e _public_52721e
#define public_52722e _public_52722e
#define public_527238 _public_527238
#define public_52725b _public_52725b
#define public_52726e _public_52726e
#define public_527279 _public_527279
#define public_52727c _public_52727c
#define public_527286 _public_527286
#define public_5272af _public_5272af
#define public_5272c2 _public_5272c2
#define public_5272cf _public_5272cf
#define public_5272d1 _public_5272d1
#define public_5272d4 _public_5272d4
#define public_5272d7 _public_5272d7
#define public_5272de _public_5272de

PROC_DECLARE(0x526f30, internal_526f30, public_526f30);
extern "C" NAKED register_t __cdecl internal_526f30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_433330
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_526f72
        mov eax, dword ptr ds : [esi+8]
        public_526f54 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_526ff7
        mov dword ptr ds : [ecx+4], eax
        jmp public_527005
        public_526f72 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_526f7d
        mov eax, edx
        jmp public_526f54
        public_526f7d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_526f91
        public_526f86 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_526f86
        public_526f91 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_526f54
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_526fad
        mov dword ptr ds : [eax+4], ecx
        jmp public_526fc4
        public_526fad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_526fc4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_526fd1
        mov dword ptr ds : [edx+4], ecx
        jmp public_526fdf
        public_526fd1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_526fdc
        mov dword ptr ds : [edx], ecx
        jmp public_526fdf
        public_526fdc : nop
        mov dword ptr ds : [edx+8], ecx
        public_526fdf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x60]
        mov dl, byte ptr ds : [ecx+0x60]
        mov byte ptr ds : [ecx+0x60], bl
        mov byte ptr ds : [esi+0x60], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_527062
        public_526ff7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_527002
        mov dword ptr ds : [ecx], eax
        jmp public_527005
        public_527002 : nop
        mov dword ptr ds : [ecx+8], eax
        public_527005 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_527033
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_52701a
        mov edx, dword ptr ds : [esi+4]
        jmp public_527030
        public_52701a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_527030
        public_527025 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_527025
        public_527030 : nop
        mov dword ptr ss : [ebp], edx
        public_527033 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_527062
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_527047
        mov edx, dword ptr ds : [esi+4]
        jmp public_52705f
        public_527047 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        mov edx, eax
        jne public_52705f
        public_527053 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x61]
        test bl, bl
        je public_527053
        public_52705f : nop
        mov dword ptr ss : [ebp+8], edx
        public_527062 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x60]
        mov bl, 1
        cmp cl, bl
        jne public_5272de
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_5272d7
        nop 
        public_527080 : nop
        cmp byte ptr ds : [eax+0x60], bl
        jne public_5272d7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_52713f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_5270eb
        mov byte ptr ds : [ecx+0x60], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5270bf
        mov dword ptr ds : [esi+4], ecx
        public_5270bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5270d2
        mov dword ptr ds : [esi+4], edx
        jmp public_5270e0
        public_5270d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5270dd
        mov dword ptr ds : [esi], edx
        jmp public_5270e0
        public_5270dd : nop
        mov dword ptr ds : [esi+8], edx
        public_5270e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5270eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_5270fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        je public_5271a9
        public_5270fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_5271dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_527125
        mov dword ptr ds : [esi+4], ecx
        public_527125 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5271c1
        mov dword ptr ds : [esi+4], edx
        jmp public_5271d0
        public_52713f : nop
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_527192
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_527165
        mov dword ptr ds : [esi+4], ecx
        public_527165 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_527178
        mov dword ptr ds : [esi+4], edx
        jmp public_527187
        public_527178 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_527185
        mov dword ptr ds : [esi+8], edx
        jmp public_527187
        public_527185 : nop
        mov dword ptr ds : [esi], edx
        public_527187 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_527192 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_527238
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_527238
        public_5271a9 : nop
        mov byte ptr ds : [ecx+0x60], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_527080
        jmp public_5272d7
        public_5271c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5271ce
        mov dword ptr ds : [esi+8], edx
        jmp public_5271d0
        public_5271ce : nop
        mov dword ptr ds : [esi], edx
        public_5271d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5271dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_527206
        mov dword ptr ds : [esi+4], ecx
        public_527206 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_52721e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5272d4
        public_52721e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_52722e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5272d4
        public_52722e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5272d4
        public_527238 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x60], bl
        jne public_527286
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x60], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x60], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_52725b
        mov dword ptr ds : [esi+4], ecx
        public_52725b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_52726e
        mov dword ptr ds : [esi+4], edx
        jmp public_52727c
        public_52726e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_527279
        mov dword ptr ds : [esi], edx
        jmp public_52727c
        public_527279 : nop
        mov dword ptr ds : [esi+8], edx
        public_52727c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_527286 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x60]
        mov byte ptr ds : [ecx+0x60], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x60], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x60], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5272af
        mov dword ptr ds : [esi+4], ecx
        public_5272af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5272c2
        mov dword ptr ds : [esi+4], edx
        jmp public_5272d1
        public_5272c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5272cf
        mov dword ptr ds : [esi+8], edx
        jmp public_5272d1
        public_5272cf : nop
        mov dword ptr ds : [esi], edx
        public_5272d1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5272d4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_5272d7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x60], bl
        public_5272de : nop
        lea ecx, ds:[esi+0xC]
        call public_522480
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x526f30)
    }
}

#undef public_526f54
#undef public_526f72
#undef public_526f7d
#undef public_526f86
#undef public_526f91
#undef public_526fad
#undef public_526fc4
#undef public_526fd1
#undef public_526fdc
#undef public_526fdf
#undef public_526ff7
#undef public_527002
#undef public_527005
#undef public_52701a
#undef public_527025
#undef public_527030
#undef public_527033
#undef public_527047
#undef public_527053
#undef public_52705f
#undef public_527062
#undef public_527080
#undef public_5270bf
#undef public_5270d2
#undef public_5270dd
#undef public_5270e0
#undef public_5270eb
#undef public_5270fe
#undef public_527125
#undef public_52713f
#undef public_527165
#undef public_527178
#undef public_527185
#undef public_527187
#undef public_527192
#undef public_5271a9
#undef public_5271c1
#undef public_5271ce
#undef public_5271d0
#undef public_5271dc
#undef public_527206
#undef public_52721e
#undef public_52722e
#undef public_527238
#undef public_52725b
#undef public_52726e
#undef public_527279
#undef public_52727c
#undef public_527286
#undef public_5272af
#undef public_5272c2
#undef public_5272cf
#undef public_5272d1
#undef public_5272d4
#undef public_5272d7
#undef public_5272de
