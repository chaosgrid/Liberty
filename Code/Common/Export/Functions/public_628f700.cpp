#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f700);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628f752 _public_628f752
#define public_628f754 _public_628f754
#define public_628f75c _public_628f75c
#define public_628f76e _public_628f76e
#define public_628f77b _public_628f77b
#define public_628f7a0 _public_628f7a0
#define public_628f7b8 _public_628f7b8
#define public_628f7c2 _public_628f7c2
#define public_628f7d0 _public_628f7d0
#define public_628f7ea _public_628f7ea
#define public_628f7f8 _public_628f7f8
#define public_628f814 _public_628f814
#define public_628f82c _public_628f82c
#define public_628f836 _public_628f836
#define public_628f87c _public_628f87c
#define public_628f8a9 _public_628f8a9
#define public_628f8e2 _public_628f8e2
#define public_628f904 _public_628f904
#define public_628f912 _public_628f912
#define public_628f930 _public_628f930
#define public_628f94a _public_628f94a
#define public_628f950 _public_628f950
#define public_628f960 _public_628f960
#define public_628f97d _public_628f97d
#define public_628f98f _public_628f98f
#define public_628f9b0 _public_628f9b0
#define public_628f9d0 _public_628f9d0
#define public_628f9da _public_628f9da
#define public_628f9e5 _public_628f9e5
#define public_628fa07 _public_628fa07
#define public_628fa14 _public_628fa14
#define public_628fa33 _public_628fa33
#define public_628fa36 _public_628fa36

PROC_DECLARE(0x628f700, internal_628f700, public_628f700);
extern "C" NAKED register_t __cdecl internal_628f700()
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
        jae public_628f8a9
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_628f752
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
        jb public_628f754
        public_628f752 : nop
        mov ebp, esi
        public_628f754 : nop
        test edi, edi
        jne public_628f75c
        xor edx, edx
        jmp public_628f76e
        public_628f75c : nop
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_628f76e : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_628f77b
        xor eax, eax
        public_628f77b : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6391d9c
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_628f7c2
        nop 
        lea esp, ss:[esp]
        public_628f7a0 : nop
        test edx, edx
        je public_628f7b8
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_628f7b8 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ebp
        jne public_628f7a0
        public_628f7c2 : nop
        test esi, esi
        mov eax, edx
        jbe public_628f7f8
        mov dword ptr ss : [esp+0x1C], esi
        lea esp, ss:[esp]
        public_628f7d0 : nop
        test eax, eax
        je public_628f7ea
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_628f7ea : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0xC
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_628f7d0
        public_628f7f8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+esi*2]
        shl ecx, 2
        cmp ebp, ebx
        lea edi, ds:[ecx+edx]
        je public_628f836
        mov eax, edi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        public_628f814 : nop
        test edi, edi
        je public_628f82c
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        public_628f82c : nop
        add eax, 0xC
        add edi, 0xC
        cmp eax, ebx
        jne public_628f814
        public_628f836 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+0xC], edx
        jne public_628f87c
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
        public_628f87c : nop
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
        public_628f8a9 : nop
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
        jae public_628f98f
        lea ebp, ds:[esi+esi*2]
        shl ebp, 2
        cmp edi, ecx
        lea edx, ds:[edi+ebp]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        je public_628f912
        mov eax, edx
        sub eax, ebp
        public_628f8e2 : nop
        test edx, edx
        je public_628f904
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
        public_628f904 : nop
        add edx, 0xC
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_628f8e2
        public_628f912 : nop
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
        je public_628f950
        lea ecx, ds:[ecx]
        public_628f930 : nop
        test ebx, ebx
        je public_628f94a
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edx]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_628f94a : nop
        add ebx, 0xC
        dec esi
        jne public_628f930
        public_628f950 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_628f97d
        lea ecx, ds:[ecx]
        public_628f960 : nop
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
        jne public_628f960
        public_628f97d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_628f98f : nop
        test esi, esi
        jbe public_628fa36
        lea esi, ds:[esi+esi*2]
        shl esi, 2
        mov eax, ecx
        sub eax, esi
        cmp eax, ecx
        mov edx, ecx
        mov dword ptr ss : [esp+0x1C], esi
        je public_628f9da
        nop 
        lea esp, ss:[esp]
        public_628f9b0 : nop
        test edx, edx
        je public_628f9d0
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
        public_628f9d0 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ecx
        jne public_628f9b0
        public_628f9da : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, esi
        cmp edi, eax
        je public_628fa07
        public_628f9e5 : nop
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
        jne public_628f9e5
        mov ebx, dword ptr ss : [esp+0x10]
        public_628fa07 : nop
        lea ecx, ds:[esi+edi]
        cmp edi, ecx
        mov eax, edi
        je public_628fa33
        mov edx, dword ptr ss : [esp+0x24]
        public_628fa14 : nop
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
        jne public_628fa14
        mov ebx, dword ptr ss : [esp+0x10]
        public_628fa33 : nop
        add dword ptr ds : [ebx+8], esi
        public_628fa36 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x628f700)
    }
}

#undef public_628f752
#undef public_628f754
#undef public_628f75c
#undef public_628f76e
#undef public_628f77b
#undef public_628f7a0
#undef public_628f7b8
#undef public_628f7c2
#undef public_628f7d0
#undef public_628f7ea
#undef public_628f7f8
#undef public_628f814
#undef public_628f82c
#undef public_628f836
#undef public_628f87c
#undef public_628f8a9
#undef public_628f8e2
#undef public_628f904
#undef public_628f912
#undef public_628f930
#undef public_628f94a
#undef public_628f950
#undef public_628f960
#undef public_628f97d
#undef public_628f98f
#undef public_628f9b0
#undef public_628f9d0
#undef public_628f9da
#undef public_628f9e5
#undef public_628fa07
#undef public_628fa14
#undef public_628fa33
#undef public_628fa36
