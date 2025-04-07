#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d4540);
CLANG_FORWARD_PROC_SYMBOL(public_65d4b80);
CLANG_FORWARD_PROC_SYMBOL(public_65d5020);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d45b2 _public_65d45b2
#define public_65d45c6 _public_65d45c6
#define public_65d45cc _public_65d45cc
#define public_65d45da _public_65d45da
#define public_65d461b _public_65d461b
#define public_65d4634 _public_65d4634
#define public_65d4647 _public_65d4647
#define public_65d4652 _public_65d4652
#define public_65d4655 _public_65d4655
#define public_65d465a _public_65d465a
#define public_65d4683 _public_65d4683
#define public_65d469c _public_65d469c
#define public_65d46af _public_65d46af
#define public_65d46b9 _public_65d46b9
#define public_65d46dc _public_65d46dc
#define public_65d46f4 _public_65d46f4
#define public_65d4707 _public_65d4707
#define public_65d4714 _public_65d4714
#define public_65d4716 _public_65d4716
#define public_65d471c _public_65d471c
#define public_65d4745 _public_65d4745
#define public_65d4758 _public_65d4758
#define public_65d4763 _public_65d4763
#define public_65d4766 _public_65d4766
#define public_65d4768 _public_65d4768
#define public_65d476b _public_65d476b
#define public_65d4777 _public_65d4777

PROC_DECLARE(0x65d4540, internal_65d4540, public_65d4540);
extern "C" NAKED register_t __cdecl internal_65d4540()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_65d6f71
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_65d4b80
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_65d45b2
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_65d45b2
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_65d5020
        test eax, eax
        jl public_65d45b2
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_65d45cc
        mov dword ptr ds : [eax+8], ebx
        jmp public_65d45cc
        public_65d45b2 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_65d45c6
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_65d45cc
        public_65d45c6 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_65d45cc
        mov dword ptr ds : [eax], ebx
        public_65d45cc : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_65d4777
        public_65d45da : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_65d4777
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_65d46b9
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_65d461b
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_65d476b
        public_65d461b : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_65d465a
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_65d4634
        mov dword ptr ds : [edx+4], eax
        public_65d4634 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65d4647
        mov dword ptr ds : [edx+4], ecx
        jmp public_65d4655
        public_65d4647 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_65d4652
        mov dword ptr ds : [edx], ecx
        jmp public_65d4655
        public_65d4652 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65d4655 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_65d465a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_65d4683
        mov dword ptr ds : [edi+4], ecx
        public_65d4683 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65d469c
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65d4768
        public_65d469c : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65d46af
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65d4768
        public_65d46af : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65d4768
        public_65d46b9 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_65d46dc
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_65d476b
        public_65d46dc : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_65d471c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_65d46f4
        mov dword ptr ds : [edx+4], eax
        public_65d46f4 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65d4707
        mov dword ptr ds : [edx+4], ecx
        jmp public_65d4716
        public_65d4707 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_65d4714
        mov dword ptr ds : [edx+8], ecx
        jmp public_65d4716
        public_65d4714 : nop
        mov dword ptr ds : [edx], ecx
        public_65d4716 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_65d471c : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_65d4745
        mov dword ptr ds : [edi+4], ecx
        public_65d4745 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65d4758
        mov dword ptr ds : [edi+4], edx
        jmp public_65d4766
        public_65d4758 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_65d4763
        mov dword ptr ds : [edi], edx
        jmp public_65d4766
        public_65d4763 : nop
        mov dword ptr ds : [edi+8], edx
        public_65d4766 : nop
        mov dword ptr ds : [edx], ecx
        public_65d4768 : nop
        mov dword ptr ds : [ecx+4], edx
        public_65d476b : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65d45da
        public_65d4777 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65d4540)
    }
}

#undef public_65d45b2
#undef public_65d45c6
#undef public_65d45cc
#undef public_65d45da
#undef public_65d461b
#undef public_65d4634
#undef public_65d4647
#undef public_65d4652
#undef public_65d4655
#undef public_65d465a
#undef public_65d4683
#undef public_65d469c
#undef public_65d46af
#undef public_65d46b9
#undef public_65d46dc
#undef public_65d46f4
#undef public_65d4707
#undef public_65d4714
#undef public_65d4716
#undef public_65d471c
#undef public_65d4745
#undef public_65d4758
#undef public_65d4763
#undef public_65d4766
#undef public_65d4768
#undef public_65d476b
#undef public_65d4777
