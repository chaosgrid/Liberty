#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_477564 _public_477564
#define public_477566 _public_477566
#define public_47756e _public_47756e
#define public_477581 _public_477581
#define public_47758e _public_47758e
#define public_4775b0 _public_4775b0
#define public_4775c3 _public_4775c3
#define public_4775d1 _public_4775d1
#define public_4775e0 _public_4775e0
#define public_4775f5 _public_4775f5
#define public_4775fb _public_4775fb
#define public_477620 _public_477620
#define public_477637 _public_477637
#define public_477641 _public_477641
#define public_477680 _public_477680
#define public_4776af _public_4776af
#define public_4776e6 _public_4776e6
#define public_4776fd _public_4776fd
#define public_477707 _public_477707
#define public_477730 _public_477730
#define public_477747 _public_477747
#define public_47774d _public_47774d
#define public_477756 _public_477756
#define public_47776c _public_47776c
#define public_477782 _public_477782
#define public_4777a0 _public_4777a0
#define public_4777b7 _public_4777b7
#define public_4777c1 _public_4777c1
#define public_4777d0 _public_4777d0
#define public_4777ef _public_4777ef
#define public_477800 _public_477800
#define public_477816 _public_477816
#define public_477819 _public_477819

PROC_DECLARE(0x477510, internal_477510, public_477510);
extern "C" NAKED register_t __cdecl internal_477510()
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
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_4776af
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_477564
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_477566
        public_477564 : nop
        mov ecx, ebp
        public_477566 : nop
        test esi, esi
        jne public_47756e
        xor edx, edx
        jmp public_477581
        public_47756e : nop
        sub ebx, esi
        mov eax, 0x66666667
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_477581 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_47758e
        xor eax, eax
        public_47758e : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_4775d1
        mov edi, edi
        public_4775b0 : nop
        test edx, edx
        je public_4775c3
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4775c3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        add edx, 0x14
        cmp eax, ecx
        jne public_4775b0
        public_4775d1 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_4775fb
        mov ebx, ebp
        lea esp, ss:[esp]
        public_4775e0 : nop
        test eax, eax
        je public_4775f5
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4775f5 : nop
        add eax, 0x14
        dec ebx
        jne public_4775e0
        public_4775fb : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_477641
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_477620 : nop
        test ebx, ebx
        je public_477637
        mov ecx, 5
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_477637 : nop
        add eax, 0x14
        add ebx, 0x14
        cmp eax, esi
        jne public_477620
        public_477641 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_477680
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_477680 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_4776af : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_477782
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_477707
        mov edx, eax
        sub edx, ecx
        public_4776e6 : nop
        test eax, eax
        je public_4776fd
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_4776fd : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_4776e6
        public_477707 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_47774d
        lea esp, ss:[esp]
        public_477730 : nop
        test ebx, ebx
        je public_477747
        mov ecx, 5
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_477747 : nop
        add ebx, 0x14
        dec eax
        jne public_477730
        public_47774d : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_47776c
        public_477756 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebp
        rep movsd
        jne public_477756
        mov edi, dword ptr ss : [esp+0x10]
        public_47776c : nop
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
        public_477782 : nop
        test ebp, ebp
        jbe public_477819
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 2
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_4777c1
        nop 
        lea esp, ss:[esp]
        public_4777a0 : nop
        test edx, edx
        je public_4777b7
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_4777b7 : nop
        add eax, 0x14
        add edx, 0x14
        cmp eax, ebx
        jne public_4777a0
        public_4777c1 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_4777ef
        lea esp, ss:[esp]
        public_4777d0 : nop
        sub eax, 0x14
        sub edx, 0x14
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_4777d0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_4777ef : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_477816
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_477800 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebx
        rep movsd
        jne public_477800
        mov edi, dword ptr ss : [esp+0x10]
        public_477816 : nop
        add dword ptr ds : [edi+8], ebp
        public_477819 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x477510)
    }
}

#undef public_477564
#undef public_477566
#undef public_47756e
#undef public_477581
#undef public_47758e
#undef public_4775b0
#undef public_4775c3
#undef public_4775d1
#undef public_4775e0
#undef public_4775f5
#undef public_4775fb
#undef public_477620
#undef public_477637
#undef public_477641
#undef public_477680
#undef public_4776af
#undef public_4776e6
#undef public_4776fd
#undef public_477707
#undef public_477730
#undef public_477747
#undef public_47774d
#undef public_477756
#undef public_47776c
#undef public_477782
#undef public_4777a0
#undef public_4777b7
#undef public_4777c1
#undef public_4777d0
#undef public_4777ef
#undef public_477800
#undef public_477816
#undef public_477819
