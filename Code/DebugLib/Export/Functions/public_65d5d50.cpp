#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d5500);
CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d5540);
CLANG_FORWARD_PROC_SYMBOL(public_65d5570);
CLANG_FORWARD_PROC_SYMBOL(public_65d6460);
CLANG_FORWARD_PROC_SYMBOL(public_65d64f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6a30);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c40);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c76);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c7c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb2);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d7845);
CLANG_FORWARD_PROC_SYMBOL(public_65d7880);
CLANG_FORWARD_PROC_SYMBOL(public_65d7990);
CLANG_FORWARD_JUMP_SYMBOL(public_65e00b9);

#define public_65d5d85 _public_65d5d85
#define public_65d5de6 _public_65d5de6
#define public_65d5e0b _public_65d5e0b
#define public_65d5e83 _public_65d5e83
#define public_65d5e85 _public_65d5e85
#define public_65d5e9d _public_65d5e9d
#define public_65d5edd _public_65d5edd
#define public_65d5eea _public_65d5eea
#define public_65d5f3b _public_65d5f3b
#define public_65d601b _public_65d601b
#define public_65d6022 _public_65d6022
#define public_65d6055 _public_65d6055
#define public_65d6058 _public_65d6058
#define public_65d605f _public_65d605f
#define public_65d6076 _public_65d6076
#define public_65d607d _public_65d607d
#define public_65d60a7 _public_65d60a7
#define public_65d60bc _public_65d60bc
#define public_65d60c9 _public_65d60c9
#define public_65d611f _public_65d611f
#define public_65d6131 _public_65d6131
#define public_65d613c _public_65d613c
#define public_65d6166 _public_65d6166
#define public_65d6168 _public_65d6168
#define public_65d6171 _public_65d6171
#define public_65d6173 _public_65d6173

PROC_DECLARE(0x65d5d50, internal_65d5d50, public_65d5d50);
extern "C" NAKED register_t __cdecl internal_65d5d50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65e00b9 @0x65d5d58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e00b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x434
        push ebx
        mov ebx, dword ptr ss : [esp+0x448]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx+4]
        push edi
        cmp eax, 0xFFFFFFFF
        jne public_65d5d85
        or eax, eax
        jmp public_65d6173
        public_65d5d85 : nop
        mov ecx, 1
        mov dword ptr ss : [esp+0x240], eax
        mov dword ptr ss : [esp+0x13C], eax
        mov dword ptr ss : [esp+0x23C], ecx
        mov dword ptr ss : [esp+0x138], ecx
        lea eax, ss:[esp+0x20]
        lea ecx, ss:[esp+0x138]
        push eax
        lea edx, ss:[esp+0x344]
        push ecx
        lea eax, ss:[esp+0x244]
        xor ebp, ebp
        push edx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x354], ebp
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        call public_65d6c7c
        cmp eax, 0xFFFFFFFF
        jne public_65d5de6
        or eax, eax
        jmp public_65d6173
        public_65d5de6 : nop
        cmp eax, ebp
        je public_65d5edd
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x138]
        push ecx
        push edx
        call public_65d6cb2
        test eax, eax
        je public_65d5e0b
        or eax, 0xFFFFFFFF
        jmp public_65d6173
        public_65d5e0b : nop
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x23C]
        push eax
        push ecx
        call public_65d6cb2
        test eax, eax
        je public_65d5edd
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x18]
        lea eax, ss:[esp+0x28]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x24], 0x10
        call public_65d6c76
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_65d5edd
        push 0x2524
        call public_65d6f71
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x44C], ebp
        je public_65d5e83
        mov ecx, esi
        call public_65d64f0
        mov dword ptr ds : [esi], offset public_65e14cc
        mov dword ptr ds : [esi+0x2520], 1
        mov eax, esi
        jmp public_65d5e85
        public_65d5e83 : nop
        xor eax, eax
        public_65d5e85 : nop
        or esi, 0xFFFFFFFF
        cmp eax, ebp
        mov dword ptr ss : [esp+0x44C], esi
        mov dword ptr ss : [esp+0x14], eax
        je public_65d5e9d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_65d5e9d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ss : [esp+0x450], 1
        call public_65d5500
        mov eax, dword ptr ds : [ebx+0xC]
        lea ecx, ds:[ebx+8]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_65d6460
        mov dword ptr ss : [esp+0x44C], esi
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        je public_65d5edd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65d5edd : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_65d6171
        public_65d5eea : nop
        mov esi, dword ptr ds : [edi+8]
        lea ebp, ds:[edi+8]
        mov ecx, esi
        call public_65d5570
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x38]
        push 0xFF
        push eax
        push esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xFFFFFFFF
        jne public_65d5f3b
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65e3298 @0x65d5f0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3298
        push esi
        call dword ptr ds : [ecx+0x18]
        mov ecx, esi
        call public_65d5520
        mov ecx, esi
        call public_65d5540
        mov edx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], esi
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, ebp
        jmp public_65d6058
        public_65d5f3b : nop
        test eax, eax
        jle public_65d6166
        lea edx, ss:[esp+0x38]
        push 0xA
        push edx
        call public_65d7990
        add esp, 8
        test eax, eax
        je public_65d6022
        mov byte ptr ds : [eax], 0
        lea eax, ss:[esp+0x38]
        push 0x20
        push eax
        call public_65d7990
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        je public_65d607d
        lea eax, ss:[ebp+1]
        push 0x20
        push eax
        call public_65d7990
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_65d6076
        mov ecx, ebp
        lea edx, ss:[esp+0x38]
        sub ecx, edx
        lea eax, ds:[esi+0x2018]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call public_65d7880
        mov eax, ebx
        mov edx, esi
        sub eax, ebp
        sub edx, ebp
        dec eax
        lea ecx, ds:[esi+0x2117]
        push eax
        lea eax, ss:[ebp+1]
        push eax
        push ecx
        mov byte ptr ss : [esp+edx+0x2068], 0
        call public_65d7880
        sub ebp, ebx
        lea eax, ds:[esi+0x2518]
        inc ebx
        mov byte ptr ds : [esi+ebp+0x2118], 0
        lea ebp, ds:[esi+0x251C]
        push ebp
        push eax
/*FIXUP push offset public_65e328c @0x65d5fe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e328c
        push ebx
        call public_65d7845
        add esp, 0x28
        cmp eax, 2
        je public_65d601b
        lea eax, ds:[esi+0x2018]
/*FIXUP push offset public_65e3288 @0x65d5ffc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3288
        push eax
        call public_65d6c40
        add esp, 8
        test eax, eax
        jne public_65d6076
        mov dword ptr ds : [esi+0x2518], eax
        mov dword ptr ss : [ebp], 9
        public_65d601b : nop
        mov ebx, dword ptr ss : [esp+0x454]
        public_65d6022 : nop
        mov eax, dword ptr ds : [esi+0x2518]
        cmp eax, 1
        jle public_65d60a7
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65e3268 @0x65d602f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3268
        push esi
        call dword ptr ds : [eax+0x18]
        mov ecx, esi
        call public_65d5520
        mov ecx, esi
        call public_65d5540
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], eax
        public_65d6055 : nop
        lea ecx, ds:[edi+8]
        public_65d6058 : nop
        push 0
        call public_65d6a30
        public_65d605f : nop
        push edi
        call public_65d6cb8
        mov eax, dword ptr ds : [ebx+0x10]
        add esp, 4
        dec eax
        mov edi, esi
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_65d6168
        public_65d6076 : nop
        mov ebx, dword ptr ss : [esp+0x454]
        public_65d607d : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65e324c @0x65d607f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e324c
        push esi
        call dword ptr ds : [edx+0x18]
        mov ecx, esi
        call public_65d5520
        mov ecx, esi
        call public_65d5540
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], esi
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        jmp public_65d6055
        public_65d60a7 : nop
        cmp eax, 1
        mov dword ptr ss : [esp+0x14], 0
        jne public_65d60bc
        mov dword ptr ss : [esp+0x14], 4
        public_65d60bc : nop
        mov ebp, dword ptr ds : [ebx+0x18]
        mov byte ptr ss : [esp+0x13], 0
        cmp ebp, dword ptr ss : [ebp]
        je public_65d6131
        public_65d60c9 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_65d613c
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_65d611f
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+ecx+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        setne al
        test al, al
        je public_65d611f
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x13], 1
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+ecx+0x38]
        push ecx
        push esi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_65d611f
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65e3230 @0x65d6116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3230
        push esi
        call dword ptr ds : [edx+0x18]
        public_65d611f : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov ebp, dword ptr ss : [ebp+4]
        cmp ebp, dword ptr ds : [eax]
        jne public_65d60c9
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_65d613c
        public_65d6131 : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65e3230 @0x65d6133*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3230
        push esi
        call dword ptr ds : [ecx+0x18]
        public_65d613c : nop
        mov ecx, esi
        call public_65d5520
        mov ecx, esi
        call public_65d5540
        mov edx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], esi
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[edi+8]
        call public_65d2630
        jmp public_65d605f
        public_65d6166 : nop
        mov edi, dword ptr ds : [edi]
        public_65d6168 : nop
        cmp edi, dword ptr ds : [ebx+0xC]
        jne public_65d5eea
        public_65d6171 : nop
        xor eax, eax
        public_65d6173 : nop
        mov ecx, dword ptr ss : [esp+0x444]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x440
        ret 4
        UNREACHABLE_TRAP(0x65d5d50)
    }
}

#undef public_65d5d85
#undef public_65d5de6
#undef public_65d5e0b
#undef public_65d5e83
#undef public_65d5e85
#undef public_65d5e9d
#undef public_65d5edd
#undef public_65d5eea
#undef public_65d5f3b
#undef public_65d601b
#undef public_65d6022
#undef public_65d6055
#undef public_65d6058
#undef public_65d605f
#undef public_65d6076
#undef public_65d607d
#undef public_65d60a7
#undef public_65d60bc
#undef public_65d60c9
#undef public_65d611f
#undef public_65d6131
#undef public_65d613c
#undef public_65d6166
#undef public_65d6168
#undef public_65d6171
#undef public_65d6173
