#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57d32);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a0b8);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a0ec);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a9e6);
CLANG_FORWARD_PROC_SYMBOL(public_6d5aa65);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab68);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab97);

#define public_6d57d6a _public_6d57d6a
#define public_6d57d6f _public_6d57d6f
#define public_6d57d79 _public_6d57d79
#define public_6d57d7b _public_6d57d7b
#define public_6d57d84 _public_6d57d84
#define public_6d57d8d _public_6d57d8d
#define public_6d57d97 _public_6d57d97
#define public_6d57d9c _public_6d57d9c
#define public_6d57da6 _public_6d57da6
#define public_6d57dab _public_6d57dab
#define public_6d57dae _public_6d57dae
#define public_6d57db5 _public_6d57db5
#define public_6d57dd9 _public_6d57dd9
#define public_6d57e2a _public_6d57e2a
#define public_6d57e34 _public_6d57e34
#define public_6d57e3b _public_6d57e3b
#define public_6d57e84 _public_6d57e84
#define public_6d57ea3 _public_6d57ea3
#define public_6d57ea8 _public_6d57ea8
#define public_6d57ecb _public_6d57ecb
#define public_6d57f04 _public_6d57f04
#define public_6d57f34 _public_6d57f34
#define public_6d57f36 _public_6d57f36
#define public_6d57f3d _public_6d57f3d
#define public_6d57f68 _public_6d57f68
#define public_6d57f6d _public_6d57f6d
#define public_6d57f90 _public_6d57f90
#define public_6d57f95 _public_6d57f95
#define public_6d57f9a _public_6d57f9a
#define public_6d57f9d _public_6d57f9d
#define public_6d57fa5 _public_6d57fa5
#define public_6d57fb4 _public_6d57fb4
#define public_6d57fba _public_6d57fba
#define public_6d57fe5 _public_6d57fe5
#define public_6d57ff4 _public_6d57ff4
#define public_6d57ff9 _public_6d57ff9
#define public_6d58019 _public_6d58019
#define public_6d58078 _public_6d58078
#define public_6d5807d _public_6d5807d
#define public_6d5809d _public_6d5809d
#define public_6d580c3 _public_6d580c3
#define public_6d580d3 _public_6d580d3
#define public_6d580e7 _public_6d580e7
#define public_6d58123 _public_6d58123
#define public_6d58128 _public_6d58128
#define public_6d58149 _public_6d58149
#define public_6d58189 _public_6d58189
#define public_6d58193 _public_6d58193
#define public_6d58196 _public_6d58196
#define public_6d581aa _public_6d581aa
#define public_6d581cb _public_6d581cb
#define public_6d58230 _public_6d58230
#define public_6d58232 _public_6d58232
#define public_6d58241 _public_6d58241
#define public_6d582e2 _public_6d582e2
#define public_6d58351 _public_6d58351
#define public_6d58357 _public_6d58357
#define public_6d58367 _public_6d58367
#define public_6d5837d _public_6d5837d
#define public_6d5838a _public_6d5838a
#define public_6d58391 _public_6d58391
#define public_6d583b2 _public_6d583b2
#define public_6d583c1 _public_6d583c1
#define public_6d583d2 _public_6d583d2
#define public_6d583ea _public_6d583ea
#define public_6d58432 _public_6d58432
#define public_6d58436 _public_6d58436
#define public_6d5843e _public_6d5843e
#define public_6d58446 _public_6d58446
#define public_6d5844d _public_6d5844d
#define public_6d58453 _public_6d58453
#define public_6d58492 _public_6d58492
#define public_6d58498 _public_6d58498
#define public_6d5849e _public_6d5849e

PROC_DECLARE(0x6d57d32, internal_6d57d32, public_6d57d32);
extern "C" NAKED register_t __cdecl internal_6d57d32()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ebx+0x30]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+0x34]
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x14], edi
        mov dword ptr ss : [ebp-0xC], eax
        jae public_6d57d6a
        sub ecx, eax
        dec ecx
        jmp public_6d57d6f
        public_6d57d6a : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        sub ecx, eax
        public_6d57d6f : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, 9
        mov dword ptr ss : [ebp-0x10], ecx
        jbe public_6d57dae
        public_6d57d79 : nop
        push 0xFFFFFFFE
        public_6d57d7b : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        public_6d57d84 : nop
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], eax
        public_6d57d8d : nop
        mov eax, edi
        sub eax, dword ptr ds : [esi]
        add dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d57d97 : nop
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x34], eax
        public_6d57d9c : nop
        push esi
        push ebx
        call public_6d5ab97
        add esp, 0xC
        public_6d57da6 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6d57dab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
/*FIXUP public_6d57dae : nop
        jmp dword ptr ds : [eax*4+public_6d584a5] @0x6d57dae*/
  JMPTB public_6d57dae : nop
        cmp eax, 0
  JMPTB je public_6d57dd9
  JMPTB cmp eax, 1
  JMPTB je public_6d57ea3
  JMPTB cmp eax, 2
  JMPTB je public_6d57f04
  JMPTB cmp eax, 3
  JMPTB je public_6d57ff4
  JMPTB cmp eax, 4
  JMPTB je public_6d580c3
  JMPTB cmp eax, 5
  JMPTB je public_6d58241
  JMPTB cmp eax, 6
  JMPTB je public_6d582e2
  JMPTB cmp eax, 7
  JMPTB je public_6d58453
  JMPTB cmp eax, 8
  JMPTB je public_6d5849e
  JMPTB cmp eax, 9
  JMPTB je public_6d5838a
  JMPTB int 3
        public_6d57db5 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx eax, byte ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp-4], eax
        inc edi
        add dword ptr ss : [ebp+8], 8
        mov dword ptr ss : [ebp-0x14], edi
        public_6d57dd9 : nop
        cmp dword ptr ss : [ebp+8], 3
        jb public_6d57db5
        mov eax, dword ptr ss : [ebp-4]
        and eax, 7
        xor edx, edx
        mov ecx, eax
        inc edx
        and ecx, edx
        shr eax, 1
        sub eax, 0
        mov dword ptr ds : [ebx+0x18], ecx
        je public_6d57e84
        dec eax
        je public_6d57e3b
        dec eax
        je public_6d57e2a
        dec eax
        jne public_6d58367
        mov eax, dword ptr ss : [ebp-4]
        shr eax, 3
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62274
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0xFFFFFFFD
        push 0xFFFFFFFD
        jmp public_6d57d84
        public_6d57e2a : nop
        shr dword ptr ss : [ebp-4], 3
        push 3
        pop eax
        sub dword ptr ss : [ebp+8], eax
        public_6d57e34 : nop
        mov dword ptr ds : [ebx], eax
        jmp public_6d58367
        public_6d57e3b : nop
        push esi
        lea eax, ss:[ebp-0x1C]
        push eax
        lea eax, ss:[ebp-0x20]
        push eax
        lea eax, ss:[ebp-0x24]
        push eax
        lea eax, ss:[ebp-0x28]
        push eax
        call public_6d5ab68
        push esi
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x20]
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp-0x28]
        call public_6d5a0b8
        add esp, 0x28
        test eax, eax
        mov dword ptr ds : [ebx+4], eax
        je public_6d58446
        shr dword ptr ss : [ebp-4], 3
        sub dword ptr ss : [ebp+8], 3
        mov dword ptr ds : [ebx], 6
        jmp public_6d58367
        public_6d57e84 : nop
        sub dword ptr ss : [ebp+8], 3
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        and ecx, 7
        shr eax, 3
        shr eax, cl
        sub dword ptr ss : [ebp+8], ecx
        mov dword ptr ds : [ebx], edx
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d58367
        public_6d57ea3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d57ecb
        public_6d57ea8 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx eax, byte ptr ds : [edi]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp-4], eax
        inc edi
        add ecx, 8
        mov dword ptr ss : [ebp-0x14], edi
        mov dword ptr ss : [ebp+8], ecx
        public_6d57ecb : nop
        cmp ecx, 0x20
        jb public_6d57ea8
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        not ecx
        and eax, 0xFFFF
        shr ecx, 0x10
        cmp ecx, eax
        jne public_6d5837d
        mov dword ptr ds : [ebx+4], eax
        xor eax, eax
        cmp dword ptr ds : [ebx+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-4], eax
        je public_6d57fe5
        push 2
        pop eax
        jmp public_6d57e34
        public_6d57f04 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        test ecx, ecx
        jne public_6d57fa5
        mov ecx, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ss : [ebp-0xC], ecx
        jne public_6d57f3d
        mov eax, dword ptr ds : [ebx+0x30]
        mov edx, dword ptr ds : [ebx+0x28]
        cmp edx, eax
        je public_6d57f3d
        mov dword ptr ss : [ebp-0xC], edx
        jae public_6d57f34
        sub eax, edx
        dec eax
        mov ecx, eax
        jmp public_6d57f36
        public_6d57f34 : nop
        sub ecx, edx
        public_6d57f36 : nop
        test ecx, ecx
        mov dword ptr ss : [ebp-0x10], ecx
        jne public_6d57fa5
        public_6d57f3d : nop
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        push esi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_6d5ab97
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [ebx+0x34]
        add esp, 0xC
        cmp eax, ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x18], ecx
        jae public_6d57f68
        sub ecx, eax
        dec ecx
        jmp public_6d57f6d
        public_6d57f68 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        sub ecx, eax
        public_6d57f6d : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        cmp eax, edx
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0x2C], edx
        jne public_6d57f9d
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [ebp-0x18]
        cmp eax, edx
        je public_6d57f9a
        mov dword ptr ss : [ebp-0xC], eax
        jae public_6d57f90
        sub edx, eax
        dec edx
        mov ecx, edx
        jmp public_6d57f95
        public_6d57f90 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        sub ecx, eax
        public_6d57f95 : nop
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d57f9d
        public_6d57f9a : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d57f9d : nop
        test ecx, ecx
        je public_6d58391
        public_6d57fa5 : nop
        mov eax, dword ptr ds : [ebx+4]
        and dword ptr ss : [ebp+0x10], 0
        cmp eax, dword ptr ss : [ebp-8]
        jbe public_6d57fb4
        mov eax, dword ptr ss : [ebp-8]
        public_6d57fb4 : nop
        cmp eax, ecx
        jbe public_6d57fba
        mov eax, ecx
        public_6d57fba : nop
        mov esi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-0x14], eax
        sub dword ptr ss : [ebp-8], eax
        add dword ptr ss : [ebp-0xC], eax
        sub dword ptr ss : [ebp-0x10], eax
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        sub dword ptr ds : [ebx+4], eax
        jne public_6d58367
        public_6d57fe5 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        neg eax
        sbb eax, eax
        and eax, 7
        jmp public_6d57e34
        public_6d57ff4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d58019
        public_6d57ff9 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx eax, byte ptr ds : [edi]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp-4], eax
        inc edi
        add ecx, 8
        mov dword ptr ss : [ebp+8], ecx
        public_6d58019 : nop
        cmp ecx, 0xE
        jb public_6d57ff9
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0x3FFF
        mov ecx, eax
        and ecx, 0x1F
        cmp ecx, 0x1D
        mov dword ptr ds : [ebx+4], eax
        ja public_6d583b2
        shr eax, 5
        and eax, 0x1F
        cmp eax, 0x1D
        ja public_6d583b2
        push 4
        lea eax, ds:[eax+ecx+0x102]
        push eax
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        je public_6d58446
        shr dword ptr ss : [ebp-4], 0xE
        sub dword ptr ss : [ebp+8], 0xE
        and dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx], 4
        jmp public_6d580c3
        public_6d58078 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d5809d
        public_6d5807d : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx eax, byte ptr ds : [edi]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl eax, cl
        or dword ptr ss : [ebp-4], eax
        inc edi
        add ecx, 8
        mov dword ptr ss : [ebp+8], ecx
        public_6d5809d : nop
        cmp ecx, 3
        jb public_6d5807d
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx*4+public_6d621c8]
        mov edx, dword ptr ds : [ebx+0xC]
        shr dword ptr ss : [ebp-4], 3
        and eax, 7
        mov dword ptr ds : [edx+ecx*4], eax
        inc dword ptr ds : [ebx+8]
        sub dword ptr ss : [ebp+8], 3
        public_6d580c3 : nop
        mov eax, dword ptr ds : [ebx+4]
        shr eax, 0xA
        add eax, 4
        cmp dword ptr ds : [ebx+8], eax
        jb public_6d58078
        jmp public_6d580e7
        public_6d580d3 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax*4+public_6d621c8]
        mov ecx, dword ptr ds : [ebx+0xC]
        and dword ptr ds : [ecx+eax*4], 0
        inc dword ptr ds : [ebx+8]
        public_6d580e7 : nop
        cmp dword ptr ds : [ebx+8], 0x13
        jb public_6d580d3
        push esi
        push dword ptr ds : [ebx+0x24]
        lea ecx, ds:[ebx+0x14]
        lea eax, ds:[ebx+0x10]
        push ecx
        push eax
        push dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax], 7
        call public_6d5a9e6
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d583c1
        and dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 5
        jmp public_6d58241
        public_6d58123 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        jmp public_6d58149
        public_6d58128 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx edx, byte ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl edx, cl
        or dword ptr ss : [ebp-4], edx
        inc edi
        add dword ptr ss : [ebp+8], 8
        public_6d58149 : nop
        cmp dword ptr ss : [ebp+8], eax
        jb public_6d58128
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        and eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ebx+0x14]
        lea eax, ds:[ecx+eax*8]
        movzx ecx, byte ptr ds : [eax+1]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0x2C], edx
        jae public_6d58189
        shr dword ptr ss : [ebp-4], cl
        mov eax, ecx
        sub dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ecx+eax*4], edx
        inc dword ptr ds : [ebx+8]
        jmp public_6d58241
        public_6d58189 : nop
        cmp edx, 0x12
        jne public_6d58193
        push 7
        pop eax
        jmp public_6d58196
        public_6d58193 : nop
        lea eax, ds:[edx-0xE]
        public_6d58196 : nop
        xor ecx, ecx
        cmp edx, 0x12
        sete cl
        lea ecx, ds:[ecx*8+3]
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d581cb
        public_6d581aa : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d583d2
        movzx edx, byte ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+0x10], 0
        dec dword ptr ss : [ebp-8]
        shl edx, cl
        or dword ptr ss : [ebp-4], edx
        inc edi
        add dword ptr ss : [ebp+8], 8
        public_6d581cb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        lea edx, ds:[eax+ecx]
        cmp dword ptr ss : [ebp+8], edx
        jb public_6d581aa
        shr dword ptr ss : [ebp-4], cl
        mov ecx, dword ptr ds : [eax*4+public_6d6ff60]
        and ecx, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0x14], ecx
        mov ecx, eax
        shr dword ptr ss : [ebp-4], cl
        mov ecx, dword ptr ss : [ebp-0x10]
        add eax, ecx
        sub dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, eax
        shr edx, 5
        and edx, 0x1F
        and eax, 0x1F
        lea eax, ds:[edx+eax+0x102]
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        cmp edx, eax
        ja public_6d583ea
        cmp dword ptr ss : [ebp-0x2C], 0x10
        jne public_6d58230
        cmp ecx, 1
        jb public_6d583ea
        mov eax, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [eax+ecx*4-4]
        jmp public_6d58232
        public_6d58230 : nop
        xor eax, eax
        public_6d58232 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edx+ecx*4], eax
        inc ecx
        dec dword ptr ss : [ebp-0x14]
        jne public_6d58232
        mov dword ptr ds : [ebx+8], ecx
        public_6d58241 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, eax
        shr ecx, 5
        and ecx, 0x1F
        and eax, 0x1F
        lea eax, ds:[ecx+eax+0x102]
        cmp dword ptr ds : [ebx+8], eax
        jb public_6d58123
        mov eax, dword ptr ds : [ebx+4]
        and dword ptr ds : [ebx+0x14], 0
        push esi
        push dword ptr ds : [ebx+0x24]
        lea ecx, ss:[ebp-0x30]
        push ecx
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea ecx, ss:[ebp-0x14]
        push ecx
        lea ecx, ss:[ebp-0x18]
        push ecx
        push dword ptr ds : [ebx+0xC]
        mov ecx, eax
        shr ecx, 5
        and ecx, 0x1F
        inc ecx
        and eax, 0x1F
        push ecx
        add eax, 0x101
        push eax
        mov dword ptr ss : [ebp-0x18], 9
        mov dword ptr ss : [ebp-0x14], 6
        call public_6d5aa65
        push dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp-0x10], eax
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        add esp, 0x2C
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d58432
        push esi
        push dword ptr ss : [ebp-0x30]
        push dword ptr ss : [ebp-0x34]
        push dword ptr ss : [ebp-0x14]
        push dword ptr ss : [ebp-0x18]
        call public_6d5a0b8
        add esp, 0x14
        test eax, eax
        je public_6d58446
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 6
        public_6d582e2 : nop
        mov eax, dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], eax
        mov eax, edi
        sub eax, dword ptr ds : [esi]
        push esi
        add dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_6d5a0ec
        add esp, 0xC
        cmp eax, 1
        jne public_6d58492
        and dword ptr ss : [ebp+0x10], 0
        push esi
        push dword ptr ds : [ebx+4]
        call public_6d5a650
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [ebx+0x1C]
        pop ecx
        pop ecx
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+0x30]
        cmp ecx, eax
        mov dword ptr ss : [ebp-0x14], edi
        mov dword ptr ss : [ebp-0xC], ecx
        jae public_6d58351
        sub eax, ecx
        dec eax
        jmp public_6d58357
        public_6d58351 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        sub eax, dword ptr ss : [ebp-0xC]
        public_6d58357 : nop
        cmp dword ptr ds : [ebx+0x18], 0
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d5844d
        and dword ptr ds : [ebx], 0
        public_6d58367 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, 9
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-0x14]
        jbe public_6d57dab
        jmp public_6d57d79
        public_6d5837d : nop
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62254
        public_6d5838a : nop
        push 0xFFFFFFFD
        jmp public_6d57d7b
        public_6d58391 : nop
        mov ecx, dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x20], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x1C], ecx
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, edi
        sub ecx, dword ptr ds : [esi]
        add dword ptr ds : [esi+8], ecx
        jmp public_6d57d97
        public_6d583b2 : nop
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62230
        jmp public_6d5838a
        public_6d583c1 : nop
        push dword ptr ds : [ebx+0xC]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFD
        pop ecx
        pop ecx
        jmp public_6d58436
        public_6d583d2 : nop
        mov eax, dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x1C], eax
        and dword ptr ds : [esi+4], 0
        jmp public_6d57d8d
        public_6d583ea : nop
        push dword ptr ds : [ebx+0xC]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx], 9
        mov dword ptr ds : [esi+0x18], offset public_6d62214
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], eax
        mov eax, edi
        sub eax, dword ptr ds : [esi]
        push 0xFFFFFFFD
        add dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [ebp-0xC]
        push esi
        mov dword ptr ds : [esi], edi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_6d5ab97
        add esp, 0x14
        jmp public_6d57da6
        public_6d58432 : nop
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFD
        public_6d58436 : nop
        jne public_6d5843e
        mov dword ptr ds : [ebx], 9
        public_6d5843e : nop
        push dword ptr ss : [ebp-0x10]
        jmp public_6d57d7b
        public_6d58446 : nop
        push 0xFFFFFFFC
        jmp public_6d57d7b
        public_6d5844d : nop
        mov dword ptr ds : [ebx], 7
        public_6d58453 : nop
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        push esi
        push ebx
        mov dword ptr ds : [ebx+0x34], eax
        call public_6d5ab97
        mov ecx, dword ptr ds : [ebx+0x34]
        add esp, 0xC
        cmp dword ptr ds : [ebx+0x30], ecx
        mov dword ptr ss : [ebp-0xC], ecx
        je public_6d58498
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+0x20], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x1C], ecx
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, edi
        sub ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edi
        add dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ebx+0x34], ecx
        public_6d58492 : nop
        push eax
        jmp public_6d57d9c
        public_6d58498 : nop
        mov dword ptr ds : [ebx], 8
        public_6d5849e : nop
        push 1
        jmp public_6d57d7b
        UNREACHABLE_TRAP(0x6d57d32)
        ASM_EXPORT_ENTRY_FIRST(0x6d57dd9, public_6d57dd9)
        ASM_EXPORT_ENTRY(0x6d57ea3, public_6d57ea3)
        ASM_EXPORT_ENTRY(0x6d57f04, public_6d57f04)
        ASM_EXPORT_ENTRY(0x6d57ff4, public_6d57ff4)
        ASM_EXPORT_ENTRY(0x6d580c3, public_6d580c3)
        ASM_EXPORT_ENTRY(0x6d58241, public_6d58241)
        ASM_EXPORT_ENTRY(0x6d582e2, public_6d582e2)
        ASM_EXPORT_ENTRY(0x6d5838a, public_6d5838a)
        ASM_EXPORT_ENTRY(0x6d58453, public_6d58453)
        ASM_EXPORT_ENTRY_LAST(0x6d5849e, public_6d5849e)
    }
}

#undef public_6d57d6a
#undef public_6d57d6f
#undef public_6d57d79
#undef public_6d57d7b
#undef public_6d57d84
#undef public_6d57d8d
#undef public_6d57d97
#undef public_6d57d9c
#undef public_6d57da6
#undef public_6d57dab
#undef public_6d57dae
#undef public_6d57db5
#undef public_6d57dd9
#undef public_6d57e2a
#undef public_6d57e34
#undef public_6d57e3b
#undef public_6d57e84
#undef public_6d57ea3
#undef public_6d57ea8
#undef public_6d57ecb
#undef public_6d57f04
#undef public_6d57f34
#undef public_6d57f36
#undef public_6d57f3d
#undef public_6d57f68
#undef public_6d57f6d
#undef public_6d57f90
#undef public_6d57f95
#undef public_6d57f9a
#undef public_6d57f9d
#undef public_6d57fa5
#undef public_6d57fb4
#undef public_6d57fba
#undef public_6d57fe5
#undef public_6d57ff4
#undef public_6d57ff9
#undef public_6d58019
#undef public_6d58078
#undef public_6d5807d
#undef public_6d5809d
#undef public_6d580c3
#undef public_6d580d3
#undef public_6d580e7
#undef public_6d58123
#undef public_6d58128
#undef public_6d58149
#undef public_6d58189
#undef public_6d58193
#undef public_6d58196
#undef public_6d581aa
#undef public_6d581cb
#undef public_6d58230
#undef public_6d58232
#undef public_6d58241
#undef public_6d582e2
#undef public_6d58351
#undef public_6d58357
#undef public_6d58367
#undef public_6d5837d
#undef public_6d5838a
#undef public_6d58391
#undef public_6d583b2
#undef public_6d583c1
#undef public_6d583d2
#undef public_6d583ea
#undef public_6d58432
#undef public_6d58436
#undef public_6d5843e
#undef public_6d58446
#undef public_6d5844d
#undef public_6d58453
#undef public_6d58492
#undef public_6d58498
#undef public_6d5849e

#pragma init_seg(compiler)
extern "C" void const* const public_6d57dd9 = __AsmFindLabelExport(&internal_6d57d32, 0x6d57dd9);
extern "C" void const* const public_6d57ea3 = __AsmFindLabelExport(&internal_6d57d32, 0x6d57ea3);
extern "C" void const* const public_6d57f04 = __AsmFindLabelExport(&internal_6d57d32, 0x6d57f04);
extern "C" void const* const public_6d57ff4 = __AsmFindLabelExport(&internal_6d57d32, 0x6d57ff4);
extern "C" void const* const public_6d580c3 = __AsmFindLabelExport(&internal_6d57d32, 0x6d580c3);
extern "C" void const* const public_6d58241 = __AsmFindLabelExport(&internal_6d57d32, 0x6d58241);
extern "C" void const* const public_6d582e2 = __AsmFindLabelExport(&internal_6d57d32, 0x6d582e2);
extern "C" void const* const public_6d5838a = __AsmFindLabelExport(&internal_6d57d32, 0x6d5838a);
extern "C" void const* const public_6d58453 = __AsmFindLabelExport(&internal_6d57d32, 0x6d58453);
extern "C" void const* const public_6d5849e = __AsmFindLabelExport(&internal_6d57d32, 0x6d5849e);
