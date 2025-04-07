#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65db516);

#define public_65db540 _public_65db540
#define public_65db545 _public_65db545
#define public_65db56a _public_65db56a
#define public_65db577 _public_65db577
#define public_65db581 _public_65db581
#define public_65db589 _public_65db589
#define public_65db594 _public_65db594
#define public_65db5ae _public_65db5ae
#define public_65db5af _public_65db5af
#define public_65db5bd _public_65db5bd
#define public_65db5c1 _public_65db5c1
#define public_65db5c4 _public_65db5c4
#define public_65db5cc _public_65db5cc
#define public_65db5d0 _public_65db5d0
#define public_65db5d9 _public_65db5d9
#define public_65db5e5 _public_65db5e5
#define public_65db5e8 _public_65db5e8
#define public_65db5fd _public_65db5fd
#define public_65db602 _public_65db602
#define public_65db60b _public_65db60b
#define public_65db614 _public_65db614
#define public_65db632 _public_65db632
#define public_65db635 _public_65db635
#define public_65db643 _public_65db643
#define public_65db645 _public_65db645
#define public_65db64d _public_65db64d
#define public_65db655 _public_65db655
#define public_65db65a _public_65db65a
#define public_65db670 _public_65db670
#define public_65db68c _public_65db68c
#define public_65db693 _public_65db693
#define public_65db6a2 _public_65db6a2
#define public_65db6a4 _public_65db6a4
#define public_65db6aa _public_65db6aa
#define public_65db6b2 _public_65db6b2
#define public_65db6b9 _public_65db6b9
#define public_65db6c0 _public_65db6c0

PROC_DECLARE(0x65db516, internal_65db516, public_65db516);
extern "C" NAKED register_t __cdecl internal_65db516()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push esi
        and dword ptr ds : [ecx], 0
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], 1
        mov eax, dword ptr ss : [ebp+8]
        test edi, edi
        je public_65db540
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_65db540 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_65db589
        public_65db545 : nop
        mov dl, byte ptr ds : [eax+1]
        inc eax
        cmp dl, 0x22
        je public_65db577
        test dl, dl
        je public_65db577
        movzx edx, dl
        test byte ptr ds : [edx+public_65e67e1], 4
        je public_65db56a
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_65db56a
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        public_65db56a : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_65db545
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_65db545
        public_65db577 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_65db581
        and byte ptr ds : [esi], 0
        inc esi
        public_65db581 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_65db5cc
        inc eax
        jmp public_65db5cc
        public_65db589 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_65db594
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        public_65db594 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        movzx ebx, dl
        test byte ptr ds : [ebx+public_65e67e1], 4
        je public_65db5af
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_65db5ae
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], bl
        inc esi
        public_65db5ae : nop
        inc eax
        public_65db5af : nop
        cmp dl, 0x20
        je public_65db5bd
        test dl, dl
        je public_65db5c1
        cmp dl, 9
        jne public_65db589
        public_65db5bd : nop
        test dl, dl
        jne public_65db5c4
        public_65db5c1 : nop
        dec eax
        jmp public_65db5cc
        public_65db5c4 : nop
        test esi, esi
        je public_65db5cc
        and byte ptr ds : [esi-1], 0
        public_65db5cc : nop
        and dword ptr ss : [ebp+0x18], 0
        public_65db5d0 : nop
        cmp byte ptr ds : [eax], 0
        je public_65db6b9
        public_65db5d9 : nop
        mov dl, byte ptr ds : [eax]
        cmp dl, 0x20
        je public_65db5e5
        cmp dl, 9
        jne public_65db5e8
        public_65db5e5 : nop
        inc eax
        jmp public_65db5d9
        public_65db5e8 : nop
        cmp byte ptr ds : [eax], 0
        je public_65db6b9
        test edi, edi
        je public_65db5fd
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_65db5fd : nop
        mov edx, dword ptr ss : [ebp+0x14]
        inc dword ptr ds : [edx]
        public_65db602 : nop
        mov dword ptr ss : [ebp+8], 1
        xor ebx, ebx
        public_65db60b : nop
        cmp byte ptr ds : [eax], 0x5C
        jne public_65db614
        inc eax
        inc ebx
        jmp public_65db60b
        public_65db614 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_65db645
        test bl, 1
        jne public_65db643
        xor edi, edi
        cmp dword ptr ss : [ebp+0x18], edi
        je public_65db632
        cmp byte ptr ds : [eax+1], 0x22
        lea edx, ds:[eax+1]
        jne public_65db632
        mov eax, edx
        jmp public_65db635
        public_65db632 : nop
        mov dword ptr ss : [ebp+8], edi
        public_65db635 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        xor edx, edx
        cmp dword ptr ss : [ebp+0x18], edx
        sete dl
        mov dword ptr ss : [ebp+0x18], edx
        public_65db643 : nop
        shr ebx, 1
        public_65db645 : nop
        mov edx, ebx
        dec ebx
        test edx, edx
        je public_65db65a
        inc ebx
        public_65db64d : nop
        test esi, esi
        je public_65db655
        mov byte ptr ds : [esi], 0x5C
        inc esi
        public_65db655 : nop
        inc dword ptr ds : [ecx]
        dec ebx
        jne public_65db64d
        public_65db65a : nop
        mov dl, byte ptr ds : [eax]
        test dl, dl
        je public_65db6aa
        cmp dword ptr ss : [ebp+0x18], 0
        jne public_65db670
        cmp dl, 0x20
        je public_65db6aa
        cmp dl, 9
        je public_65db6aa
        public_65db670 : nop
        cmp dword ptr ss : [ebp+8], 0
        je public_65db6a4
        test esi, esi
        je public_65db693
        movzx ebx, dl
        test byte ptr ds : [ebx+public_65e67e1], 4
        je public_65db68c
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        inc dword ptr ds : [ecx]
        public_65db68c : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_65db6a2
        public_65db693 : nop
        movzx edx, dl
        test byte ptr ds : [edx+public_65e67e1], 4
        je public_65db6a2
        inc eax
        inc dword ptr ds : [ecx]
        public_65db6a2 : nop
        inc dword ptr ds : [ecx]
        public_65db6a4 : nop
        inc eax
        jmp public_65db602
        public_65db6aa : nop
        test esi, esi
        je public_65db6b2
        and byte ptr ds : [esi], 0
        inc esi
        public_65db6b2 : nop
        inc dword ptr ds : [ecx]
        jmp public_65db5d0
        public_65db6b9 : nop
        test edi, edi
        je public_65db6c0
        and dword ptr ds : [edi], 0
        public_65db6c0 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        pop esi
        pop ebx
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65db516)
    }
}

#undef public_65db540
#undef public_65db545
#undef public_65db56a
#undef public_65db577
#undef public_65db581
#undef public_65db589
#undef public_65db594
#undef public_65db5ae
#undef public_65db5af
#undef public_65db5bd
#undef public_65db5c1
#undef public_65db5c4
#undef public_65db5cc
#undef public_65db5d0
#undef public_65db5d9
#undef public_65db5e5
#undef public_65db5e8
#undef public_65db5fd
#undef public_65db602
#undef public_65db60b
#undef public_65db614
#undef public_65db632
#undef public_65db635
#undef public_65db643
#undef public_65db645
#undef public_65db64d
#undef public_65db655
#undef public_65db65a
#undef public_65db670
#undef public_65db68c
#undef public_65db693
#undef public_65db6a2
#undef public_65db6a4
#undef public_65db6aa
#undef public_65db6b2
#undef public_65db6b9
#undef public_65db6c0
