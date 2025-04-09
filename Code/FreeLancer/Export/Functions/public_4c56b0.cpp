#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_4c56b0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4c56ec _public_4c56ec
#define public_4c56f1 _public_4c56f1
#define public_4c56f9 _public_4c56f9
#define public_4c56fe _public_4c56fe
#define public_4c570a _public_4c570a
#define public_4c5730 _public_4c5730
#define public_4c5744 _public_4c5744
#define public_4c57ad _public_4c57ad
#define public_4c57b7 _public_4c57b7
#define public_4c57cd _public_4c57cd
#define public_4c5820 _public_4c5820
#define public_4c5837 _public_4c5837
#define public_4c5855 _public_4c5855
#define public_4c5864 _public_4c5864
#define public_4c5870 _public_4c5870
#define public_4c587d _public_4c587d

PROC_DECLARE(0x4c56b0, internal_4c56b0, public_4c56b0);
extern "C" NAKED register_t __cdecl internal_4c56b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6728d0]
        mov ecx, dword ptr ds : [public_6728d4]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push esi
        mov esi, eax
        jae public_4c57cd
        mov edx, dword ptr ds : [public_6728cc]
        test edx, edx
        je public_4c56ec
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        jbe public_4c56ec
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        jmp public_4c56f1
        public_4c56ec : nop
        mov ecx, 1
        public_4c56f1 : nop
        test edx, edx
        jne public_4c56f9
        xor eax, eax
        jmp public_4c56fe
        public_4c56f9 : nop
        sub eax, edx
        sar eax, 2
        public_4c56fe : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_4c570a
        xor eax, eax
        public_4c570a : nop
        push ebx
        push ebp
        lea edx, ds:[eax*4]
        push edi
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [public_6728cc]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_4c5744
        nop 
        lea esp, ss:[esp]
        public_4c5730 : nop
        push ebx
        push edi
        call public_5999b0
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_4c5730
        public_4c5744 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push edi
        mov ecx, offset public_6728c8
        call public_427730
        mov ecx, dword ptr ds : [public_6728d0]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_6728c8
        call public_597c70
        mov edx, dword ptr ds : [public_6728d0]
        mov eax, dword ptr ds : [public_6728cc]
        push edx
        push eax
        mov ecx, offset public_6728c8
        call public_53aaa0
        mov ecx, dword ptr ds : [public_6728cc]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6728cc]
        add esp, 4
        test ecx, ecx
        lea eax, ss:[ebp+edx*4]
        mov dword ptr ds : [public_6728d4], eax
        jne public_4c57ad
        xor eax, eax
        jmp public_4c57b7
        public_4c57ad : nop
        mov eax, dword ptr ds : [public_6728d0]
        sub eax, ecx
        sar eax, 2
        public_4c57b7 : nop
        pop edi
        lea ecx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [public_6728cc], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [public_6728d0], ecx
        pop esi
        pop ecx
        ret 
        public_4c57cd : nop
        mov edx, eax
        sub edx, esi
        sar edx, 2
        cmp edx, 1
        jae public_4c5837
        lea ecx, ds:[esi+4]
        push ecx
        push eax
        push esi
        mov ecx, offset public_6728c8
        call public_597c70
        mov eax, dword ptr ds : [public_6728d0]
        mov ecx, eax
        lea edx, ss:[esp+0xC]
        push edx
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_6728c8
        call public_427730
        mov ecx, dword ptr ds : [public_6728d0]
        cmp esi, ecx
        mov eax, esi
        je public_4c587d
        lea esp, ss:[esp]
        public_4c5820 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_4c5820
        add dword ptr ds : [public_6728d0], 4
        pop esi
        pop ecx
        ret 
        public_4c5837 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, offset public_6728c8
        call public_597c70
        mov eax, dword ptr ds : [public_6728d0]
        mov ecx, eax
        add eax, 0xFFFFFFFC
        cmp esi, eax
        je public_4c5864
        public_4c5855 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_4c5855
        public_4c5864 : nop
        lea ecx, ds:[esi+4]
        cmp esi, ecx
        mov eax, esi
        je public_4c587d
        lea ecx, ds:[ecx]
        public_4c5870 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_4c5870
        public_4c587d : nop
        add dword ptr ds : [public_6728d0], 4
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c56b0)
    }
}

#undef public_4c56ec
#undef public_4c56f1
#undef public_4c56f9
#undef public_4c56fe
#undef public_4c570a
#undef public_4c5730
#undef public_4c5744
#undef public_4c57ad
#undef public_4c57b7
#undef public_4c57cd
#undef public_4c5820
#undef public_4c5837
#undef public_4c5855
#undef public_4c5864
#undef public_4c5870
#undef public_4c587d
