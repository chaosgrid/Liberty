#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c26fd6 _public_6c26fd6
#define public_6c26fd8 _public_6c26fd8
#define public_6c26fe0 _public_6c26fe0
#define public_6c26fe5 _public_6c26fe5
#define public_6c26ff1 _public_6c26ff1
#define public_6c27012 _public_6c27012
#define public_6c2701a _public_6c2701a
#define public_6c27024 _public_6c27024
#define public_6c27030 _public_6c27030
#define public_6c2703c _public_6c2703c
#define public_6c27042 _public_6c27042
#define public_6c27060 _public_6c27060
#define public_6c27068 _public_6c27068
#define public_6c27072 _public_6c27072
#define public_6c270ae _public_6c270ae
#define public_6c270cb _public_6c270cb
#define public_6c270f0 _public_6c270f0
#define public_6c270fc _public_6c270fc
#define public_6c27106 _public_6c27106
#define public_6c27118 _public_6c27118
#define public_6c27120 _public_6c27120
#define public_6c27126 _public_6c27126
#define public_6c27130 _public_6c27130
#define public_6c2713b _public_6c2713b
#define public_6c27148 _public_6c27148
#define public_6c27160 _public_6c27160
#define public_6c27168 _public_6c27168
#define public_6c27172 _public_6c27172
#define public_6c27180 _public_6c27180
#define public_6c2718f _public_6c2718f
#define public_6c271a0 _public_6c271a0
#define public_6c271ab _public_6c271ab
#define public_6c271ae _public_6c271ae

PROC_DECLARE(0x6c26fa0, internal_6c26fa0, public_6c26fa0);
extern "C" NAKED register_t __cdecl internal_6c26fa0()
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
        jae public_6c270cb
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6c26fd6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6c26fd8
        public_6c26fd6 : nop
        mov ecx, ebp
        public_6c26fd8 : nop
        test edx, edx
        jne public_6c26fe0
        xor eax, eax
        jmp public_6c26fe5
        public_6c26fe0 : nop
        sub eax, edx
        sar eax, 2
        public_6c26fe5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6c26ff1
        xor eax, eax
        public_6c26ff1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6c34eac
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6c27024
        public_6c27012 : nop
        test ecx, ecx
        je public_6c2701a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6c2701a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6c27012
        public_6c27024 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6c27042
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6c27030 : nop
        test eax, eax
        je public_6c2703c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6c2703c : nop
        add eax, 4
        dec edx
        jne public_6c27030
        public_6c27042 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6c27072
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6c27060 : nop
        test edx, edx
        je public_6c27068
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6c27068 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6c27060
        public_6c27072 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6c270ae
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
        public_6c270ae : nop
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
        public_6c270cb : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6c27148
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6c27106
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6c270f0 : nop
        test esi, esi
        je public_6c270fc
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6c270fc : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6c270f0
        public_6c27106 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6c27126
        public_6c27118 : nop
        test eax, eax
        je public_6c27120
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6c27120 : nop
        add eax, 4
        dec ebp
        jne public_6c27118
        public_6c27126 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6c2713b
        nop 
        public_6c27130 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6c27130
        public_6c2713b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6c27148 : nop
        test ebp, ebp
        jbe public_6c271ae
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6c27172
        lea esp, ss:[esp]
        public_6c27160 : nop
        test esi, esi
        je public_6c27168
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6c27168 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6c27160
        public_6c27172 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6c2718f
        lea ecx, ds:[ecx]
        public_6c27180 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6c27180
        public_6c2718f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6c271ab
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6c271a0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6c271a0
        public_6c271ab : nop
        add dword ptr ds : [edi+8], ebp
        public_6c271ae : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6c26fa0)
    }
}

#undef public_6c26fd6
#undef public_6c26fd8
#undef public_6c26fe0
#undef public_6c26fe5
#undef public_6c26ff1
#undef public_6c27012
#undef public_6c2701a
#undef public_6c27024
#undef public_6c27030
#undef public_6c2703c
#undef public_6c27042
#undef public_6c27060
#undef public_6c27068
#undef public_6c27072
#undef public_6c270ae
#undef public_6c270cb
#undef public_6c270f0
#undef public_6c270fc
#undef public_6c27106
#undef public_6c27118
#undef public_6c27120
#undef public_6c27126
#undef public_6c27130
#undef public_6c2713b
#undef public_6c27148
#undef public_6c27160
#undef public_6c27168
#undef public_6c27172
#undef public_6c27180
#undef public_6c2718f
#undef public_6c271a0
#undef public_6c271ab
#undef public_6c271ae
