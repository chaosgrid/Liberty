#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f810);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6f833 _public_6f6f833
#define public_6f6f852 _public_6f6f852
#define public_6f6f85a _public_6f6f85a
#define public_6f6f865 _public_6f6f865
#define public_6f6f86d _public_6f6f86d
#define public_6f6f878 _public_6f6f878
#define public_6f6f886 _public_6f6f886
#define public_6f6f89c _public_6f6f89c
#define public_6f6f8b2 _public_6f6f8b2
#define public_6f6f8ba _public_6f6f8ba
#define public_6f6f8c2 _public_6f6f8c2
#define public_6f6f8ca _public_6f6f8ca
#define public_6f6f8d2 _public_6f6f8d2
#define public_6f6f8e2 _public_6f6f8e2
#define public_6f6f8ea _public_6f6f8ea
#define public_6f6f8f1 _public_6f6f8f1
#define public_6f6f8ff _public_6f6f8ff
#define public_6f6f910 _public_6f6f910
#define public_6f6f924 _public_6f6f924
#define public_6f6f942 _public_6f6f942
#define public_6f6f959 _public_6f6f959
#define public_6f6f970 _public_6f6f970
#define public_6f6f994 _public_6f6f994
#define public_6f6f9c4 _public_6f6f9c4

PROC_DECLARE(0x6f6f810, internal_6f6f810, public_6f6f810);
extern "C" NAKED register_t __cdecl internal_6f6f810()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        je public_6f6f9c4
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+8]
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[eax+8]
        public_6f6f833 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        lea edx, ss:[ebp-4]
        lea eax, ds:[edi-4]
        cmp edx, eax
        lea ebx, ss:[ebp-4]
        je public_6f6f994
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6f6f852
        xor esi, esi
        jmp public_6f6f85a
        public_6f6f852 : nop
        mov esi, dword ptr ds : [edi+4]
        sub esi, eax
        sar esi, 2
        public_6f6f85a : nop
        mov edx, dword ptr ss : [ebp]
        test edx, edx
        jne public_6f6f865
        xor ecx, ecx
        jmp public_6f6f86d
        public_6f6f865 : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub ecx, edx
        sar ecx, 2
        public_6f6f86d : nop
        cmp esi, ecx
        ja public_6f6f8b2
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_6f6f886
        public_6f6f878 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f6f878
        public_6f6f886 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_6f6f89c
        mov ecx, dword ptr ss : [ebp]
        xor eax, eax
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f6f994
        public_6f6f89c : nop
        mov eax, dword ptr ds : [edi+4]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp]
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f6f994
        public_6f6f8b2 : nop
        test eax, eax
        jne public_6f6f8ba
        xor esi, esi
        jmp public_6f6f8c2
        public_6f6f8ba : nop
        mov esi, dword ptr ds : [edi+4]
        sub esi, eax
        sar esi, 2
        public_6f6f8c2 : nop
        test edx, edx
        jne public_6f6f8ca
        xor ecx, ecx
        jmp public_6f6f8d2
        public_6f6f8ca : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f6f8d2 : nop
        cmp esi, ecx
        ja public_6f6f959
        test edx, edx
        jne public_6f6f8e2
        xor ecx, ecx
        jmp public_6f6f8ea
        public_6f6f8e2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub ecx, edx
        sar ecx, 2
        public_6f6f8ea : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f6f8ff
        public_6f6f8f1 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f6f8f1
        public_6f6f8ff : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        lea eax, ds:[edi-4]
        mov edi, dword ptr ss : [ebp+4]
        mov esi, ecx
        je public_6f6f924
        mov edi, edi
        public_6f6f910 : nop
        push esi
        push edi
        call public_6eb6740
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6f6f910
        public_6f6f924 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        add eax, 0xFFFFFFFC
        test ecx, ecx
        jne public_6f6f942
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f6f994
        public_6f6f942 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x10]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp]
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f6f994
        public_6f6f959 : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        test eax, eax
        jge public_6f6f970
        xor eax, eax
        public_6f6f970 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        public_6f6f994 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add ecx, 0x14
        add eax, 0x14
        add edi, 0x14
        add ebp, 0x14
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], edi
        jne public_6f6f833
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f6f9c4 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f6f810)
    }
}

#undef public_6f6f833
#undef public_6f6f852
#undef public_6f6f85a
#undef public_6f6f865
#undef public_6f6f86d
#undef public_6f6f878
#undef public_6f6f886
#undef public_6f6f89c
#undef public_6f6f8b2
#undef public_6f6f8ba
#undef public_6f6f8c2
#undef public_6f6f8ca
#undef public_6f6f8d2
#undef public_6f6f8e2
#undef public_6f6f8ea
#undef public_6f6f8f1
#undef public_6f6f8ff
#undef public_6f6f910
#undef public_6f6f924
#undef public_6f6f942
#undef public_6f6f959
#undef public_6f6f970
#undef public_6f6f994
#undef public_6f6f9c4
