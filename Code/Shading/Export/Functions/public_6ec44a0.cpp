#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec44c4 _public_6ec44c4
#define public_6ec44e2 _public_6ec44e2
#define public_6ec44ed _public_6ec44ed
#define public_6ec44f6 _public_6ec44f6
#define public_6ec4501 _public_6ec4501
#define public_6ec451d _public_6ec451d
#define public_6ec4534 _public_6ec4534
#define public_6ec4541 _public_6ec4541
#define public_6ec454c _public_6ec454c
#define public_6ec454f _public_6ec454f
#define public_6ec4567 _public_6ec4567
#define public_6ec4572 _public_6ec4572
#define public_6ec4575 _public_6ec4575
#define public_6ec458a _public_6ec458a
#define public_6ec4595 _public_6ec4595
#define public_6ec45a0 _public_6ec45a0
#define public_6ec45a3 _public_6ec45a3
#define public_6ec45b7 _public_6ec45b7
#define public_6ec45c3 _public_6ec45c3
#define public_6ec45cf _public_6ec45cf
#define public_6ec45d2 _public_6ec45d2
#define public_6ec45f0 _public_6ec45f0
#define public_6ec462f _public_6ec462f
#define public_6ec4642 _public_6ec4642
#define public_6ec464d _public_6ec464d
#define public_6ec4650 _public_6ec4650
#define public_6ec465b _public_6ec465b
#define public_6ec466e _public_6ec466e
#define public_6ec4695 _public_6ec4695
#define public_6ec46af _public_6ec46af
#define public_6ec46d5 _public_6ec46d5
#define public_6ec46e8 _public_6ec46e8
#define public_6ec46f5 _public_6ec46f5
#define public_6ec46f7 _public_6ec46f7
#define public_6ec4702 _public_6ec4702
#define public_6ec4719 _public_6ec4719
#define public_6ec4731 _public_6ec4731
#define public_6ec473e _public_6ec473e
#define public_6ec4740 _public_6ec4740
#define public_6ec474c _public_6ec474c
#define public_6ec4776 _public_6ec4776
#define public_6ec478e _public_6ec478e
#define public_6ec479e _public_6ec479e
#define public_6ec47a8 _public_6ec47a8
#define public_6ec47cb _public_6ec47cb
#define public_6ec47de _public_6ec47de
#define public_6ec47e9 _public_6ec47e9
#define public_6ec47ec _public_6ec47ec
#define public_6ec47f6 _public_6ec47f6
#define public_6ec481f _public_6ec481f
#define public_6ec4832 _public_6ec4832
#define public_6ec483f _public_6ec483f
#define public_6ec4841 _public_6ec4841
#define public_6ec4844 _public_6ec4844
#define public_6ec4847 _public_6ec4847
#define public_6ec484a _public_6ec484a

PROC_DECLARE(0x6ec44a0, internal_6ec44a0, public_6ec44a0);
extern "C" NAKED register_t __cdecl internal_6ec44a0()
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
        call public_6ec5e20
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ec44e2
        mov eax, dword ptr ds : [esi+8]
        public_6ec44c4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ec4567
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ec4575
        public_6ec44e2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ec44ed
        mov eax, edx
        jmp public_6ec44c4
        public_6ec44ed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ec4501
        public_6ec44f6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ec44f6
        public_6ec4501 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec44c4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec451d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ec4534
        public_6ec451d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ec4534 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ec4541
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec454f
        public_6ec4541 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ec454c
        mov dword ptr ds : [edx], ecx
        jmp public_6ec454f
        public_6ec454c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec454f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ec45d2
        public_6ec4567 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ec4572
        mov dword ptr ds : [ecx], eax
        jmp public_6ec4575
        public_6ec4572 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ec4575 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ec45a3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec458a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec45a0
        public_6ec458a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ec45a0
        public_6ec4595 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ec4595
        public_6ec45a0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ec45a3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ec45d2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec45b7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec45cf
        public_6ec45b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ec45cf
        public_6ec45c3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ec45c3
        public_6ec45cf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ec45d2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6ec484a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6ec4847
        nop 
        public_6ec45f0 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6ec4847
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec46af
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec465b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec462f
        mov dword ptr ds : [esi+4], ecx
        public_6ec462f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4642
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4650
        public_6ec4642 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec464d
        mov dword ptr ds : [esi], edx
        jmp public_6ec4650
        public_6ec464d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec4650 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6ec465b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec466e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6ec4719
        public_6ec466e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec474c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4695
        mov dword ptr ds : [esi+4], ecx
        public_6ec4695 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4731
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4740
        public_6ec46af : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec4702
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec46d5
        mov dword ptr ds : [esi+4], ecx
        public_6ec46d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec46e8
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec46f7
        public_6ec46e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec46f5
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec46f7
        public_6ec46f5 : nop
        mov dword ptr ds : [esi], edx
        public_6ec46f7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ec4702 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec47a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec47a8
        public_6ec4719 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec45f0
        jmp public_6ec4847
        public_6ec4731 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec473e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4740
        public_6ec473e : nop
        mov dword ptr ds : [esi], edx
        public_6ec4740 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec474c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4776
        mov dword ptr ds : [esi+4], ecx
        public_6ec4776 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec478e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4844
        public_6ec478e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec479e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4844
        public_6ec479e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4844
        public_6ec47a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ec47f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec47cb
        mov dword ptr ds : [esi+4], ecx
        public_6ec47cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec47de
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec47ec
        public_6ec47de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec47e9
        mov dword ptr ds : [esi], edx
        jmp public_6ec47ec
        public_6ec47e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec47ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ec47f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec481f
        mov dword ptr ds : [esi+4], ecx
        public_6ec481f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4832
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4841
        public_6ec4832 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec483f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4841
        public_6ec483f : nop
        mov dword ptr ds : [esi], edx
        public_6ec4841 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec4844 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec4847 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6ec484a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec44a0)
    }
}

#undef public_6ec44c4
#undef public_6ec44e2
#undef public_6ec44ed
#undef public_6ec44f6
#undef public_6ec4501
#undef public_6ec451d
#undef public_6ec4534
#undef public_6ec4541
#undef public_6ec454c
#undef public_6ec454f
#undef public_6ec4567
#undef public_6ec4572
#undef public_6ec4575
#undef public_6ec458a
#undef public_6ec4595
#undef public_6ec45a0
#undef public_6ec45a3
#undef public_6ec45b7
#undef public_6ec45c3
#undef public_6ec45cf
#undef public_6ec45d2
#undef public_6ec45f0
#undef public_6ec462f
#undef public_6ec4642
#undef public_6ec464d
#undef public_6ec4650
#undef public_6ec465b
#undef public_6ec466e
#undef public_6ec4695
#undef public_6ec46af
#undef public_6ec46d5
#undef public_6ec46e8
#undef public_6ec46f5
#undef public_6ec46f7
#undef public_6ec4702
#undef public_6ec4719
#undef public_6ec4731
#undef public_6ec473e
#undef public_6ec4740
#undef public_6ec474c
#undef public_6ec4776
#undef public_6ec478e
#undef public_6ec479e
#undef public_6ec47a8
#undef public_6ec47cb
#undef public_6ec47de
#undef public_6ec47e9
#undef public_6ec47ec
#undef public_6ec47f6
#undef public_6ec481f
#undef public_6ec4832
#undef public_6ec483f
#undef public_6ec4841
#undef public_6ec4844
#undef public_6ec4847
#undef public_6ec484a
