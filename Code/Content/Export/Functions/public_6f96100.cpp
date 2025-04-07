#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96100);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f96124 _public_6f96124
#define public_6f96142 _public_6f96142
#define public_6f9614d _public_6f9614d
#define public_6f96156 _public_6f96156
#define public_6f96161 _public_6f96161
#define public_6f9617d _public_6f9617d
#define public_6f96194 _public_6f96194
#define public_6f961a1 _public_6f961a1
#define public_6f961ac _public_6f961ac
#define public_6f961af _public_6f961af
#define public_6f961c7 _public_6f961c7
#define public_6f961d2 _public_6f961d2
#define public_6f961d5 _public_6f961d5
#define public_6f961ea _public_6f961ea
#define public_6f961f5 _public_6f961f5
#define public_6f96200 _public_6f96200
#define public_6f96203 _public_6f96203
#define public_6f96217 _public_6f96217
#define public_6f96223 _public_6f96223
#define public_6f9622f _public_6f9622f
#define public_6f96232 _public_6f96232
#define public_6f96250 _public_6f96250
#define public_6f9628f _public_6f9628f
#define public_6f962a2 _public_6f962a2
#define public_6f962ad _public_6f962ad
#define public_6f962b0 _public_6f962b0
#define public_6f962bb _public_6f962bb
#define public_6f962ce _public_6f962ce
#define public_6f962f5 _public_6f962f5
#define public_6f9630f _public_6f9630f
#define public_6f96335 _public_6f96335
#define public_6f96348 _public_6f96348
#define public_6f96355 _public_6f96355
#define public_6f96357 _public_6f96357
#define public_6f96362 _public_6f96362
#define public_6f96379 _public_6f96379
#define public_6f96391 _public_6f96391
#define public_6f9639e _public_6f9639e
#define public_6f963a0 _public_6f963a0
#define public_6f963ac _public_6f963ac
#define public_6f963d6 _public_6f963d6
#define public_6f963ee _public_6f963ee
#define public_6f963fe _public_6f963fe
#define public_6f96408 _public_6f96408
#define public_6f9642b _public_6f9642b
#define public_6f9643e _public_6f9643e
#define public_6f96449 _public_6f96449
#define public_6f9644c _public_6f9644c
#define public_6f96456 _public_6f96456
#define public_6f9647f _public_6f9647f
#define public_6f96492 _public_6f96492
#define public_6f9649f _public_6f9649f
#define public_6f964a1 _public_6f964a1
#define public_6f964a4 _public_6f964a4
#define public_6f964a7 _public_6f964a7
#define public_6f964ae _public_6f964ae

PROC_DECLARE(0x6f96100, internal_6f96100, public_6f96100);
extern "C" NAKED register_t __cdecl internal_6f96100()
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
        call public_6f466e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f96142
        mov eax, dword ptr ds : [esi+8]
        public_6f96124 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f961c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f961d5
        public_6f96142 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f9614d
        mov eax, edx
        jmp public_6f96124
        public_6f9614d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6f96161
        public_6f96156 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6f96156
        public_6f96161 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f96124
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f9617d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f96194
        public_6f9617d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f96194 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f961a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f961af
        public_6f961a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f961ac
        mov dword ptr ds : [edx], ecx
        jmp public_6f961af
        public_6f961ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f961af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x50]
        mov dl, byte ptr ds : [ecx+0x50]
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [esi+0x50], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f96232
        public_6f961c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f961d2
        mov dword ptr ds : [ecx], eax
        jmp public_6f961d5
        public_6f961d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f961d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f96203
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f961ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f96200
        public_6f961ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6f96200
        public_6f961f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6f961f5
        public_6f96200 : nop
        mov dword ptr ss : [ebp], edx
        public_6f96203 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f96232
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f96217
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f9622f
        public_6f96217 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6f9622f
        public_6f96223 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6f96223
        public_6f9622f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f96232 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x50]
        mov bl, 1
        cmp cl, bl
        jne public_6f964ae
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f964a7
        nop 
        public_6f96250 : nop
        cmp byte ptr ds : [eax+0x50], bl
        jne public_6f964a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f9630f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f962bb
        mov byte ptr ds : [ecx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f9628f
        mov dword ptr ds : [esi+4], ecx
        public_6f9628f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f962a2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f962b0
        public_6f962a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f962ad
        mov dword ptr ds : [esi], edx
        jmp public_6f962b0
        public_6f962ad : nop
        mov dword ptr ds : [esi+8], edx
        public_6f962b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f962bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f962ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        je public_6f96379
        public_6f962ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f963ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f962f5
        mov dword ptr ds : [esi+4], ecx
        public_6f962f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f96391
        mov dword ptr ds : [esi+4], edx
        jmp public_6f963a0
        public_6f9630f : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f96362
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f96335
        mov dword ptr ds : [esi+4], ecx
        public_6f96335 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f96348
        mov dword ptr ds : [esi+4], edx
        jmp public_6f96357
        public_6f96348 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f96355
        mov dword ptr ds : [esi+8], edx
        jmp public_6f96357
        public_6f96355 : nop
        mov dword ptr ds : [esi], edx
        public_6f96357 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f96362 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f96408
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f96408
        public_6f96379 : nop
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f96250
        jmp public_6f964a7
        public_6f96391 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f9639e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f963a0
        public_6f9639e : nop
        mov dword ptr ds : [esi], edx
        public_6f963a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f963ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f963d6
        mov dword ptr ds : [esi+4], ecx
        public_6f963d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f963ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f964a4
        public_6f963ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f963fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f964a4
        public_6f963fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f964a4
        public_6f96408 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f96456
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f9642b
        mov dword ptr ds : [esi+4], ecx
        public_6f9642b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f9643e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f9644c
        public_6f9643e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f96449
        mov dword ptr ds : [esi], edx
        jmp public_6f9644c
        public_6f96449 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f9644c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f96456 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f9647f
        mov dword ptr ds : [esi+4], ecx
        public_6f9647f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f96492
        mov dword ptr ds : [esi+4], edx
        jmp public_6f964a1
        public_6f96492 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f9649f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f964a1
        public_6f9649f : nop
        mov dword ptr ds : [esi], edx
        public_6f964a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f964a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f964a7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x50], bl
        public_6f964ae : nop
        lea ecx, ds:[esi+0xC]
        call public_6f956a0
        push esi
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f96100)
    }
}

#undef public_6f96124
#undef public_6f96142
#undef public_6f9614d
#undef public_6f96156
#undef public_6f96161
#undef public_6f9617d
#undef public_6f96194
#undef public_6f961a1
#undef public_6f961ac
#undef public_6f961af
#undef public_6f961c7
#undef public_6f961d2
#undef public_6f961d5
#undef public_6f961ea
#undef public_6f961f5
#undef public_6f96200
#undef public_6f96203
#undef public_6f96217
#undef public_6f96223
#undef public_6f9622f
#undef public_6f96232
#undef public_6f96250
#undef public_6f9628f
#undef public_6f962a2
#undef public_6f962ad
#undef public_6f962b0
#undef public_6f962bb
#undef public_6f962ce
#undef public_6f962f5
#undef public_6f9630f
#undef public_6f96335
#undef public_6f96348
#undef public_6f96355
#undef public_6f96357
#undef public_6f96362
#undef public_6f96379
#undef public_6f96391
#undef public_6f9639e
#undef public_6f963a0
#undef public_6f963ac
#undef public_6f963d6
#undef public_6f963ee
#undef public_6f963fe
#undef public_6f96408
#undef public_6f9642b
#undef public_6f9643e
#undef public_6f96449
#undef public_6f9644c
#undef public_6f96456
#undef public_6f9647f
#undef public_6f96492
#undef public_6f9649f
#undef public_6f964a1
#undef public_6f964a4
#undef public_6f964a7
#undef public_6f964ae
