#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef892c _public_6ef892c
#define public_6ef8934 _public_6ef8934
#define public_6ef893f _public_6ef893f
#define public_6ef8947 _public_6ef8947
#define public_6ef8954 _public_6ef8954
#define public_6ef8968 _public_6ef8968
#define public_6ef8982 _public_6ef8982
#define public_6ef899b _public_6ef899b
#define public_6ef89a3 _public_6ef89a3
#define public_6ef89ab _public_6ef89ab
#define public_6ef89b3 _public_6ef89b3
#define public_6ef89bb _public_6ef89bb
#define public_6ef89cb _public_6ef89cb
#define public_6ef89d3 _public_6ef89d3
#define public_6ef89e0 _public_6ef89e0
#define public_6ef89f4 _public_6ef89f4
#define public_6ef8a00 _public_6ef8a00
#define public_6ef8a0e _public_6ef8a0e
#define public_6ef8a18 _public_6ef8a18
#define public_6ef8a32 _public_6ef8a32
#define public_6ef8a4b _public_6ef8a4b
#define public_6ef8a5f _public_6ef8a5f
#define public_6ef8a67 _public_6ef8a67
#define public_6ef8a6d _public_6ef8a6d
#define public_6ef8a90 _public_6ef8a90
#define public_6ef8a9e _public_6ef8a9e
#define public_6ef8aa8 _public_6ef8aa8
#define public_6ef8aae _public_6ef8aae

PROC_DECLARE(0x6ef8910, internal_6ef8910, public_6ef8910);
extern "C" NAKED register_t __cdecl internal_6ef8910()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, edi
        je public_6ef8aae
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ef892c
        xor esi, esi
        jmp public_6ef8934
        public_6ef892c : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_6ef8934 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6ef893f
        xor ecx, ecx
        jmp public_6ef8947
        public_6ef893f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 3
        public_6ef8947 : nop
        cmp esi, ecx
        ja public_6ef899b
        mov esi, dword ptr ds : [edi+8]
        cmp eax, esi
        mov ecx, edx
        je public_6ef8968
        public_6ef8954 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jne public_6ef8954
        public_6ef8968 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ef8982
        mov eax, dword ptr ds : [ebx+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*8]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6ef8982 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar edi, 3
        lea ecx, ds:[eax+edi*8]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6ef899b : nop
        test eax, eax
        jne public_6ef89a3
        xor esi, esi
        jmp public_6ef89ab
        public_6ef89a3 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 3
        public_6ef89ab : nop
        test edx, edx
        jne public_6ef89b3
        xor ecx, ecx
        jmp public_6ef89bb
        public_6ef89b3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 3
        public_6ef89bb : nop
        cmp esi, ecx
        ja public_6ef8a4b
        test edx, edx
        jne public_6ef89cb
        xor ecx, ecx
        jmp public_6ef89d3
        public_6ef89cb : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 3
        public_6ef89d3 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_6ef89f4
        lea ebx, ds:[ebx]
        public_6ef89e0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_6ef89e0
        public_6ef89f4 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ecx, esi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6ef8a18
        public_6ef8a00 : nop
        test edx, edx
        je public_6ef8a0e
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6ef8a0e : nop
        add eax, 8
        add edx, 8
        cmp eax, esi
        jne public_6ef8a00
        public_6ef8a18 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ef8a32
        mov edx, dword ptr ds : [ebx+4]
        xor edi, edi
        lea eax, ds:[edx+edi*8]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6ef8a32 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub edi, eax
        sar edi, 3
        lea eax, ds:[edx+edi*8]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6ef8a4b : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ef8a5f
        xor eax, eax
        jmp public_6ef8a67
        public_6ef8a5f : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        public_6ef8a67 : nop
        test eax, eax
        jge public_6ef8a6d
        xor eax, eax
        public_6ef8a6d : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, edx
        je public_6ef8aa8
        lea esp, ss:[esp]
        public_6ef8a90 : nop
        test ecx, ecx
        je public_6ef8a9e
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6ef8a9e : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ef8a90
        public_6ef8aa8 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_6ef8aae : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef8910)
    }
}

#undef public_6ef892c
#undef public_6ef8934
#undef public_6ef893f
#undef public_6ef8947
#undef public_6ef8954
#undef public_6ef8968
#undef public_6ef8982
#undef public_6ef899b
#undef public_6ef89a3
#undef public_6ef89ab
#undef public_6ef89b3
#undef public_6ef89bb
#undef public_6ef89cb
#undef public_6ef89d3
#undef public_6ef89e0
#undef public_6ef89f4
#undef public_6ef8a00
#undef public_6ef8a0e
#undef public_6ef8a18
#undef public_6ef8a32
#undef public_6ef8a4b
#undef public_6ef8a5f
#undef public_6ef8a67
#undef public_6ef8a6d
#undef public_6ef8a90
#undef public_6ef8a9e
#undef public_6ef8aa8
#undef public_6ef8aae
