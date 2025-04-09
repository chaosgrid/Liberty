#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42edb0);
CLANG_FORWARD_PROC_SYMBOL(public_42f300);
CLANG_FORWARD_PROC_SYMBOL(public_4303a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42f324 _public_42f324
#define public_42f342 _public_42f342
#define public_42f34d _public_42f34d
#define public_42f356 _public_42f356
#define public_42f361 _public_42f361
#define public_42f37d _public_42f37d
#define public_42f394 _public_42f394
#define public_42f3a1 _public_42f3a1
#define public_42f3ac _public_42f3ac
#define public_42f3af _public_42f3af
#define public_42f3c7 _public_42f3c7
#define public_42f3d2 _public_42f3d2
#define public_42f3d5 _public_42f3d5
#define public_42f3ea _public_42f3ea
#define public_42f3f5 _public_42f3f5
#define public_42f400 _public_42f400
#define public_42f403 _public_42f403
#define public_42f417 _public_42f417
#define public_42f423 _public_42f423
#define public_42f42f _public_42f42f
#define public_42f432 _public_42f432
#define public_42f450 _public_42f450
#define public_42f48f _public_42f48f
#define public_42f4a2 _public_42f4a2
#define public_42f4ad _public_42f4ad
#define public_42f4b0 _public_42f4b0
#define public_42f4bb _public_42f4bb
#define public_42f4ce _public_42f4ce
#define public_42f4f5 _public_42f4f5
#define public_42f50f _public_42f50f
#define public_42f535 _public_42f535
#define public_42f548 _public_42f548
#define public_42f555 _public_42f555
#define public_42f557 _public_42f557
#define public_42f562 _public_42f562
#define public_42f579 _public_42f579
#define public_42f591 _public_42f591
#define public_42f59e _public_42f59e
#define public_42f5a0 _public_42f5a0
#define public_42f5ac _public_42f5ac
#define public_42f5d6 _public_42f5d6
#define public_42f5ee _public_42f5ee
#define public_42f5fe _public_42f5fe
#define public_42f608 _public_42f608
#define public_42f62b _public_42f62b
#define public_42f63e _public_42f63e
#define public_42f649 _public_42f649
#define public_42f64c _public_42f64c
#define public_42f656 _public_42f656
#define public_42f67f _public_42f67f
#define public_42f692 _public_42f692
#define public_42f69f _public_42f69f
#define public_42f6a1 _public_42f6a1
#define public_42f6a4 _public_42f6a4
#define public_42f6a7 _public_42f6a7
#define public_42f6ae _public_42f6ae

PROC_DECLARE(0x42f300, internal_42f300, public_42f300);
extern "C" NAKED register_t __cdecl internal_42f300()
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
        call public_4303a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_42f342
        mov eax, dword ptr ds : [esi+8]
        public_42f324 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_42f3c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_42f3d5
        public_42f342 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_42f34d
        mov eax, edx
        jmp public_42f324
        public_42f34d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_42f361
        public_42f356 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_42f356
        public_42f361 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_42f324
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42f37d
        mov dword ptr ds : [eax+4], ecx
        jmp public_42f394
        public_42f37d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_42f394 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_42f3a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_42f3af
        public_42f3a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_42f3ac
        mov dword ptr ds : [edx], ecx
        jmp public_42f3af
        public_42f3ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_42f3af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x48]
        mov dl, byte ptr ds : [ecx+0x48]
        mov byte ptr ds : [ecx+0x48], bl
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_42f432
        public_42f3c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_42f3d2
        mov dword ptr ds : [ecx], eax
        jmp public_42f3d5
        public_42f3d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_42f3d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_42f403
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42f3ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_42f400
        public_42f3ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_42f400
        public_42f3f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_42f3f5
        public_42f400 : nop
        mov dword ptr ss : [ebp], edx
        public_42f403 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_42f432
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42f417
        mov edx, dword ptr ds : [esi+4]
        jmp public_42f42f
        public_42f417 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_42f42f
        public_42f423 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_42f423
        public_42f42f : nop
        mov dword ptr ss : [ebp+8], edx
        public_42f432 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x48]
        mov bl, 1
        cmp cl, bl
        jne public_42f6ae
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_42f6a7
        nop 
        public_42f450 : nop
        cmp byte ptr ds : [eax+0x48], bl
        jne public_42f6a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42f50f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_42f4bb
        mov byte ptr ds : [ecx+0x48], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f48f
        mov dword ptr ds : [esi+4], ecx
        public_42f48f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f4a2
        mov dword ptr ds : [esi+4], edx
        jmp public_42f4b0
        public_42f4a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42f4ad
        mov dword ptr ds : [esi], edx
        jmp public_42f4b0
        public_42f4ad : nop
        mov dword ptr ds : [esi+8], edx
        public_42f4b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_42f4bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_42f4ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        je public_42f579
        public_42f4ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_42f5ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f4f5
        mov dword ptr ds : [esi+4], ecx
        public_42f4f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f591
        mov dword ptr ds : [esi+4], edx
        jmp public_42f5a0
        public_42f50f : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_42f562
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f535
        mov dword ptr ds : [esi+4], ecx
        public_42f535 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f548
        mov dword ptr ds : [esi+4], edx
        jmp public_42f557
        public_42f548 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42f555
        mov dword ptr ds : [esi+8], edx
        jmp public_42f557
        public_42f555 : nop
        mov dword ptr ds : [esi], edx
        public_42f557 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_42f562 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_42f608
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_42f608
        public_42f579 : nop
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_42f450
        jmp public_42f6a7
        public_42f591 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42f59e
        mov dword ptr ds : [esi+8], edx
        jmp public_42f5a0
        public_42f59e : nop
        mov dword ptr ds : [esi], edx
        public_42f5a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_42f5ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f5d6
        mov dword ptr ds : [esi+4], ecx
        public_42f5d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f5ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42f6a4
        public_42f5ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42f5fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42f6a4
        public_42f5fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42f6a4
        public_42f608 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_42f656
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f62b
        mov dword ptr ds : [esi+4], ecx
        public_42f62b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f63e
        mov dword ptr ds : [esi+4], edx
        jmp public_42f64c
        public_42f63e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42f649
        mov dword ptr ds : [esi], edx
        jmp public_42f64c
        public_42f649 : nop
        mov dword ptr ds : [esi+8], edx
        public_42f64c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_42f656 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42f67f
        mov dword ptr ds : [esi+4], ecx
        public_42f67f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42f692
        mov dword ptr ds : [esi+4], edx
        jmp public_42f6a1
        public_42f692 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42f69f
        mov dword ptr ds : [esi+8], edx
        jmp public_42f6a1
        public_42f69f : nop
        mov dword ptr ds : [esi], edx
        public_42f6a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42f6a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_42f6a7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x48], bl
        public_42f6ae : nop
        lea ecx, ds:[esi+0xC]
        call public_42edb0
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
        UNREACHABLE_TRAP(0x42f300)
    }
}

#undef public_42f324
#undef public_42f342
#undef public_42f34d
#undef public_42f356
#undef public_42f361
#undef public_42f37d
#undef public_42f394
#undef public_42f3a1
#undef public_42f3ac
#undef public_42f3af
#undef public_42f3c7
#undef public_42f3d2
#undef public_42f3d5
#undef public_42f3ea
#undef public_42f3f5
#undef public_42f400
#undef public_42f403
#undef public_42f417
#undef public_42f423
#undef public_42f42f
#undef public_42f432
#undef public_42f450
#undef public_42f48f
#undef public_42f4a2
#undef public_42f4ad
#undef public_42f4b0
#undef public_42f4bb
#undef public_42f4ce
#undef public_42f4f5
#undef public_42f50f
#undef public_42f535
#undef public_42f548
#undef public_42f555
#undef public_42f557
#undef public_42f562
#undef public_42f579
#undef public_42f591
#undef public_42f59e
#undef public_42f5a0
#undef public_42f5ac
#undef public_42f5d6
#undef public_42f5ee
#undef public_42f5fe
#undef public_42f608
#undef public_42f62b
#undef public_42f63e
#undef public_42f649
#undef public_42f64c
#undef public_42f656
#undef public_42f67f
#undef public_42f692
#undef public_42f69f
#undef public_42f6a1
#undef public_42f6a4
#undef public_42f6a7
#undef public_42f6ae
