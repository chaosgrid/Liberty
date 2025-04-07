#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6f432 _public_6f6f432
#define public_6f6f434 _public_6f6f434
#define public_6f6f43c _public_6f6f43c
#define public_6f6f44e _public_6f6f44e
#define public_6f6f45b _public_6f6f45b
#define public_6f6f480 _public_6f6f480
#define public_6f6f498 _public_6f6f498
#define public_6f6f4a2 _public_6f6f4a2
#define public_6f6f4b0 _public_6f6f4b0
#define public_6f6f4ca _public_6f6f4ca
#define public_6f6f4d8 _public_6f6f4d8
#define public_6f6f4f4 _public_6f6f4f4
#define public_6f6f50c _public_6f6f50c
#define public_6f6f516 _public_6f6f516
#define public_6f6f55c _public_6f6f55c
#define public_6f6f589 _public_6f6f589
#define public_6f6f5c2 _public_6f6f5c2
#define public_6f6f5e4 _public_6f6f5e4
#define public_6f6f5f2 _public_6f6f5f2
#define public_6f6f610 _public_6f6f610
#define public_6f6f62a _public_6f6f62a
#define public_6f6f630 _public_6f6f630
#define public_6f6f640 _public_6f6f640
#define public_6f6f65d _public_6f6f65d
#define public_6f6f66f _public_6f6f66f
#define public_6f6f690 _public_6f6f690
#define public_6f6f6b0 _public_6f6f6b0
#define public_6f6f6ba _public_6f6f6ba
#define public_6f6f6c5 _public_6f6f6c5
#define public_6f6f6e7 _public_6f6f6e7
#define public_6f6f6f4 _public_6f6f6f4
#define public_6f6f713 _public_6f6f713
#define public_6f6f716 _public_6f6f716

PROC_DECLARE(0x6f6f3e0, internal_6f6f3e0, public_6f6f3e0);
extern "C" NAKED register_t __cdecl internal_6f6f3e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        push ebp
        shr eax, 0x1F
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        add edx, eax
        cmp edx, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        jae public_6f6f589
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_6f6f432
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        mov ebp, edx
        jb public_6f6f434
        public_6f6f432 : nop
        mov ebp, esi
        public_6f6f434 : nop
        test edi, edi
        jne public_6f6f43c
        xor edx, edx
        jmp public_6f6f44e
        public_6f6f43c : nop
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f6f44e : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f6f45b
        xor eax, eax
        public_6f6f45b : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_6f6f4a2
        nop 
        lea esp, ss:[esp]
        public_6f6f480 : nop
        test edx, edx
        je public_6f6f498
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_6f6f498 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ebp
        jne public_6f6f480
        public_6f6f4a2 : nop
        test esi, esi
        mov eax, edx
        jbe public_6f6f4d8
        mov dword ptr ss : [esp+0x1C], esi
        lea esp, ss:[esp]
        public_6f6f4b0 : nop
        test eax, eax
        je public_6f6f4ca
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_6f6f4ca : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0xC
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f6f4b0
        public_6f6f4d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+esi*2]
        shl ecx, 2
        cmp ebp, ebx
        lea edi, ds:[ecx+edx]
        je public_6f6f516
        mov eax, edi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        public_6f6f4f4 : nop
        test edi, edi
        je public_6f6f50c
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        public_6f6f50c : nop
        add eax, 0xC
        add edi, 0xC
        cmp eax, ebx
        jne public_6f6f4f4
        public_6f6f516 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+0xC], edx
        jne public_6f6f55c
        xor edx, edx
        add esi, edx
        lea ecx, ds:[esi+esi*2]
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f6f55c : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add esi, edx
        lea ecx, ds:[esi+esi*2]
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f6f589 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        jae public_6f6f66f
        lea ebp, ds:[esi+esi*2]
        shl ebp, 2
        cmp edi, ecx
        lea edx, ds:[edi+ebp]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        je public_6f6f5f2
        mov eax, edx
        sub eax, ebp
        public_6f6f5c2 : nop
        test edx, edx
        je public_6f6f5e4
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], ebx
        mov edx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f6f5e4 : nop
        add edx, 0xC
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f6f5c2
        public_6f6f5f2 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub esi, edx
        je public_6f6f630
        lea ecx, ds:[ecx]
        public_6f6f610 : nop
        test ebx, ebx
        je public_6f6f62a
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edx]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6f6f62a : nop
        add ebx, 0xC
        dec esi
        jne public_6f6f610
        public_6f6f630 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f6f65d
        lea ecx, ds:[ecx]
        public_6f6f640 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edi+8], edx
        jne public_6f6f640
        public_6f6f65d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f6f66f : nop
        test esi, esi
        jbe public_6f6f716
        lea esi, ds:[esi+esi*2]
        shl esi, 2
        mov eax, ecx
        sub eax, esi
        cmp eax, ecx
        mov edx, ecx
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f6f6ba
        nop 
        lea esp, ss:[esp]
        public_6f6f690 : nop
        test edx, edx
        je public_6f6f6b0
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f6f6b0 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ecx
        jne public_6f6f690
        public_6f6f6ba : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, esi
        cmp edi, eax
        je public_6f6f6e7
        public_6f6f6c5 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_6f6f6c5
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f6f6e7 : nop
        lea ecx, ds:[esi+edi]
        cmp edi, ecx
        mov eax, edi
        je public_6f6f713
        mov edx, dword ptr ss : [esp+0x24]
        public_6f6f6f4 : nop
        mov edi, edx
        mov ebp, dword ptr ds : [edi]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], edi
        jne public_6f6f6f4
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f6f713 : nop
        add dword ptr ds : [ebx+8], esi
        public_6f6f716 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f3e0)
    }
}

#undef public_6f6f432
#undef public_6f6f434
#undef public_6f6f43c
#undef public_6f6f44e
#undef public_6f6f45b
#undef public_6f6f480
#undef public_6f6f498
#undef public_6f6f4a2
#undef public_6f6f4b0
#undef public_6f6f4ca
#undef public_6f6f4d8
#undef public_6f6f4f4
#undef public_6f6f50c
#undef public_6f6f516
#undef public_6f6f55c
#undef public_6f6f589
#undef public_6f6f5c2
#undef public_6f6f5e4
#undef public_6f6f5f2
#undef public_6f6f610
#undef public_6f6f62a
#undef public_6f6f630
#undef public_6f6f640
#undef public_6f6f65d
#undef public_6f6f66f
#undef public_6f6f690
#undef public_6f6f6b0
#undef public_6f6f6ba
#undef public_6f6f6c5
#undef public_6f6f6e7
#undef public_6f6f6f4
#undef public_6f6f713
#undef public_6f6f716
