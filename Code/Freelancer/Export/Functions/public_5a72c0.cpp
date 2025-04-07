#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a68c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a72c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a72e4 _public_5a72e4
#define public_5a7302 _public_5a7302
#define public_5a730d _public_5a730d
#define public_5a7316 _public_5a7316
#define public_5a7321 _public_5a7321
#define public_5a733d _public_5a733d
#define public_5a7354 _public_5a7354
#define public_5a7361 _public_5a7361
#define public_5a736c _public_5a736c
#define public_5a736f _public_5a736f
#define public_5a7387 _public_5a7387
#define public_5a7392 _public_5a7392
#define public_5a7395 _public_5a7395
#define public_5a73aa _public_5a73aa
#define public_5a73b5 _public_5a73b5
#define public_5a73c0 _public_5a73c0
#define public_5a73c3 _public_5a73c3
#define public_5a73d7 _public_5a73d7
#define public_5a73e3 _public_5a73e3
#define public_5a73ef _public_5a73ef
#define public_5a73f2 _public_5a73f2
#define public_5a7410 _public_5a7410
#define public_5a744f _public_5a744f
#define public_5a7462 _public_5a7462
#define public_5a746d _public_5a746d
#define public_5a7470 _public_5a7470
#define public_5a747b _public_5a747b
#define public_5a748e _public_5a748e
#define public_5a74b5 _public_5a74b5
#define public_5a74cf _public_5a74cf
#define public_5a74f5 _public_5a74f5
#define public_5a7508 _public_5a7508
#define public_5a7515 _public_5a7515
#define public_5a7517 _public_5a7517
#define public_5a7522 _public_5a7522
#define public_5a7539 _public_5a7539
#define public_5a7551 _public_5a7551
#define public_5a755e _public_5a755e
#define public_5a7560 _public_5a7560
#define public_5a756c _public_5a756c
#define public_5a7596 _public_5a7596
#define public_5a75ae _public_5a75ae
#define public_5a75be _public_5a75be
#define public_5a75c8 _public_5a75c8
#define public_5a75eb _public_5a75eb
#define public_5a75fe _public_5a75fe
#define public_5a7609 _public_5a7609
#define public_5a760c _public_5a760c
#define public_5a7616 _public_5a7616
#define public_5a763f _public_5a763f
#define public_5a7652 _public_5a7652
#define public_5a765f _public_5a765f
#define public_5a7661 _public_5a7661
#define public_5a7664 _public_5a7664
#define public_5a7667 _public_5a7667
#define public_5a766e _public_5a766e

PROC_DECLARE(0x5a72c0, internal_5a72c0, public_5a72c0);
extern "C" NAKED register_t __cdecl internal_5a72c0()
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
        call public_5948b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_5a7302
        mov eax, dword ptr ds : [esi+8]
        public_5a72e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_5a7387
        mov dword ptr ds : [ecx+4], eax
        jmp public_5a7395
        public_5a7302 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_5a730d
        mov eax, edx
        jmp public_5a72e4
        public_5a730d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_5a7321
        public_5a7316 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_5a7316
        public_5a7321 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_5a72e4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5a733d
        mov dword ptr ds : [eax+4], ecx
        jmp public_5a7354
        public_5a733d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_5a7354 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_5a7361
        mov dword ptr ds : [edx+4], ecx
        jmp public_5a736f
        public_5a7361 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_5a736c
        mov dword ptr ds : [edx], ecx
        jmp public_5a736f
        public_5a736c : nop
        mov dword ptr ds : [edx+8], ecx
        public_5a736f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_5a73f2
        public_5a7387 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_5a7392
        mov dword ptr ds : [ecx], eax
        jmp public_5a7395
        public_5a7392 : nop
        mov dword ptr ds : [ecx+8], eax
        public_5a7395 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_5a73c3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5a73aa
        mov edx, dword ptr ds : [esi+4]
        jmp public_5a73c0
        public_5a73aa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_5a73c0
        public_5a73b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_5a73b5
        public_5a73c0 : nop
        mov dword ptr ss : [ebp], edx
        public_5a73c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_5a73f2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5a73d7
        mov edx, dword ptr ds : [esi+4]
        jmp public_5a73ef
        public_5a73d7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_5a73ef
        public_5a73e3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_5a73e3
        public_5a73ef : nop
        mov dword ptr ss : [ebp+8], edx
        public_5a73f2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_5a766e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_5a7667
        nop 
        public_5a7410 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_5a7667
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5a74cf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_5a747b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a744f
        mov dword ptr ds : [esi+4], ecx
        public_5a744f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a7462
        mov dword ptr ds : [esi+4], edx
        jmp public_5a7470
        public_5a7462 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5a746d
        mov dword ptr ds : [esi], edx
        jmp public_5a7470
        public_5a746d : nop
        mov dword ptr ds : [esi+8], edx
        public_5a7470 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5a747b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_5a748e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_5a7539
        public_5a748e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_5a756c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a74b5
        mov dword ptr ds : [esi+4], ecx
        public_5a74b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a7551
        mov dword ptr ds : [esi+4], edx
        jmp public_5a7560
        public_5a74cf : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_5a7522
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a74f5
        mov dword ptr ds : [esi+4], ecx
        public_5a74f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a7508
        mov dword ptr ds : [esi+4], edx
        jmp public_5a7517
        public_5a7508 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5a7515
        mov dword ptr ds : [esi+8], edx
        jmp public_5a7517
        public_5a7515 : nop
        mov dword ptr ds : [esi], edx
        public_5a7517 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_5a7522 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_5a75c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_5a75c8
        public_5a7539 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5a7410
        jmp public_5a7667
        public_5a7551 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5a755e
        mov dword ptr ds : [esi+8], edx
        jmp public_5a7560
        public_5a755e : nop
        mov dword ptr ds : [esi], edx
        public_5a7560 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5a756c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a7596
        mov dword ptr ds : [esi+4], ecx
        public_5a7596 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a75ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5a7664
        public_5a75ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5a75be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5a7664
        public_5a75be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5a7664
        public_5a75c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_5a7616
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a75eb
        mov dword ptr ds : [esi+4], ecx
        public_5a75eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a75fe
        mov dword ptr ds : [esi+4], edx
        jmp public_5a760c
        public_5a75fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5a7609
        mov dword ptr ds : [esi], edx
        jmp public_5a760c
        public_5a7609 : nop
        mov dword ptr ds : [esi+8], edx
        public_5a760c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_5a7616 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5a763f
        mov dword ptr ds : [esi+4], ecx
        public_5a763f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5a7652
        mov dword ptr ds : [esi+4], edx
        jmp public_5a7661
        public_5a7652 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5a765f
        mov dword ptr ds : [esi+8], edx
        jmp public_5a7661
        public_5a765f : nop
        mov dword ptr ds : [esi], edx
        public_5a7661 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5a7664 : nop
        mov dword ptr ds : [ecx+4], edx
        public_5a7667 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_5a766e : nop
        lea ecx, ds:[esi+0xC]
        call public_5a68c0
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
        UNREACHABLE_TRAP(0x5a72c0)
    }
}

#undef public_5a72e4
#undef public_5a7302
#undef public_5a730d
#undef public_5a7316
#undef public_5a7321
#undef public_5a733d
#undef public_5a7354
#undef public_5a7361
#undef public_5a736c
#undef public_5a736f
#undef public_5a7387
#undef public_5a7392
#undef public_5a7395
#undef public_5a73aa
#undef public_5a73b5
#undef public_5a73c0
#undef public_5a73c3
#undef public_5a73d7
#undef public_5a73e3
#undef public_5a73ef
#undef public_5a73f2
#undef public_5a7410
#undef public_5a744f
#undef public_5a7462
#undef public_5a746d
#undef public_5a7470
#undef public_5a747b
#undef public_5a748e
#undef public_5a74b5
#undef public_5a74cf
#undef public_5a74f5
#undef public_5a7508
#undef public_5a7515
#undef public_5a7517
#undef public_5a7522
#undef public_5a7539
#undef public_5a7551
#undef public_5a755e
#undef public_5a7560
#undef public_5a756c
#undef public_5a7596
#undef public_5a75ae
#undef public_5a75be
#undef public_5a75c8
#undef public_5a75eb
#undef public_5a75fe
#undef public_5a7609
#undef public_5a760c
#undef public_5a7616
#undef public_5a763f
#undef public_5a7652
#undef public_5a765f
#undef public_5a7661
#undef public_5a7664
#undef public_5a7667
#undef public_5a766e
