#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3170);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3570);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3660);
CLANG_FORWARD_PROC_SYMBOL(public_6ac78a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8190);

#define public_6ac78c5 _public_6ac78c5
#define public_6ac78cd _public_6ac78cd
#define public_6ac7907 _public_6ac7907
#define public_6ac791c _public_6ac791c
#define public_6ac795b _public_6ac795b
#define public_6ac79ad _public_6ac79ad
#define public_6ac79dd _public_6ac79dd
#define public_6ac79fc _public_6ac79fc
#define public_6ac79fe _public_6ac79fe
#define public_6ac7a35 _public_6ac7a35
#define public_6ac7a3d _public_6ac7a3d
#define public_6ac7a5d _public_6ac7a5d
#define public_6ac7a7e _public_6ac7a7e
#define public_6ac7ab7 _public_6ac7ab7
#define public_6ac7adc _public_6ac7adc
#define public_6ac7aef _public_6ac7aef
#define public_6ac7af6 _public_6ac7af6
#define public_6ac7b49 _public_6ac7b49
#define public_6ac7b92 _public_6ac7b92
#define public_6ac7c4a _public_6ac7c4a
#define public_6ac7c4c _public_6ac7c4c
#define public_6ac7c59 _public_6ac7c59
#define public_6ac7ca6 _public_6ac7ca6
#define public_6ac7cae _public_6ac7cae
#define public_6ac7cf0 _public_6ac7cf0
#define public_6ac7cf2 _public_6ac7cf2
#define public_6ac7d19 _public_6ac7d19
#define public_6ac7d1d _public_6ac7d1d
#define public_6ac7d5f _public_6ac7d5f
#define public_6ac7d67 _public_6ac7d67

PROC_DECLARE(0x6ac78a0, internal_6ac78a0, public_6ac78a0);
extern "C" NAKED register_t __cdecl internal_6ac78a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x14]
        sub esp, 0x30C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 2
        je public_6ac78c5
        cmp eax, 3
        mov dword ptr ss : [esp+0x10], 0
        jne public_6ac78cd
        public_6ac78c5 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_6ac78cd : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x320]
        mov ebp, dword ptr ss : [esp+0x328]
        cmp eax, 1
        lea ecx, ds:[ecx+edi*4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x324]
        lea ebp, ss:[ebp+edi*4]
        lea ebx, ds:[ecx+edi*4]
        mov dword ptr ss : [esp+0x18], ebp
        je public_6ac7907
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ac7c4a
        public_6ac7907 : nop
        mov ebp, dword ptr ss : [esp+0x32C]
        cmp ebp, 1
        je public_6ac791c
        cmp ebp, 0xFFFFFFFF
        jne public_6ac79fc
        public_6ac791c : nop
        push edx
        push ecx
        call public_6ac7e60
        test eax, eax
        je public_6ac795b
        mov edx, dword ptr ss : [esp+0x330]
        mov ecx, dword ptr ss : [esp+0x328]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x320]
        push eax
        push 2
        push ecx
        push edx
        call public_6ac3140
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac795b : nop
        mov eax, dword ptr ss : [esp+0x330]
        mov ecx, dword ptr ss : [esp+0x320]
        push eax
        push ecx
        call public_6ac7e60
        test eax, eax
        je public_6ac79dd
        cmp ebp, 1
        jne public_6ac79ad
        mov edx, dword ptr ss : [esp+0x330]
        mov ecx, dword ptr ss : [esp+0x328]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x324]
        push eax
        push 2
        push ecx
        push edx
        call public_6ac3140
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac79ad : nop
        mov eax, dword ptr ss : [esp+0x330]
        mov ecx, dword ptr ss : [esp+0x328]
        mov edx, dword ptr ss : [esp+0x324]
        push eax
        push ecx
        push edx
        call public_6ac7f80
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac79dd : nop
        cmp ebp, 0xFFFFFFFF
        jne public_6ac7ab7
        push esi
        lea eax, ss:[esp+0x20]
        push 1
        push eax
        push ebx
        call public_6ac3140
        test eax, eax
        jne public_6ac7aef
        public_6ac79fc : nop
        xor eax, eax
        public_6ac79fe : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6ac7d5f
        test eax, eax
        je public_6ac7a35
        lea edx, ss:[esp+0x1C]
        push esi
        lea eax, ss:[esp+0x120]
        push edx
        lea ecx, ss:[esp+0x124]
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        jne public_6ac7a3d
        public_6ac7a35 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6ac7a3d : nop
        xor eax, eax
        test edi, edi
        je public_6ac7a7e
        mov edx, dword ptr ss : [esp+0x330]
        mov ebx, dword ptr ss : [esp+0x324]
        lea ecx, ss:[esp+0x11C]
        add edx, 4
        sub ebx, ecx
        public_6ac7a5d : nop
        lea ecx, ss:[esp+eax*4+0x11C]
        add edx, 4
        mov ebp, dword ptr ds : [ebx+ecx]
        xor ebp, dword ptr ds : [edx-4]
        xor ebp, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+eax*4+0x1C]
        xor ecx, ebp
        mov dword ptr ss : [esp+eax*4+0x1C], ecx
        inc eax
        cmp eax, edi
        jne public_6ac7a5d
        public_6ac7a7e : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ac7cf0
        lea edx, ss:[esp+0x21C]
        push esi
        lea eax, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x124]
        push eax
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac7cf0
        mov eax, 1
        jmp public_6ac7cf2
        public_6ac7ab7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        test eax, eax
        je public_6ac7adc
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x330]
        push ebx
        call public_6ac30a0
        test eax, eax
        jne public_6ac7af6
        jmp public_6ac79fc
        public_6ac7adc : nop
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        call public_6ac3570
        test eax, eax
        je public_6ac7c4a
        public_6ac7aef : nop
        mov ebx, dword ptr ss : [esp+0x324]
        public_6ac7af6 : nop
        mov ebp, dword ptr ss : [esp+0x320]
        push esi
        push ebx
        push ebp
        call public_6ac31d0
        test eax, eax
        push esi
        je public_6ac7c59
        mov ebx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        call public_6ac31d0
        test eax, eax
        je public_6ac7b49
        mov ecx, dword ptr ss : [esp+0x330]
        mov edx, dword ptr ss : [esp+0x328]
        push ecx
        push edx
        call public_6ac8190
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac7b49 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        test eax, eax
        je public_6ac7b92
        lea eax, ss:[esp+0x120]
        push eax
        push ebp
        push ebx
        call public_6ac3170
        test eax, eax
        je public_6ac79fc
        lea ecx, ss:[esp+0x11C]
        push esi
        lea edx, ss:[esp+0x120]
        push ecx
        push edx
        push ebp
        call public_6ac30a0
        test eax, eax
        je public_6ac79fc
        mov eax, 1
        jmp public_6ac79fe
        public_6ac7b92 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        push ebx
        call public_6ac30a0
        test eax, eax
        je public_6ac7c4a
        lea ecx, ss:[esp+0x11C]
        push esi
        push ecx
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7c4a
        mov eax, dword ptr ss : [esp+0x330]
        lea edx, ss:[esp+0x21C]
        push esi
        add eax, 4
        push edx
        lea ecx, ss:[esp+0x124]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac7c4a
        lea edx, ss:[esp+0x21C]
        push esi
        lea eax, ss:[esp+0x220]
        push edx
        lea ecx, ss:[esp+0x124]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac7c4a
        lea edx, ss:[esp+0x21C]
        push esi
        lea eax, ss:[esp+0x220]
        push edx
        lea ecx, ss:[esp+0x124]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac7c4a
        lea edx, ss:[esp+0x11C]
        push esi
        lea eax, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x224]
        push eax
        push ecx
        call public_6ac3170
        test eax, eax
        jne public_6ac7d67
        public_6ac7c4a : nop
        xor eax, eax
        public_6ac7c4c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac7c59 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x220]
        lea eax, ss:[esp+0x20]
        push edx
        push eax
        push ecx
        call public_6ac30a0
        neg eax
        mov ecx, dword ptr ss : [esp+0x10]
        sbb eax, eax
        neg eax
        test ecx, ecx
        je public_6ac7ca6
        test eax, eax
        je public_6ac79fc
        lea edx, ss:[esp+0x21C]
        push esi
        push edx
        lea eax, ss:[esp+0x224]
        push ebx
        push eax
        call public_6ac30a0
        test eax, eax
        jne public_6ac7cae
        jmp public_6ac79fc
        public_6ac7ca6 : nop
        test eax, eax
        je public_6ac79fc
        public_6ac7cae : nop
        lea ecx, ss:[esp+0x1C]
        push esi
        push ecx
        push ebx
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac79fc
        lea edx, ss:[esp+0x11C]
        push esi
        lea eax, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x224]
        push eax
        push ecx
        call public_6ac3170
        test eax, eax
        je public_6ac79fc
        mov eax, 1
        jmp public_6ac79fe
        public_6ac7cf0 : nop
        xor eax, eax
        public_6ac7cf2 : nop
        xor ecx, ecx
        test edi, edi
        je public_6ac7c4c
        mov ebx, dword ptr ss : [esp+0x320]
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        sub ebx, edx
        lea edx, ss:[esp+0x1C]
        sub ebp, edx
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6ac7d1d
        public_6ac7d19 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ac7d1d : nop
        lea esi, ss:[esp+ecx*4+0x1C]
        mov edx, dword ptr ds : [ebx+esi]
        mov ebp, dword ptr ds : [esi+ebp]
        xor edx, dword ptr ds : [esi]
        mov esi, dword ptr ss : [esp+ecx*4+0x21C]
        xor ebp, esi
        mov esi, dword ptr ss : [esp+0x328]
        xor ebp, edx
        inc ecx
        lea esi, ds:[esi+edi*4]
        cmp ecx, edi
        mov dword ptr ds : [esi+ecx*4-4], ebp
        mov esi, dword ptr ss : [esp+0x328]
        mov dword ptr ds : [esi+ecx*4-4], edx
        jne public_6ac7d19
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30C
        ret 0x14
        public_6ac7d5f : nop
        test eax, eax
        je public_6ac7c4a
        public_6ac7d67 : nop
        lea eax, ss:[esp+0x1C]
        push esi
        lea ecx, ss:[esp+0x120]
        push eax
        lea edx, ss:[esp+0x124]
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac7c4a
        mov edi, dword ptr ss : [esp+0x320]
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        call public_6ac3660
        test eax, eax
        je public_6ac7c4a
        mov eax, dword ptr ss : [esp+0x324]
        lea edx, ss:[esp+0x1C]
        push esi
        push edx
        lea ecx, ss:[esp+0x24]
        push eax
        push ecx
        call public_6ac3660
        test eax, eax
        je public_6ac7c4a
        lea edx, ss:[esp+0x21C]
        push esi
        lea eax, ss:[esp+0x20]
        push edx
        push eax
        push edi
        call public_6ac3660
        test eax, eax
        je public_6ac7c4a
        mov ecx, dword ptr ss : [esp+0x328]
        push esi
        push 1
        lea edx, ss:[esp+0x24]
        push ecx
        push edx
        call public_6ac3140
        test eax, eax
        je public_6ac7c4a
        lea eax, ss:[esp+0x1C]
        push esi
        lea ecx, ss:[esp+0x220]
        push eax
        lea edx, ss:[esp+0x124]
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac7c4a
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        lea edx, ss:[esp+0x24]
        push ecx
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac7c4a
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x30C
        ret 0x14
        UNREACHABLE_TRAP(0x6ac78a0)
    }
}

#undef public_6ac78c5
#undef public_6ac78cd
#undef public_6ac7907
#undef public_6ac791c
#undef public_6ac795b
#undef public_6ac79ad
#undef public_6ac79dd
#undef public_6ac79fc
#undef public_6ac79fe
#undef public_6ac7a35
#undef public_6ac7a3d
#undef public_6ac7a5d
#undef public_6ac7a7e
#undef public_6ac7ab7
#undef public_6ac7adc
#undef public_6ac7aef
#undef public_6ac7af6
#undef public_6ac7b49
#undef public_6ac7b92
#undef public_6ac7c4a
#undef public_6ac7c4c
#undef public_6ac7c59
#undef public_6ac7ca6
#undef public_6ac7cae
#undef public_6ac7cf0
#undef public_6ac7cf2
#undef public_6ac7d19
#undef public_6ac7d1d
#undef public_6ac7d5f
#undef public_6ac7d67
