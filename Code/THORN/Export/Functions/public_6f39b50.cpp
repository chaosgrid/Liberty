#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3db70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f820);
CLANG_FORWARD_PROC_SYMBOL(public_6f439b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44910);
CLANG_FORWARD_PROC_SYMBOL(public_6f44b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f44dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f45580);
CLANG_FORWARD_PROC_SYMBOL(public_6f45f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f46430);
CLANG_FORWARD_PROC_SYMBOL(public_6f471a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47660);
CLANG_FORWARD_PROC_SYMBOL(public_6f48050);
CLANG_FORWARD_PROC_SYMBOL(public_6f48440);
CLANG_FORWARD_PROC_SYMBOL(public_6f48660);
CLANG_FORWARD_PROC_SYMBOL(public_6f48840);
CLANG_FORWARD_PROC_SYMBOL(public_6f48be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49070);
CLANG_FORWARD_PROC_SYMBOL(public_6f49440);
CLANG_FORWARD_PROC_SYMBOL(public_6f49c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58d81);

#define public_6f39bc9 _public_6f39bc9
#define public_6f39bd1 _public_6f39bd1
#define public_6f39c19 _public_6f39c19
#define public_6f39c21 _public_6f39c21
#define public_6f39c2b _public_6f39c2b
#define public_6f39c2d _public_6f39c2d
#define public_6f39c42 _public_6f39c42
#define public_6f39c5a _public_6f39c5a
#define public_6f39c75 _public_6f39c75
#define public_6f39ca3 _public_6f39ca3
#define public_6f39cce _public_6f39cce
#define public_6f39cfc _public_6f39cfc
#define public_6f39d2a _public_6f39d2a
#define public_6f39d55 _public_6f39d55
#define public_6f39d80 _public_6f39d80
#define public_6f39dae _public_6f39dae
#define public_6f39dd9 _public_6f39dd9
#define public_6f39e07 _public_6f39e07
#define public_6f39e32 _public_6f39e32
#define public_6f39e5d _public_6f39e5d
#define public_6f39e88 _public_6f39e88
#define public_6f39eb3 _public_6f39eb3
#define public_6f39ede _public_6f39ede
#define public_6f39f0c _public_6f39f0c
#define public_6f39f33 _public_6f39f33
#define public_6f39f57 _public_6f39f57
#define public_6f39f7b _public_6f39f7b
#define public_6f39f9f _public_6f39f9f
#define public_6f39fa1 _public_6f39fa1
#define public_6f39fe4 _public_6f39fe4
#define public_6f39ff2 _public_6f39ff2
#define public_6f3a022 _public_6f3a022
#define public_6f3a027 _public_6f3a027
#define public_6f3a02f _public_6f3a02f
#define public_6f3a034 _public_6f3a034
#define public_6f3a03f _public_6f3a03f
#define public_6f3a060 _public_6f3a060
#define public_6f3a068 _public_6f3a068
#define public_6f3a072 _public_6f3a072
#define public_6f3a07c _public_6f3a07c
#define public_6f3a091 _public_6f3a091
#define public_6f3a099 _public_6f3a099
#define public_6f3a0a7 _public_6f3a0a7
#define public_6f3a0cd _public_6f3a0cd
#define public_6f3a0d8 _public_6f3a0d8
#define public_6f3a0fc _public_6f3a0fc
#define public_6f3a112 _public_6f3a112
#define public_6f3a11a _public_6f3a11a
#define public_6f3a124 _public_6f3a124
#define public_6f3a140 _public_6f3a140
#define public_6f3a154 _public_6f3a154
#define public_6f3a160 _public_6f3a160
#define public_6f3a16f _public_6f3a16f
#define public_6f3a178 _public_6f3a178
#define public_6f3a180 _public_6f3a180
#define public_6f3a18a _public_6f3a18a
#define public_6f3a197 _public_6f3a197
#define public_6f3a1a6 _public_6f3a1a6
#define public_6f3a1b0 _public_6f3a1b0
#define public_6f3a1bd _public_6f3a1bd
#define public_6f3a1d9 _public_6f3a1d9

PROC_DECLARE(0x6f39b50, internal_6f39b50, public_6f39b50);
extern "C" NAKED register_t __cdecl internal_6f39b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58d81 @0x6f39b58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58d81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        or ebx, 0xFFFFFFFF
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        push edi
        jl public_6f39c2b
        mov ebp, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ss : [ebp+0xA0]
        jae public_6f39c2b
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        lea edi, ss:[ebp+0xA4]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6f3db70
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f39bc9
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f39bc9
        lea eax, ss:[esp+0x14]
        jmp public_6f39bd1
        public_6f39bc9 : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        public_6f39bd1 : nop
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ss : [ebp+0xA8], eax
        je public_6f39c2b
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jl public_6f39c42
        cmp eax, dword ptr ss : [ebp+0xA0]
        jae public_6f39c2b
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6f3db70
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        je public_6f39c19
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f39c19
        lea eax, ss:[esp+0x1C]
        jmp public_6f39c21
        public_6f39c19 : nop
        mov dword ptr ss : [esp+0x34], edi
        lea eax, ss:[esp+0x34]
        public_6f39c21 : nop
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ss : [ebp+0xA8], eax
        jne public_6f39c5a
        public_6f39c2b : nop
        mov eax, ebx
        public_6f39c2d : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_6f39c42 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 0xFFFFFFFE
        cmp eax, 9
        ja public_6f39c5a
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f3a1e8] @0x6f39c4c*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f3a1e0] @0x6f39c53*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000002683
  JMPTB mov eax, 0
  JMPTB public_4c00000000002683 : nop
        je public_6f39c2b
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000267f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000267f : nop
        je public_6f39c5a
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000267b
  JMPTB mov eax, 1
  JMPTB public_4c0000000000267b : nop
        je public_6f39c5a
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000002677
  JMPTB mov eax, 1
  JMPTB public_4c00000000002677 : nop
        je public_6f39c5a
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000002673
  JMPTB mov eax, 0
  JMPTB public_4c00000000002673 : nop
        je public_6f39c2b
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000266f
  JMPTB mov eax, 1
  JMPTB public_4c0000000000266f : nop
        je public_6f39c5a
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000266b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000266b : nop
        je public_6f39c2b
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000002667
  JMPTB mov eax, 0
  JMPTB public_4c00000000002667 : nop
        je public_6f39c2b
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000002663
  JMPTB mov eax, 1
  JMPTB public_4c00000000002663 : nop
        je public_6f39c5a
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000265f
  JMPTB mov eax, 0
  JMPTB public_4c0000000000265f : nop
        je public_6f39c2b
  JMPTB int 3
        public_6f39c5a : nop
        mov eax, dword ptr ds : [esi]
        dec eax
        cmp eax, 0x12
        mov dword ptr ss : [esp+0x34], 0
        ja public_6f3a1d9
/*FIXUP jmp dword ptr ds : [eax*4+public_6f3a1f4] @0x6f39c6e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f39e5d
  JMPTB cmp eax, 1
  JMPTB je public_6f39e07
  JMPTB cmp eax, 2
  JMPTB je public_6f39ca3
  JMPTB cmp eax, 3
  JMPTB je public_6f39d80
  JMPTB cmp eax, 4
  JMPTB je public_6f39dae
  JMPTB cmp eax, 5
  JMPTB je public_6f39d55
  JMPTB cmp eax, 6
  JMPTB je public_6f39dd9
  JMPTB cmp eax, 7
  JMPTB je public_6f39cfc
  JMPTB cmp eax, 8
  JMPTB je public_6f39d2a
  JMPTB cmp eax, 9
  JMPTB je public_6f39c75
  JMPTB cmp eax, 0xA
  JMPTB je public_6f39cce
  JMPTB cmp eax, 0xB
  JMPTB je public_6f39e32
  JMPTB cmp eax, 0xC
  JMPTB je public_6f39e88
  JMPTB cmp eax, 0xD
  JMPTB je public_6f39eb3
  JMPTB cmp eax, 0xE
  JMPTB je public_6f39ede
  JMPTB cmp eax, 0xF
  JMPTB je public_6f39f0c
  JMPTB cmp eax, 0x10
  JMPTB je public_6f39f33
  JMPTB cmp eax, 0x11
  JMPTB je public_6f39f57
  JMPTB cmp eax, 0x12
  JMPTB je public_6f39f7b
  JMPTB int 3
        public_6f39c75 : nop
        push 0x9C
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f439b0
        jmp public_6f39fa1
        public_6f39ca3 : nop
        push 0x58
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 1
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f44910
        jmp public_6f39fa1
        public_6f39cce : nop
        push 0xCC
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 2
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f43df0
        jmp public_6f39fa1
        public_6f39cfc : nop
        push 0xB0
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 3
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f47660
        jmp public_6f39fa1
        public_6f39d2a : nop
        push 0x7C
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 4
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f48050
        jmp public_6f39fa1
        public_6f39d55 : nop
        push 0x74
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 5
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f44fc0
        jmp public_6f39fa1
        public_6f39d80 : nop
        push 0x178
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 6
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f45580
        jmp public_6f39fa1
        public_6f39dae : nop
        push 0x78
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 7
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f45f80
        jmp public_6f39fa1
        public_6f39dd9 : nop
        push 0x108
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 8
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f46430
        jmp public_6f39fa1
        public_6f39e07 : nop
        push 0x54
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 9
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f44dc0
        jmp public_6f39fa1
        public_6f39e32 : nop
        push 0x58
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xA
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f48440
        jmp public_6f39fa1
        public_6f39e5d : nop
        push 0x58
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xB
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f44b50
        jmp public_6f39fa1
        public_6f39e88 : nop
        push 0x54
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xC
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f48660
        jmp public_6f39fa1
        public_6f39eb3 : nop
        push 0x60
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xD
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f48840
        jmp public_6f39fa1
        public_6f39ede : nop
        push 0x98
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xE
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f471a0
        jmp public_6f39fa1
        public_6f39f0c : nop
        push 0x98
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xF
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f48be0
        jmp public_6f39fa1
        public_6f39f33 : nop
        push 0x78
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0x10
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f49070
        jmp public_6f39fa1
        public_6f39f57 : nop
        push 0x78
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0x11
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f49440
        jmp public_6f39fa1
        public_6f39f7b : nop
        push 0x58
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0x12
        je public_6f39f9f
        push esi
        mov ecx, eax
        call public_6f49c20
        jmp public_6f39fa1
        public_6f39f9f : nop
        xor eax, eax
        public_6f39fa1 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x34], eax
        je public_6f3a1d9
        lea ecx, ss:[ebp+0x34]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[ebp+0x94]
        lea ecx, ss:[ebp+0x98]
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov esi, dword ptr ss : [ebp+0xBC]
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp esi, eax
        je public_6f39ff2
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edx+8]
        public_6f39fe4 : nop
        mov edx, dword ptr ds : [esi]
        cmp dword ptr ds : [edx+8], ecx
        ja public_6f39ff2
        add esi, 4
        cmp esi, eax
        jne public_6f39fe4
        public_6f39ff2 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        mov ecx, dword ptr ss : [ebp+0xC4]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        jae public_6f3a0fc
        mov edx, dword ptr ss : [ebp+0xBC]
        test edx, edx
        je public_6f3a022
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f3a027
        public_6f3a022 : nop
        mov ecx, 1
        public_6f3a027 : nop
        test edx, edx
        jne public_6f3a02f
        xor eax, eax
        jmp public_6f3a034
        public_6f3a02f : nop
        sub eax, edx
        sar eax, 2
        public_6f3a034 : nop
        lea ebx, ds:[eax+ecx]
        test ebx, ebx
        mov eax, ebx
        jge public_6f3a03f
        xor eax, eax
        public_6f3a03f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6f57e9c
        mov ecx, dword ptr ss : [ebp+0xBC]
        add esp, 4
        cmp ecx, esi
        mov edi, eax
        je public_6f3a072
        nop 
        lea esp, ss:[esp]
        public_6f3a060 : nop
        test eax, eax
        je public_6f3a068
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6f3a068 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, esi
        jne public_6f3a060
        public_6f3a072 : nop
        test eax, eax
        je public_6f3a07c
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        public_6f3a07c : nop
        mov edx, dword ptr ss : [ebp+0xC0]
        cmp esi, edx
        lea ecx, ds:[eax+4]
        je public_6f3a0a7
        mov ebp, ecx
        sub ebp, eax
        lea eax, ds:[esi+ebp-4]
        public_6f3a091 : nop
        test ecx, ecx
        je public_6f3a099
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f3a099 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f3a091
        mov ebp, dword ptr ss : [esp+0x30]
        public_6f3a0a7 : nop
        mov edx, dword ptr ss : [ebp+0xBC]
        push edx
        call public_6f57e26
        mov ecx, dword ptr ss : [ebp+0xBC]
        add esp, 4
        test ecx, ecx
        lea eax, ds:[edi+ebx*4]
        mov dword ptr ss : [ebp+0xC4], eax
        jne public_6f3a0cd
        xor eax, eax
        jmp public_6f3a0d8
        public_6f3a0cd : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        sub eax, ecx
        sar eax, 2
        public_6f3a0d8 : nop
        mov edx, dword ptr ss : [esp+0x38]
        lea ecx, ds:[edi+eax*4+4]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp+0xC0], ecx
        mov dword ptr ss : [ebp+0xBC], edi
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        jmp public_6f39c2d
        public_6f3a0fc : nop
        mov edx, eax
        sub edx, esi
        sar edx, 2
        cmp edx, 1
        jae public_6f3a16f
        cmp esi, eax
        lea ecx, ds:[esi+4]
        je public_6f3a124
        lea edx, ds:[ecx-4]
        public_6f3a112 : nop
        test ecx, ecx
        je public_6f3a11a
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edi
        public_6f3a11a : nop
        add edx, 4
        add ecx, 4
        cmp edx, eax
        jne public_6f3a112
        public_6f3a124 : nop
        mov ecx, dword ptr ss : [ebp+0xC0]
        mov edx, ecx
        sub edx, esi
        sar edx, 2
        mov eax, 1
        sub eax, edx
        mov edi, ecx
        je public_6f3a154
        mov ebx, eax
        mov edi, edi
        public_6f3a140 : nop
        lea eax, ss:[esp+0x34]
        push eax
        push edi
        call public_6f3f820
        add esp, 8
        add edi, 4
        dec ebx
        jne public_6f3a140
        public_6f3a154 : nop
        mov ecx, dword ptr ss : [ebp+0xC0]
        cmp esi, ecx
        mov eax, esi
        je public_6f3a1bd
        public_6f3a160 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f3a160
        jmp public_6f3a1bd
        public_6f3a16f : nop
        lea ecx, ds:[eax-4]
        cmp ecx, eax
        mov edx, eax
        je public_6f3a18a
        public_6f3a178 : nop
        test edx, edx
        je public_6f3a180
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        public_6f3a180 : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6f3a178
        public_6f3a18a : nop
        mov ecx, dword ptr ss : [ebp+0xC0]
        lea eax, ds:[ecx-4]
        cmp esi, eax
        je public_6f3a1a6
        public_6f3a197 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_6f3a197
        public_6f3a1a6 : nop
        lea ecx, ds:[esi+4]
        cmp esi, ecx
        mov eax, esi
        je public_6f3a1bd
        nop 
        public_6f3a1b0 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f3a1b0
        public_6f3a1bd : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        mov edx, dword ptr ss : [esp+0x38]
        add eax, 4
        mov dword ptr ss : [ebp+0xC0], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx], ecx
        public_6f3a1d9 : nop
        xor eax, eax
        jmp public_6f39c2d
        UNREACHABLE_TRAP(0x6f39b50)
        ASM_EXPORT_ENTRY_FIRST(0x6f39c2b, public_6f39c2b)
        ASM_EXPORT_ENTRY(0x6f39c5a, public_6f39c5a)
        ASM_EXPORT_ENTRY(0x6f39c75, public_6f39c75)
        ASM_EXPORT_ENTRY(0x6f39ca3, public_6f39ca3)
        ASM_EXPORT_ENTRY(0x6f39cce, public_6f39cce)
        ASM_EXPORT_ENTRY(0x6f39cfc, public_6f39cfc)
        ASM_EXPORT_ENTRY(0x6f39d2a, public_6f39d2a)
        ASM_EXPORT_ENTRY(0x6f39d55, public_6f39d55)
        ASM_EXPORT_ENTRY(0x6f39d80, public_6f39d80)
        ASM_EXPORT_ENTRY(0x6f39dae, public_6f39dae)
        ASM_EXPORT_ENTRY(0x6f39dd9, public_6f39dd9)
        ASM_EXPORT_ENTRY(0x6f39e07, public_6f39e07)
        ASM_EXPORT_ENTRY(0x6f39e32, public_6f39e32)
        ASM_EXPORT_ENTRY(0x6f39e5d, public_6f39e5d)
        ASM_EXPORT_ENTRY(0x6f39e88, public_6f39e88)
        ASM_EXPORT_ENTRY(0x6f39eb3, public_6f39eb3)
        ASM_EXPORT_ENTRY(0x6f39ede, public_6f39ede)
        ASM_EXPORT_ENTRY(0x6f39f0c, public_6f39f0c)
        ASM_EXPORT_ENTRY(0x6f39f33, public_6f39f33)
        ASM_EXPORT_ENTRY(0x6f39f57, public_6f39f57)
        ASM_EXPORT_ENTRY_LAST(0x6f39f7b, public_6f39f7b)
    }
}

#undef public_6f39bc9
#undef public_6f39bd1
#undef public_6f39c19
#undef public_6f39c21
#undef public_6f39c2b
#undef public_6f39c2d
#undef public_6f39c42
#undef public_6f39c5a
#undef public_6f39c75
#undef public_6f39ca3
#undef public_6f39cce
#undef public_6f39cfc
#undef public_6f39d2a
#undef public_6f39d55
#undef public_6f39d80
#undef public_6f39dae
#undef public_6f39dd9
#undef public_6f39e07
#undef public_6f39e32
#undef public_6f39e5d
#undef public_6f39e88
#undef public_6f39eb3
#undef public_6f39ede
#undef public_6f39f0c
#undef public_6f39f33
#undef public_6f39f57
#undef public_6f39f7b
#undef public_6f39f9f
#undef public_6f39fa1
#undef public_6f39fe4
#undef public_6f39ff2
#undef public_6f3a022
#undef public_6f3a027
#undef public_6f3a02f
#undef public_6f3a034
#undef public_6f3a03f
#undef public_6f3a060
#undef public_6f3a068
#undef public_6f3a072
#undef public_6f3a07c
#undef public_6f3a091
#undef public_6f3a099
#undef public_6f3a0a7
#undef public_6f3a0cd
#undef public_6f3a0d8
#undef public_6f3a0fc
#undef public_6f3a112
#undef public_6f3a11a
#undef public_6f3a124
#undef public_6f3a140
#undef public_6f3a154
#undef public_6f3a160
#undef public_6f3a16f
#undef public_6f3a178
#undef public_6f3a180
#undef public_6f3a18a
#undef public_6f3a197
#undef public_6f3a1a6
#undef public_6f3a1b0
#undef public_6f3a1bd
#undef public_6f3a1d9

#pragma init_seg(compiler)
extern "C" void const* const public_6f39c2b = __AsmFindLabelExport(&internal_6f39b50, 0x6f39c2b);
extern "C" void const* const public_6f39c5a = __AsmFindLabelExport(&internal_6f39b50, 0x6f39c5a);
extern "C" void const* const public_6f39c75 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39c75);
extern "C" void const* const public_6f39ca3 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39ca3);
extern "C" void const* const public_6f39cce = __AsmFindLabelExport(&internal_6f39b50, 0x6f39cce);
extern "C" void const* const public_6f39cfc = __AsmFindLabelExport(&internal_6f39b50, 0x6f39cfc);
extern "C" void const* const public_6f39d2a = __AsmFindLabelExport(&internal_6f39b50, 0x6f39d2a);
extern "C" void const* const public_6f39d55 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39d55);
extern "C" void const* const public_6f39d80 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39d80);
extern "C" void const* const public_6f39dae = __AsmFindLabelExport(&internal_6f39b50, 0x6f39dae);
extern "C" void const* const public_6f39dd9 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39dd9);
extern "C" void const* const public_6f39e07 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39e07);
extern "C" void const* const public_6f39e32 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39e32);
extern "C" void const* const public_6f39e5d = __AsmFindLabelExport(&internal_6f39b50, 0x6f39e5d);
extern "C" void const* const public_6f39e88 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39e88);
extern "C" void const* const public_6f39eb3 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39eb3);
extern "C" void const* const public_6f39ede = __AsmFindLabelExport(&internal_6f39b50, 0x6f39ede);
extern "C" void const* const public_6f39f0c = __AsmFindLabelExport(&internal_6f39b50, 0x6f39f0c);
extern "C" void const* const public_6f39f33 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39f33);
extern "C" void const* const public_6f39f57 = __AsmFindLabelExport(&internal_6f39b50, 0x6f39f57);
extern "C" void const* const public_6f39f7b = __AsmFindLabelExport(&internal_6f39b50, 0x6f39f7b);
