#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4a36d4 _public_4a36d4
#define public_4a36d6 _public_4a36d6
#define public_4a36de _public_4a36de
#define public_4a36f1 _public_4a36f1
#define public_4a36fe _public_4a36fe
#define public_4a3720 _public_4a3720
#define public_4a3733 _public_4a3733
#define public_4a3741 _public_4a3741
#define public_4a3750 _public_4a3750
#define public_4a3765 _public_4a3765
#define public_4a376b _public_4a376b
#define public_4a3790 _public_4a3790
#define public_4a37a7 _public_4a37a7
#define public_4a37b1 _public_4a37b1
#define public_4a37f0 _public_4a37f0
#define public_4a381f _public_4a381f
#define public_4a3856 _public_4a3856
#define public_4a386d _public_4a386d
#define public_4a3877 _public_4a3877
#define public_4a38a0 _public_4a38a0
#define public_4a38b7 _public_4a38b7
#define public_4a38bd _public_4a38bd
#define public_4a38c6 _public_4a38c6
#define public_4a38dc _public_4a38dc
#define public_4a38f2 _public_4a38f2
#define public_4a3910 _public_4a3910
#define public_4a3927 _public_4a3927
#define public_4a3931 _public_4a3931
#define public_4a3940 _public_4a3940
#define public_4a395f _public_4a395f
#define public_4a3970 _public_4a3970
#define public_4a3986 _public_4a3986
#define public_4a3989 _public_4a3989

PROC_DECLARE(0x4a3680, internal_4a3680, public_4a3680);
extern "C" NAKED register_t __cdecl internal_4a3680()
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
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_4a381f
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_4a36d4
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_4a36d6
        public_4a36d4 : nop
        mov ecx, ebp
        public_4a36d6 : nop
        test esi, esi
        jne public_4a36de
        xor edx, edx
        jmp public_4a36f1
        public_4a36de : nop
        sub ebx, esi
        mov eax, 0x2AAAAAAB
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4a36f1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_4a36fe
        xor eax, eax
        public_4a36fe : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_4a3741
        mov edi, edi
        public_4a3720 : nop
        test edx, edx
        je public_4a3733
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4a3733 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x18
        add edx, 0x18
        cmp eax, ecx
        jne public_4a3720
        public_4a3741 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_4a376b
        mov ebx, ebp
        lea esp, ss:[esp]
        public_4a3750 : nop
        test eax, eax
        je public_4a3765
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 6
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4a3765 : nop
        add eax, 0x18
        dec ebx
        jne public_4a3750
        public_4a376b : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*2]
        shl ecx, 3
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_4a37b1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_4a3790 : nop
        test ebx, ebx
        je public_4a37a7
        mov ecx, 6
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_4a37a7 : nop
        add eax, 0x18
        add ebx, 0x18
        cmp eax, esi
        jne public_4a3790
        public_4a37b1 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_4a37f0
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*2]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_4a37f0 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*2]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_4a381f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_4a38f2
        lea ecx, ss:[ebp+ebp*2]
        shl ecx, 3
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_4a3877
        mov edx, eax
        sub edx, ecx
        public_4a3856 : nop
        test eax, eax
        je public_4a386d
        mov ecx, 6
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_4a386d : nop
        add edx, 0x18
        add eax, 0x18
        cmp edx, ebx
        jne public_4a3856
        public_4a3877 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_4a38bd
        lea esp, ss:[esp]
        public_4a38a0 : nop
        test ebx, ebx
        je public_4a38b7
        mov ecx, 6
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_4a38b7 : nop
        add ebx, 0x18
        dec eax
        jne public_4a38a0
        public_4a38bd : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_4a38dc
        public_4a38c6 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        mov esi, ebp
        rep movsd
        jne public_4a38c6
        mov edi, dword ptr ss : [esp+0x10]
        public_4a38dc : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_4a38f2 : nop
        test ebp, ebp
        jbe public_4a3989
        lea ebp, ss:[ebp+ebp*2]
        shl ebp, 3
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_4a3931
        nop 
        lea esp, ss:[esp]
        public_4a3910 : nop
        test edx, edx
        je public_4a3927
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_4a3927 : nop
        add eax, 0x18
        add edx, 0x18
        cmp eax, ebx
        jne public_4a3910
        public_4a3931 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_4a395f
        lea esp, ss:[esp]
        public_4a3940 : nop
        sub eax, 0x18
        sub edx, 0x18
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_4a3940
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_4a395f : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_4a3986
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_4a3970 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        mov esi, ebx
        rep movsd
        jne public_4a3970
        mov edi, dword ptr ss : [esp+0x10]
        public_4a3986 : nop
        add dword ptr ds : [edi+8], ebp
        public_4a3989 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x4a3680)
    }
}

#undef public_4a36d4
#undef public_4a36d6
#undef public_4a36de
#undef public_4a36f1
#undef public_4a36fe
#undef public_4a3720
#undef public_4a3733
#undef public_4a3741
#undef public_4a3750
#undef public_4a3765
#undef public_4a376b
#undef public_4a3790
#undef public_4a37a7
#undef public_4a37b1
#undef public_4a37f0
#undef public_4a381f
#undef public_4a3856
#undef public_4a386d
#undef public_4a3877
#undef public_4a38a0
#undef public_4a38b7
#undef public_4a38bd
#undef public_4a38c6
#undef public_4a38dc
#undef public_4a38f2
#undef public_4a3910
#undef public_4a3927
#undef public_4a3931
#undef public_4a3940
#undef public_4a395f
#undef public_4a3970
#undef public_4a3986
#undef public_4a3989
