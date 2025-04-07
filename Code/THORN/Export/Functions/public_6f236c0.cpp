#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f236c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f23712 _public_6f23712
#define public_6f23714 _public_6f23714
#define public_6f2371c _public_6f2371c
#define public_6f2372e _public_6f2372e
#define public_6f2373b _public_6f2373b
#define public_6f23760 _public_6f23760
#define public_6f23778 _public_6f23778
#define public_6f23782 _public_6f23782
#define public_6f23790 _public_6f23790
#define public_6f237aa _public_6f237aa
#define public_6f237b8 _public_6f237b8
#define public_6f237d4 _public_6f237d4
#define public_6f237ec _public_6f237ec
#define public_6f237f6 _public_6f237f6
#define public_6f2383c _public_6f2383c
#define public_6f23869 _public_6f23869
#define public_6f238a2 _public_6f238a2
#define public_6f238c4 _public_6f238c4
#define public_6f238d2 _public_6f238d2
#define public_6f238f0 _public_6f238f0
#define public_6f2390a _public_6f2390a
#define public_6f23910 _public_6f23910
#define public_6f23920 _public_6f23920
#define public_6f2393d _public_6f2393d
#define public_6f2394f _public_6f2394f
#define public_6f23970 _public_6f23970
#define public_6f23990 _public_6f23990
#define public_6f2399a _public_6f2399a
#define public_6f239a5 _public_6f239a5
#define public_6f239c7 _public_6f239c7
#define public_6f239d4 _public_6f239d4
#define public_6f239f3 _public_6f239f3
#define public_6f239f6 _public_6f239f6

PROC_DECLARE(0x6f236c0, internal_6f236c0, public_6f236c0);
extern "C" NAKED register_t __cdecl internal_6f236c0()
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
        jae public_6f23869
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_6f23712
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
        jb public_6f23714
        public_6f23712 : nop
        mov ebp, esi
        public_6f23714 : nop
        test edi, edi
        jne public_6f2371c
        xor edx, edx
        jmp public_6f2372e
        public_6f2371c : nop
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f2372e : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f2373b
        xor eax, eax
        public_6f2373b : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6f57e9c
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_6f23782
        nop 
        lea esp, ss:[esp]
        public_6f23760 : nop
        test edx, edx
        je public_6f23778
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_6f23778 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ebp
        jne public_6f23760
        public_6f23782 : nop
        test esi, esi
        mov eax, edx
        jbe public_6f237b8
        mov dword ptr ss : [esp+0x1C], esi
        lea esp, ss:[esp]
        public_6f23790 : nop
        test eax, eax
        je public_6f237aa
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        public_6f237aa : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0xC
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f23790
        public_6f237b8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+esi*2]
        shl ecx, 2
        cmp ebp, ebx
        lea edi, ds:[ecx+edx]
        je public_6f237f6
        mov eax, edi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        public_6f237d4 : nop
        test edi, edi
        je public_6f237ec
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        public_6f237ec : nop
        add eax, 0xC
        add edi, 0xC
        cmp eax, ebx
        jne public_6f237d4
        public_6f237f6 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [edi+0xC], edx
        jne public_6f2383c
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
        public_6f2383c : nop
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
        public_6f23869 : nop
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
        jae public_6f2394f
        lea ebp, ds:[esi+esi*2]
        shl ebp, 2
        cmp edi, ecx
        lea edx, ds:[edi+ebp]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        je public_6f238d2
        mov eax, edx
        sub eax, ebp
        public_6f238a2 : nop
        test edx, edx
        je public_6f238c4
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
        public_6f238c4 : nop
        add edx, 0xC
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f238a2
        public_6f238d2 : nop
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
        je public_6f23910
        lea ecx, ds:[ecx]
        public_6f238f0 : nop
        test ebx, ebx
        je public_6f2390a
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edx]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6f2390a : nop
        add ebx, 0xC
        dec esi
        jne public_6f238f0
        public_6f23910 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f2393d
        lea ecx, ds:[ecx]
        public_6f23920 : nop
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
        jne public_6f23920
        public_6f2393d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebp
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f2394f : nop
        test esi, esi
        jbe public_6f239f6
        lea esi, ds:[esi+esi*2]
        shl esi, 2
        mov eax, ecx
        sub eax, esi
        cmp eax, ecx
        mov edx, ecx
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f2399a
        nop 
        lea esp, ss:[esp]
        public_6f23970 : nop
        test edx, edx
        je public_6f23990
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
        public_6f23990 : nop
        add eax, 0xC
        add edx, 0xC
        cmp eax, ecx
        jne public_6f23970
        public_6f2399a : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, esi
        cmp edi, eax
        je public_6f239c7
        public_6f239a5 : nop
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
        jne public_6f239a5
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f239c7 : nop
        lea ecx, ds:[esi+edi]
        cmp edi, ecx
        mov eax, edi
        je public_6f239f3
        mov edx, dword ptr ss : [esp+0x24]
        public_6f239d4 : nop
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
        jne public_6f239d4
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f239f3 : nop
        add dword ptr ds : [ebx+8], esi
        public_6f239f6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f236c0)
    }
}

#undef public_6f23712
#undef public_6f23714
#undef public_6f2371c
#undef public_6f2372e
#undef public_6f2373b
#undef public_6f23760
#undef public_6f23778
#undef public_6f23782
#undef public_6f23790
#undef public_6f237aa
#undef public_6f237b8
#undef public_6f237d4
#undef public_6f237ec
#undef public_6f237f6
#undef public_6f2383c
#undef public_6f23869
#undef public_6f238a2
#undef public_6f238c4
#undef public_6f238d2
#undef public_6f238f0
#undef public_6f2390a
#undef public_6f23910
#undef public_6f23920
#undef public_6f2393d
#undef public_6f2394f
#undef public_6f23970
#undef public_6f23990
#undef public_6f2399a
#undef public_6f239a5
#undef public_6f239c7
#undef public_6f239d4
#undef public_6f239f3
#undef public_6f239f6
