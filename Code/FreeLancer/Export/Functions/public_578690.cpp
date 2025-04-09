#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5786c6 _public_5786c6
#define public_5786c8 _public_5786c8
#define public_5786d0 _public_5786d0
#define public_5786d5 _public_5786d5
#define public_5786e1 _public_5786e1
#define public_578702 _public_578702
#define public_578710 _public_578710
#define public_57871a _public_57871a
#define public_578726 _public_578726
#define public_578738 _public_578738
#define public_57873e _public_57873e
#define public_578757 _public_578757
#define public_578765 _public_578765
#define public_57876f _public_57876f
#define public_5787ab _public_5787ab
#define public_5787c8 _public_5787c8
#define public_5787f0 _public_5787f0
#define public_578802 _public_578802
#define public_57880c _public_57880c
#define public_578820 _public_578820
#define public_57882e _public_57882e
#define public_578834 _public_578834
#define public_578840 _public_578840
#define public_578851 _public_578851
#define public_57885e _public_57885e
#define public_578870 _public_578870
#define public_57887e _public_57887e
#define public_578888 _public_578888
#define public_578893 _public_578893
#define public_5788a8 _public_5788a8
#define public_5788b5 _public_5788b5
#define public_5788c6 _public_5788c6
#define public_5788c9 _public_5788c9

PROC_DECLARE(0x578690, internal_578690, public_578690);
extern "C" NAKED register_t __cdecl internal_578690()
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
        sar ecx, 3
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_5787c8
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_5786c6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ebp, ecx
        jb public_5786c8
        public_5786c6 : nop
        mov ecx, ebp
        public_5786c8 : nop
        test edx, edx
        jne public_5786d0
        xor eax, eax
        jmp public_5786d5
        public_5786d0 : nop
        sub eax, edx
        sar eax, 3
        public_5786d5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5786e1
        xor eax, eax
        public_5786e1 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_57871a
        public_578702 : nop
        test ecx, ecx
        je public_578710
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_578710 : nop
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_578702
        public_57871a : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_57873e
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_578726 : nop
        test eax, eax
        je public_578738
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_578738 : nop
        add eax, 8
        dec edx
        jne public_578726
        public_57873e : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*8]
        lea edx, ds:[esi+ecx]
        je public_57876f
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_578757 : nop
        test edx, edx
        je public_578765
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_578765 : nop
        add eax, 8
        add edx, 8
        cmp eax, edi
        jne public_578757
        public_57876f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_5787ab
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_5787ab : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_5787c8 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 3
        cmp ecx, ebp
        jae public_57885e
        cmp esi, eax
        lea ebx, ds:[ebp*8]
        lea edx, ds:[ebx+esi]
        je public_57880c
        mov ecx, edx
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_5787f0 : nop
        test edx, edx
        je public_578802
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_578802 : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_5787f0
        public_57880c : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        sub edx, esi
        sar edx, 3
        sub ebp, edx
        mov edx, dword ptr ss : [esp+0x24]
        je public_578834
        mov edi, edi
        public_578820 : nop
        test eax, eax
        je public_57882e
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        public_57882e : nop
        add eax, 8
        dec ebp
        jne public_578820
        public_578834 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_578851
        lea ecx, ds:[ecx]
        public_578840 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_578840
        public_578851 : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_57885e : nop
        test ebp, ebp
        jbe public_5788c9
        shl ebp, 3
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov edx, eax
        je public_578888
        nop 
        public_578870 : nop
        test edx, edx
        je public_57887e
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        public_57887e : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_578870
        public_578888 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp esi, eax
        je public_5788a8
        public_578893 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_578893
        public_5788a8 : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_5788c6
        mov ecx, dword ptr ss : [esp+0x24]
        public_5788b5 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, edx
        jne public_5788b5
        public_5788c6 : nop
        add dword ptr ds : [edi+8], ebp
        public_5788c9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x578690)
    }
}

#undef public_5786c6
#undef public_5786c8
#undef public_5786d0
#undef public_5786d5
#undef public_5786e1
#undef public_578702
#undef public_578710
#undef public_57871a
#undef public_578726
#undef public_578738
#undef public_57873e
#undef public_578757
#undef public_578765
#undef public_57876f
#undef public_5787ab
#undef public_5787c8
#undef public_5787f0
#undef public_578802
#undef public_57880c
#undef public_578820
#undef public_57882e
#undef public_578834
#undef public_578840
#undef public_578851
#undef public_57885e
#undef public_578870
#undef public_57887e
#undef public_578888
#undef public_578893
#undef public_5788a8
#undef public_5788b5
#undef public_5788c6
#undef public_5788c9
