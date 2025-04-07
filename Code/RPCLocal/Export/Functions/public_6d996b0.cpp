#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d996b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d996e6 _public_6d996e6
#define public_6d996e8 _public_6d996e8
#define public_6d996f0 _public_6d996f0
#define public_6d996f5 _public_6d996f5
#define public_6d99701 _public_6d99701
#define public_6d99722 _public_6d99722
#define public_6d9972a _public_6d9972a
#define public_6d99734 _public_6d99734
#define public_6d99740 _public_6d99740
#define public_6d9974c _public_6d9974c
#define public_6d99752 _public_6d99752
#define public_6d99770 _public_6d99770
#define public_6d99778 _public_6d99778
#define public_6d99782 _public_6d99782
#define public_6d997be _public_6d997be
#define public_6d997db _public_6d997db
#define public_6d99800 _public_6d99800
#define public_6d9980c _public_6d9980c
#define public_6d99816 _public_6d99816
#define public_6d99828 _public_6d99828
#define public_6d99830 _public_6d99830
#define public_6d99836 _public_6d99836
#define public_6d99840 _public_6d99840
#define public_6d9984b _public_6d9984b
#define public_6d99858 _public_6d99858
#define public_6d99870 _public_6d99870
#define public_6d99878 _public_6d99878
#define public_6d99882 _public_6d99882
#define public_6d99890 _public_6d99890
#define public_6d9989f _public_6d9989f
#define public_6d998b0 _public_6d998b0
#define public_6d998bb _public_6d998bb
#define public_6d998be _public_6d998be

PROC_DECLARE(0x6d996b0, internal_6d996b0, public_6d996b0);
extern "C" NAKED register_t __cdecl internal_6d996b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6d997db
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6d996e6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6d996e8
        public_6d996e6 : nop
        mov ecx, ebp
        public_6d996e8 : nop
        test edx, edx
        jne public_6d996f0
        xor eax, eax
        jmp public_6d996f5
        public_6d996f0 : nop
        sub eax, edx
        sar eax, 2
        public_6d996f5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6d99701
        xor eax, eax
        public_6d99701 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6db1f8a
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6d99734
        public_6d99722 : nop
        test ecx, ecx
        je public_6d9972a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6d9972a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6d99722
        public_6d99734 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6d99752
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6d99740 : nop
        test eax, eax
        je public_6d9974c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d9974c : nop
        add eax, 4
        dec edx
        jne public_6d99740
        public_6d99752 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6d99782
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6d99770 : nop
        test edx, edx
        je public_6d99778
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6d99778 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6d99770
        public_6d99782 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6db1dc2
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d997be
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6d997be : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6d997db : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6d99858
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6d99816
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6d99800 : nop
        test esi, esi
        je public_6d9980c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d9980c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6d99800
        public_6d99816 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6d99836
        public_6d99828 : nop
        test eax, eax
        je public_6d99830
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6d99830 : nop
        add eax, 4
        dec ebp
        jne public_6d99828
        public_6d99836 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6d9984b
        nop 
        public_6d99840 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d99840
        public_6d9984b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6d99858 : nop
        test ebp, ebp
        jbe public_6d998be
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6d99882
        lea esp, ss:[esp]
        public_6d99870 : nop
        test esi, esi
        je public_6d99878
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6d99878 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6d99870
        public_6d99882 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6d9989f
        lea ecx, ds:[ecx]
        public_6d99890 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6d99890
        public_6d9989f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6d998bb
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6d998b0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6d998b0
        public_6d998bb : nop
        add dword ptr ds : [edi+8], ebp
        public_6d998be : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d996b0)
    }
}

#undef public_6d996e6
#undef public_6d996e8
#undef public_6d996f0
#undef public_6d996f5
#undef public_6d99701
#undef public_6d99722
#undef public_6d9972a
#undef public_6d99734
#undef public_6d99740
#undef public_6d9974c
#undef public_6d99752
#undef public_6d99770
#undef public_6d99778
#undef public_6d99782
#undef public_6d997be
#undef public_6d997db
#undef public_6d99800
#undef public_6d9980c
#undef public_6d99816
#undef public_6d99828
#undef public_6d99830
#undef public_6d99836
#undef public_6d99840
#undef public_6d9984b
#undef public_6d99858
#undef public_6d99870
#undef public_6d99878
#undef public_6d99882
#undef public_6d99890
#undef public_6d9989f
#undef public_6d998b0
#undef public_6d998bb
#undef public_6d998be
