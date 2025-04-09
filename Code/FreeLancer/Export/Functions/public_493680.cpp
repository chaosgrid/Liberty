#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d580);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_491be0);
CLANG_FORWARD_PROC_SYMBOL(public_496d40);
CLANG_FORWARD_PROC_SYMBOL(public_4975a0);
CLANG_FORWARD_PROC_SYMBOL(public_4978c0);
CLANG_FORWARD_PROC_SYMBOL(public_497970);
CLANG_FORWARD_PROC_SYMBOL(public_49a580);
CLANG_FORWARD_PROC_SYMBOL(public_49a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_49e1d0);
CLANG_FORWARD_PROC_SYMBOL(public_49f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_49f1a0);
CLANG_FORWARD_PROC_SYMBOL(public_49f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_49f540);
CLANG_FORWARD_PROC_SYMBOL(public_49f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_4a1b50);
CLANG_FORWARD_PROC_SYMBOL(public_4a2370);
CLANG_FORWARD_PROC_SYMBOL(public_4a2760);
CLANG_FORWARD_PROC_SYMBOL(public_4a2930);
CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c46c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c46e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4780);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4eb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c58e0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4cef30);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4936ab _public_4936ab
#define public_4936d3 _public_4936d3
#define public_4936fb _public_4936fb
#define public_493761 _public_493761
#define public_49377c _public_49377c
#define public_493799 _public_493799
#define public_4937fe _public_4937fe
#define public_493820 _public_493820
#define public_49385a _public_49385a
#define public_4938c5 _public_4938c5
#define public_493924 _public_493924
#define public_4939dc _public_4939dc
#define public_493a2a _public_493a2a
#define public_493aad _public_493aad
#define public_493ac4 _public_493ac4
#define public_493b0a _public_493b0a
#define public_493b50 _public_493b50
#define public_493b84 _public_493b84
#define public_493c26 _public_493c26
#define public_493c60 _public_493c60
#define public_493c6e _public_493c6e
#define public_493c80 _public_493c80
#define public_493c90 _public_493c90
#define public_493cb0 _public_493cb0
#define public_493cdb _public_493cdb
#define public_493d1e _public_493d1e
#define public_493d3a _public_493d3a
#define public_493d66 _public_493d66
#define public_493d8f _public_493d8f
#define public_493dba _public_493dba
#define public_493dd7 _public_493dd7
#define public_493df4 _public_493df4
#define public_493e11 _public_493e11
#define public_493e2e _public_493e2e
#define public_493e4b _public_493e4b
#define public_493ebf _public_493ebf
#define public_493f33 _public_493f33
#define public_493fa7 _public_493fa7
#define public_493fc4 _public_493fc4
#define public_493fef _public_493fef
#define public_49402b _public_49402b
#define public_49403f _public_49403f
#define public_49404b _public_49404b
#define public_494091 _public_494091
#define public_4940b8 _public_4940b8
#define public_4940f4 _public_4940f4
#define public_494120 _public_494120
#define public_49412e _public_49412e
#define public_494134 _public_494134
#define public_494178 _public_494178
#define public_494194 _public_494194
#define public_4941b8 _public_4941b8
#define public_4941c2 _public_4941c2
#define public_4941d0 _public_4941d0
#define public_4941df _public_4941df
#define public_4941e7 _public_4941e7
#define public_494200 _public_494200
#define public_494226 _public_494226
#define public_494255 _public_494255
#define public_494281 _public_494281
#define public_494290 _public_494290
#define public_4942d5 _public_4942d5
#define public_494333 _public_494333
#define public_4943c5 _public_4943c5
#define public_4943e1 _public_4943e1
#define public_4944ce _public_4944ce
#define public_4944e4 _public_4944e4
#define public_49450a _public_49450a
#define public_494556 _public_494556
#define public_494562 _public_494562
#define public_49457b _public_49457b
#define public_494592 _public_494592
#define public_4945a4 _public_4945a4

PROC_DECLARE(0x493680, internal_493680, public_493680);
extern "C" NAKED register_t __cdecl internal_493680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        push esi
        lea eax, ds:[ebx-0x26]
        cmp eax, 0x18
        push edi
        mov esi, ecx
        ja public_4945a4
/*FIXUP movzx eax, byte ptr ds : [eax+public_4945c0] @0x493699*/
/*FIXUP mov edi, dword ptr ss : [esp+0x70] @0x4936a0*/
  FIXUP mov edi, dword ptr ss : [esp+0x70]
/*FIXUP jmp dword ptr ds : [eax*4+public_4945b0] @0x4936a4*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b169
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b169 : nop
        je public_4936fb
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b165
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b165 : nop
        je public_4945a4
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b161
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b161 : nop
        je public_4945a4
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b15d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b15d : nop
        je public_4945a4
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b159
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b159 : nop
        je public_4945a4
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b155
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b155 : nop
        je public_4945a4
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b151
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b151 : nop
        je public_494556
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b14d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b14d : nop
        je public_494556
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b149
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b149 : nop
        je public_4945a4
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b145
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b145 : nop
        je public_4945a4
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b141
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b141 : nop
        je public_4945a4
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b13d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b13d : nop
        je public_4945a4
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b139
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b139 : nop
        je public_4945a4
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b135
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b135 : nop
        je public_4945a4
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b131
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b131 : nop
        je public_4945a4
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000b12d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b12d : nop
        je public_4945a4
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000b129
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b129 : nop
        je public_4945a4
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000b125
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b125 : nop
        je public_4945a4
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000b121
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b121 : nop
        je public_4945a4
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000b11d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b11d : nop
        je public_4945a4
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000b119
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b119 : nop
        je public_4945a4
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000b115
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b115 : nop
        je public_4945a4
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000b111
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b111 : nop
        je public_4945a4
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000b10d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000b10d : nop
        je public_4945a4
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000b109
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b109 : nop
        je public_4936ab
  JMPTB int 3
        public_4936ab : nop
        cmp edi, dword ptr ds : [esi+0xAE0]
        jne public_4936d3
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0xAF4], ecx
        mov ecx, esi
        call public_49f7a0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4936d3 : nop
        cmp edi, dword ptr ds : [esi+0xFC4]
        jne public_4936fb
        mov edx, dword ptr ss : [esp+0x74]
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], edx
        call public_4a2930
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4936fb : nop
        lea ecx, ds:[esi+0x330]
        call public_55e280
        test al, al
        jne public_4945a4
        cmp edi, dword ptr ds : [esi+0x7EC]
        jne public_493761
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        jne public_4945a4
        xor eax, eax
        mov byte ptr ds : [esi+0x8D4], 1
        mov byte ptr ds : [esi+0x478], 1
        mov dword ptr ds : [esi+0x4A4], eax
        mov dword ptr ds : [esi+0x480], eax
        mov eax, dword ptr ds : [public_5d2edc]
        push 8
        mov dword ptr ds : [esi+0x484], eax
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493761 : nop
        cmp edi, dword ptr ds : [esi+0x904]
        jne public_49377c
        mov ecx, esi
        call public_49f2e0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_49377c : nop
        mov ecx, dword ptr ds : [esi+0xAC0]
        cmp edi, ecx
        jne public_493799
        mov ecx, esi
        call public_49f540
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493799 : nop
        cmp edi, dword ptr ds : [esi+0xAC8]
        jne public_4937fe
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAC8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xACC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, esi
        call public_49a580
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4937fe : nop
        cmp edi, dword ptr ds : [esi+0xF3C]
        jne public_493820
        mov ecx, dword ptr ds : [esi+0xF44]
        push ecx
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493820 : nop
        cmp edi, dword ptr ds : [esi+0x7F0]
        jne public_49385a
        mov bl, byte ptr ds : [public_611c5c]
        test bl, bl
        sete al
        mov byte ptr ds : [public_611c5c], al
        mov ecx, dword ptr ds : [esi+0x7F0]
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_49385a : nop
        cmp edi, dword ptr ds : [esi+0x8E8]
        jne public_4939dc
        push 1
        lea ebp, ds:[esi+0x90C]
        push ebp
        mov ecx, esi
        call public_496d40
        mov edi, eax
        test edi, edi
        je public_493924
        mov eax, dword ptr ds : [edi+0x70]
        test eax, eax
        je public_4938c5
        push 0
        push 0
        lea ecx, ss:[esp+0x7C]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x84], 0
        call public_4c4da0
        mov bl, byte ptr ds : [edi+0x74]
        mov dl, byte ptr ss : [esp+0x84]
        or bl, dl
        mov al, bl
        and al, 1
        mov byte ptr ds : [edi+0x74], bl
        mov byte ptr ds : [edi+0x48], al
        mov al, byte ptr ds : [esi+0x87E]
        add esp, 0x10
        test al, al
        je public_4938c5
        mov byte ptr ds : [edi+0x48], 1
        public_4938c5 : nop
        mov ecx, dword ptr ds : [edi+0x70]
        mov ebp, dword ptr ds : [edi+0x4C]
        mov ebx, dword ptr ds : [edi+0x50]
        push 0
        push 0
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        mov byte ptr ss : [esp+0x80], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x80]
        mov dl, byte ptr ds : [edi+0x74]
        or al, dl
        mov byte ptr ss : [esp+0x80], al
        mov eax, dword ptr ds : [edi+0x70]
        add esp, 0x10
        push eax
        mov ecx, esi
        call public_4978c0
        mov ecx, dword ptr ss : [esp+0x70]
        push eax
        push ecx
        push ebx
        push ebp
        mov ecx, esi
        call public_497970
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493924 : nop
        fld dword ptr ds : [esi+0xF48]
        mov ecx, dword ptr ds : [esi+0x7E0]
        fdivr dword ptr ds : [public_5c75dc]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x87E]
        lea eax, ss:[esp+0x1C]
        push edx
        push 1
        push 0
        push eax
        push ecx
        fld st(0)
        fmul dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+0x30]
        fld st(0)
        fmul dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x38]
        call public_4a1b50
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je public_4941d0
        mov eax, dword ptr ds : [edi]
        push 0
        push 1
        lea edx, ss:[esp+0x7C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x80], 0
        call dword ptr ds : [eax+4]
        push eax
        call public_4c4da0
        mov edx, dword ptr ds : [edi]
        add esp, 0x10
        mov ecx, edi
        call dword ptr ds : [edx+0x80]
        mov cl, byte ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [edi]
        or cl, al
        mov byte ptr ss : [esp+0x74], cl
        mov eax, dword ptr ss : [esp+0x74]
        push 0
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        push eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x84]
        push eax
        mov ecx, esi
        call public_497970
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4939dc : nop
        cmp edi, dword ptr ds : [esi+0x7F4]
        jne public_493b0a
        call public_4c58e0
        test al, al
        jne public_4941d0
        push 0
        lea edi, ds:[esi+0x90C]
        push edi
        mov ecx, esi
        call public_496d40
        test eax, eax
        je public_493a2a
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 3
        je public_493a2a
        cmp ecx, 4
        je public_493a2a
        add eax, 0x30
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_493a2a : nop
        fld dword ptr ds : [esi+0xF48]
        mov ecx, dword ptr ds : [edi]
        fdivr dword ptr ds : [public_5c75dc]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        push 0
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_4c4780
        push 0xA
        call public_5645c0
        add esp, 0x10
        mov ecx, esi
        call public_49f0e0
        mov al, byte ptr ds : [esi+0xBCC]
        test al, al
        je public_493aad
        mov byte ptr ds : [esi+0xBCC], 0
        mov dword ptr ds : [esi+0xAF4], 0
        public_493aad : nop
        call public_4c4690
        mov cl, byte ptr ds : [esi+0xBCC]
        neg eax
        sbb al, al
        inc al
        test cl, cl
        je public_493ac4
        mov al, 1
        public_493ac4 : nop
        mov ecx, dword ptr ds : [esi+0x8FC]
        mov edx, dword ptr ds : [ecx]
        movzx edi, al
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x900]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, esi
        call public_49f7a0
        mov ecx, esi
        call public_4975a0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493b0a : nop
        cmp edi, dword ptr ds : [esi+0x7F8]
        jne public_493c26
        push 0
        lea edi, ds:[esi+0x90C]
        push edi
        mov ecx, esi
        call public_496d40
        xor ebx, ebx
        test eax, eax
        je public_493b50
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 3
        je public_493b50
        cmp ecx, 4
        je public_493b50
        lea ecx, ds:[eax+0x30]
        mov ebx, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [eax+0x70]
        public_493b50 : nop
        mov edx, dword ptr ds : [esi+0xF48]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ds : [esi+0xF48], 0x3F800000
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_493b84
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        fstp dword ptr ds : [esi+0xF48]
        public_493b84 : nop
        mov eax, dword ptr ds : [esi+0xF48]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], eax
        call public_491be0
        fld dword ptr ss : [esp+0x74]
        fdivr dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0xF48], eax
        mov ecx, dword ptr ds : [esi+0x7E0]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx]
        push eax
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_4c4eb0
        push 0xA
        call public_5645c0
        add esp, 0x14
        mov ecx, esi
        call public_49f0e0
        jmp public_493aad
        public_493c26 : nop
        cmp edi, dword ptr ds : [esi+0x8EC]
        jne public_493cb0
        push 0
        lea ecx, ds:[esi+0x90C]
        push ecx
        mov ecx, esi
        call public_496d40
        mov edi, eax
        test edi, edi
        je public_493c90
        cmp dword ptr ds : [edi], 3
        jne public_493c90
        call public_4c4690
        xor ecx, ecx
        test eax, eax
        jle public_493c90
        lea edx, ds:[esi+0x4B8]
        mov edi, edi
        public_493c60 : nop
        cmp dword ptr ds : [edx], edi
        je public_493c6e
        inc ecx
        add edx, 4
        cmp ecx, eax
        jl public_493c60
        jmp public_493c90
        public_493c6e : nop
        cmp ecx, dword ptr ds : [esi+0xAF4]
        jg public_493c80
        mov dword ptr ds : [esi+0xAF4], 0
        public_493c80 : nop
        push ecx
        call public_4c46e0
        push 0xA
        call public_5645c0
        add esp, 8
        public_493c90 : nop
        mov ecx, esi
        call public_49f0e0
        call public_4c4690
        test eax, eax
        jne public_493aad
        mov byte ptr ds : [esi+0xBCC], 1
        jmp public_493aad
        public_493cb0 : nop
        cmp edi, dword ptr ds : [esi+0x8FC]
        jne public_493d1e
        mov byte ptr ds : [esi+0xBCC], 1
        call public_4c46c0
        call public_4c4690
        mov cl, byte ptr ds : [esi+0xBCC]
        neg eax
        sbb al, al
        inc al
        test cl, cl
        je public_493cdb
        mov al, 1
        public_493cdb : nop
        mov ecx, dword ptr ds : [esi+0x8FC]
        mov edx, dword ptr ds : [ecx]
        movzx edi, al
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x900]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, esi
        call public_49f7a0
        mov ecx, esi
        call public_4975a0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493d1e : nop
        cmp edi, dword ptr ds : [esi+0x808]
        jne public_493d3a
        call public_45a460
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493d3a : nop
        cmp edi, dword ptr ds : [esi+0xF1C]
        jne public_493d66
        call public_43d580
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 0xEF02
        mov ecx, esi
        call dword ptr ds : [edx+0x5C]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493d66 : nop
        cmp edi, dword ptr ds : [esi+0x804]
        jne public_493d8f
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x878], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493d8f : nop
        cmp edi, dword ptr ds : [esi+0xC18]
        jne public_493dba
        mov ecx, esi
        call public_4a2370
        mov ecx, esi
        call public_4a2930
        push 7
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493dba : nop
        cmp edi, dword ptr ds : [esi+0xC14]
        jne public_493dd7
        push 4
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493dd7 : nop
        cmp edi, dword ptr ds : [esi+0x8D8]
        jne public_493df4
        push 0
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493df4 : nop
        cmp edi, dword ptr ds : [esi+0x8DC]
        jne public_493e11
        push 1
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493e11 : nop
        cmp edi, dword ptr ds : [esi+0xB4C]
        jne public_493e2e
        push 2
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493e2e : nop
        cmp edi, dword ptr ds : [esi+0xB50]
        jne public_493e4b
        push 3
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493e4b : nop
        cmp edi, dword ptr ds : [esi+0xC5C]
        jne public_493ebf
        push 0
        mov dword ptr ds : [public_6720a4], 0
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edi, 2
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493ebf : nop
        cmp edi, dword ptr ds : [esi+0xC60]
        jne public_493f33
        push 0
        mov edi, 1
        mov dword ptr ds : [public_6720a4], edi
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp ebx, edi
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 2
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493f33 : nop
        cmp edi, dword ptr ds : [esi+0xC64]
        jne public_493fa7
        push 0
        mov edi, 2
        mov dword ptr ds : [public_6720a4], edi
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ebp, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebx, dword ptr ds : [public_6720a4]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, edi
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493fa7 : nop
        cmp edi, dword ptr ds : [esi+0xC58]
        jne public_493fc4
        push 5
        mov ecx, esi
        call public_4a0220
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_493fc4 : nop
        cmp edi, dword ptr ds : [esi+0x800]
        jne public_494091
        mov ecx, esi
        call public_49f0e0
        mov eax, dword ptr ds : [esi+0x7D0]
        mov ebx, 1
        cmp eax, ebx
        je public_493fef
        cmp eax, 2
        jne public_4945a4
        public_493fef : nop
        push 0
        lea ecx, ds:[esi+0x90C]
        push ecx
        mov ecx, esi
        call public_496d40
        mov edx, eax
        test edx, edx
        je public_4945a4
        mov eax, dword ptr ds : [edx]
        cmp eax, 3
        jne public_49402b
        cmp dword ptr ds : [edx+0x54], ebx
        jne public_49403f
        push 0
        call public_4ceeb0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x58
        ret 0xC
        public_49402b : nop
        cmp eax, 4
        jne public_49404b
        cmp dword ptr ds : [edx+0x54], ebx
        jne public_49403f
        push 0
        call public_4cef30
        add esp, 4
        public_49403f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x58
        ret 0xC
        public_49404b : nop
        mov edx, dword ptr ds : [edx+0x70]
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x40]
        rep stosd
        mov eax, dword ptr ds : [public_5c6368]
        mov byte ptr ss : [esp+0x66], 1
        mov dword ptr ss : [esp+0x40], 0x1C
        movzx ecx, word ptr ds : [eax]
        lea eax, ss:[esp+0x40]
        push eax
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x54], edx
        call public_54bcb0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494091 : nop
        cmp edi, dword ptr ds : [esi+0x7FC]
        jne public_494194
        mov ecx, esi
        call public_49f0e0
        mov eax, dword ptr ds : [esi+0x7D0]
        cmp eax, 1
        je public_4940b8
        cmp eax, 2
        jne public_4945a4
        public_4940b8 : nop
        push 0
        lea ebp, ds:[esi+0x90C]
        push ebp
        mov ecx, esi
        call public_496d40
        mov edi, eax
        test edi, edi
        je public_4945a4
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_4940f4
        mov eax, dword ptr ds : [edi+0x64]
        test eax, eax
        je public_4940f4
        pop edi
        mov dword ptr ds : [esi+0x878], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4940f4 : nop
        cmp ecx, 3
        jne public_494134
        mov ecx, dword ptr ds : [edi+0x58]
        dec ecx
        push ecx
        call public_4c46a0
        add esp, 4
        test eax, eax
        je public_494134
        mov ebx, dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_494134
        mov edx, dword ptr ds : [esi+0x400]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_494134
        lea ecx, ds:[ecx]
        public_494120 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [ecx+0x48], 0
        je public_49412e
        cmp dword ptr ds : [ecx+0x70], ebx
        je public_494178
        public_49412e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_494120
        public_494134 : nop
        cmp dword ptr ds : [edi], 4
        jne public_4945a4
        push 1
        push ebp
        mov ecx, esi
        call public_496d40
        test eax, eax
        je public_4945a4
        cmp dword ptr ds : [eax], 0
        jne public_4945a4
        mov eax, dword ptr ds : [eax+0x64]
        test eax, eax
        je public_4945a4
        pop edi
        mov dword ptr ds : [esi+0x878], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494178 : nop
        mov ecx, dword ptr ds : [ecx+0x64]
        test ecx, ecx
        je public_4941d0
        pop edi
        mov dword ptr ds : [esi+0x878], ecx
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494194 : nop
        cmp edi, dword ptr ds : [esi+0x8E0]
        je public_4943e1
        cmp edi, dword ptr ds : [esi+0x8E4]
        je public_4943e1
        cmp edi, dword ptr ds : [esi+0xFC8]
        jne public_4941b8
        push 1
        jmp public_4941c2
        public_4941b8 : nop
        cmp edi, dword ptr ds : [esi+0xFCC]
        jne public_4941df
        push 0
        public_4941c2 : nop
        mov ecx, esi
        call public_4a2760
        mov ecx, esi
        call public_4a2930
        public_4941d0 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4941df : nop
        xor eax, eax
        lea ecx, ds:[esi+0xAD4]
        public_4941e7 : nop
        cmp edi, dword ptr ds : [ecx]
        je public_494226
        inc eax
        add ecx, 4
        cmp eax, 3
        jl public_4941e7
        xor ecx, ecx
        lea eax, ds:[esi+0xF88]
        lea esp, ss:[esp]
        public_494200 : nop
        cmp edi, dword ptr ds : [eax-0x3C]
        je public_494290
        cmp edi, dword ptr ds : [eax]
        je public_494290
        inc ecx
        add eax, 4
        cmp ecx, 0xF
        jl public_494200
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494226 : nop
        mov cl, byte ptr ds : [esi+0xBCC]
        test cl, cl
        je public_494255
        mov edx, dword ptr ds : [esi+0xAF4]
        add edx, eax
        push edx
        mov ecx, esi
        call public_49a8f0
        pop edi
        mov dword ptr ds : [esi+0x878], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494255 : nop
        mov edi, dword ptr ds : [esi+0xAF4]
        add edi, eax
        js public_494281
        call public_4c4690
        cmp edi, eax
        jge public_494281
        push edi
        call public_4c46a0
        mov eax, dword ptr ds : [eax+0xC]
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 8
        mov dword ptr ds : [esi+0x878], eax
        public_494281 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494290 : nop
        mov eax, dword ptr ds : [esi+0x1008]
        mov edx, dword ptr ds : [esi+0xFD8]
        add eax, ecx
        lea ecx, ds:[eax+eax*2]
        lea edi, ds:[edx+ecx*8]
        push 0
        mov ecx, esi
        call public_4a0220
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x7E0], eax
        je public_4943c5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        xor ecx, ecx
        lea edx, ds:[esi+0xF28]
        public_4942d5 : nop
        cmp dword ptr ds : [edx], eax
        je public_4943c5
        inc ecx
        add edx, 4
        cmp ecx, 4
        jl public_4942d5
        mov ecx, dword ptr ds : [esi+0x7E0]
        test ecx, ecx
        je public_494333
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [ecx]
        push edx
/*FIXUP push offset public_66fc60 @0x4942f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
        push ecx
        call public_4347e0
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x494311*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [esi+0x8C8]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x494326*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_494333 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x3F8], 0x3F800000
        mov byte ptr ds : [esi+0x8D4], 0
        mov byte ptr ds : [esi+0x478], 0
        call public_49e1d0
        fld dword ptr ds : [esi+0xF48]
        add edi, 4
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x18], edx
        fxch 
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ss : [esp+0x18]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x4A8]
        fld dword ptr ds : [esi+0x4A8]
        fadd st(0), st
        fdivp 
        fstp dword ptr ds : [esi+0x924]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x4AC]
        fld dword ptr ds : [esi+0x4AC]
        fadd st(0), st
        fdivp 
        fstp dword ptr ds : [esi+0x928]
        call public_49f1a0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4943c5 : nop
        mov ecx, dword ptr ds : [esi+0x8C8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x62A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_494333
        public_4943e1 : nop
        mov ecx, esi
        call public_49f0e0
        mov eax, dword ptr ds : [esi+0x7D0]
        xor edi, edi
        sub eax, edi
        je public_4944e4
        dec eax
        je public_4944ce
        dec eax
        jne public_4941d0
        mov al, byte ptr ds : [esi+0x7D5]
        test al, al
        jne public_4941d0
        mov ecx, esi
        call public_49f0e0
        fld dword ptr ds : [esi+0x4A8]
        fdiv dword ptr ds : [esi+0x3F8]
        lea eax, ds:[esi+0x46C]
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x494]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], edx
        fst dword ptr ds : [esi+0x4A0]
        fld dword ptr ds : [eax]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x14]
        fchs 
        lea eax, ds:[esi+0x488]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x4A8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        fsub st, st(1)
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [esi+0x478], 1
        fstp dword ptr ds : [esi+0x490]
        mov dword ptr ds : [esi+0x4A4], 1
        mov dword ptr ds : [esi+0x480], edi
        fstp st(0)
        mov dword ptr ds : [esi+0x484], 0x3FC00000
        call public_4be390
        push 7
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4944ce : nop
        mov ecx, esi
        call public_49f1a0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_4944e4 : nop
        push edi
        lea edx, ds:[esi+0x90C]
        push edx
        mov ecx, esi
        call public_496d40
        cmp eax, edi
        je public_4941d0
        mov ecx, dword ptr ds : [eax]
        cmp ecx, edi
        je public_49450a
        cmp ecx, 1
        jne public_4941d0
        public_49450a : nop
        mov eax, dword ptr ds : [eax+0x64]
        mov dword ptr ds : [esi+0x7E0], eax
        mov byte ptr ds : [esi+0x8D4], 1
        mov byte ptr ds : [esi+0x478], 1
        mov dword ptr ds : [esi+0x4A4], 1
        mov dword ptr ds : [esi+0x480], edi
        mov ecx, dword ptr ds : [public_5d2edc]
        push 8
        mov dword ptr ds : [esi+0x484], ecx
        call public_5645c0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494556 : nop
        mov edx, dword ptr ss : [esp+0x70]
        xor eax, eax
        lea ecx, ds:[esi+0xAD4]
        public_494562 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_49457b
        inc eax
        add ecx, 4
        cmp eax, 3
        jl public_494562
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_49457b : nop
        cmp ebx, 0x2C
        jne public_494592
        pop edi
        mov dword ptr ds : [esi+0xAF0], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        public_494592 : nop
        cmp dword ptr ds : [esi+0xAF0], eax
        jne public_4945a4
        mov dword ptr ds : [esi+0xAF0], 0xFFFFFFFF
        public_4945a4 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x493680)
        ASM_EXPORT_ENTRY_SINGLE(0x4945a4, public_4945a4)
    }
}

#undef public_4936ab
#undef public_4936d3
#undef public_4936fb
#undef public_493761
#undef public_49377c
#undef public_493799
#undef public_4937fe
#undef public_493820
#undef public_49385a
#undef public_4938c5
#undef public_493924
#undef public_4939dc
#undef public_493a2a
#undef public_493aad
#undef public_493ac4
#undef public_493b0a
#undef public_493b50
#undef public_493b84
#undef public_493c26
#undef public_493c60
#undef public_493c6e
#undef public_493c80
#undef public_493c90
#undef public_493cb0
#undef public_493cdb
#undef public_493d1e
#undef public_493d3a
#undef public_493d66
#undef public_493d8f
#undef public_493dba
#undef public_493dd7
#undef public_493df4
#undef public_493e11
#undef public_493e2e
#undef public_493e4b
#undef public_493ebf
#undef public_493f33
#undef public_493fa7
#undef public_493fc4
#undef public_493fef
#undef public_49402b
#undef public_49403f
#undef public_49404b
#undef public_494091
#undef public_4940b8
#undef public_4940f4
#undef public_494120
#undef public_49412e
#undef public_494134
#undef public_494178
#undef public_494194
#undef public_4941b8
#undef public_4941c2
#undef public_4941d0
#undef public_4941df
#undef public_4941e7
#undef public_494200
#undef public_494226
#undef public_494255
#undef public_494281
#undef public_494290
#undef public_4942d5
#undef public_494333
#undef public_4943c5
#undef public_4943e1
#undef public_4944ce
#undef public_4944e4
#undef public_49450a
#undef public_494556
#undef public_494562
#undef public_49457b
#undef public_494592
#undef public_4945a4

#pragma init_seg(compiler)
extern "C" void const* const public_4945a4 = __AsmFindLabelExport(&internal_493680, 0x4945a4);
