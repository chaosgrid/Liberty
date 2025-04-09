#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_487550);
CLANG_FORWARD_PROC_SYMBOL(public_4877f0);
CLANG_FORWARD_PROC_SYMBOL(public_487cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4880f0);
CLANG_FORWARD_PROC_SYMBOL(public_4889e0);
CLANG_FORWARD_PROC_SYMBOL(public_488c20);
CLANG_FORWARD_PROC_SYMBOL(public_4890c0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_486ce2 _public_486ce2
#define public_486dab _public_486dab
#define public_486dcd _public_486dcd
#define public_486e09 _public_486e09
#define public_486e50 _public_486e50
#define public_486e6a _public_486e6a
#define public_486ec3 _public_486ec3
#define public_486f16 _public_486f16
#define public_486f43 _public_486f43
#define public_486fab _public_486fab
#define public_487002 _public_487002
#define public_487014 _public_487014
#define public_487034 _public_487034
#define public_487067 _public_487067
#define public_48707e _public_48707e
#define public_48708e _public_48708e
#define public_48709e _public_48709e
#define public_4870ae _public_4870ae
#define public_4870c0 _public_4870c0
#define public_4870f0 _public_4870f0
#define public_487107 _public_487107
#define public_487117 _public_487117
#define public_487127 _public_487127
#define public_487137 _public_487137
#define public_487149 _public_487149
#define public_48718e _public_48718e
#define public_4871b0 _public_4871b0
#define public_48726d _public_48726d
#define public_487279 _public_487279
#define public_487297 _public_487297
#define public_487335 _public_487335
#define public_487370 _public_487370
#define public_487391 _public_487391
#define public_4873a6 _public_4873a6
#define public_4873c3 _public_4873c3
#define public_4873d8 _public_4873d8
#define public_4873f2 _public_4873f2
#define public_487405 _public_487405
#define public_48741e _public_48741e
#define public_487435 _public_487435
#define public_487449 _public_487449
#define public_487463 _public_487463
#define public_487476 _public_487476
#define public_48748f _public_48748f
#define public_4874b3 _public_4874b3
#define public_4874d2 _public_4874d2
#define public_4874e5 _public_4874e5
#define public_4874ec _public_4874ec

PROC_DECLARE(0x486ca0, internal_486ca0, public_486ca0);
extern "C" NAKED register_t __cdecl internal_486ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x1218
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x121C]
        cmp eax, 0x3006
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        ja public_4873c3
        je public_4871b0
        add eax, 0xFFFFFFDA
        cmp eax, 0x1C
        ja public_4874ec
/*FIXUP movzx eax, byte ptr ds : [eax+public_487514] @0x486cd4*/
/*FIXUP jmp dword ptr ds : [eax*4+public_4874fc] @0x486cdb*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000b039
  JMPTB mov eax, 0
  JMPTB public_4c0000000000b039 : nop
        je public_486dab
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000b035
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b035 : nop
        je public_4874ec
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000b031
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b031 : nop
        je public_4874ec
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000b02d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b02d : nop
        je public_4874ec
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000b029
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b029 : nop
        je public_4874ec
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000b025
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b025 : nop
        je public_4874ec
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000b021
  JMPTB mov eax, 1
  JMPTB public_4c0000000000b021 : nop
        je public_487067
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000b01d
  JMPTB mov eax, 2
  JMPTB public_4c0000000000b01d : nop
        je public_4870f0
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000b019
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b019 : nop
        je public_4874ec
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000b015
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b015 : nop
        je public_4874ec
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000b011
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b011 : nop
        je public_4874ec
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000b00d
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b00d : nop
        je public_4874ec
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000b009
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b009 : nop
        je public_4874ec
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000b005
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b005 : nop
        je public_4874ec
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000b001
  JMPTB mov eax, 5
  JMPTB public_4c0000000000b001 : nop
        je public_4874ec
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000affd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000affd : nop
        je public_4874ec
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000aff9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000aff9 : nop
        je public_4874ec
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000aff5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000aff5 : nop
        je public_4874ec
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000aff1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000aff1 : nop
        je public_4874ec
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000afed
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afed : nop
        je public_4874ec
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000afe9
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afe9 : nop
        je public_4874ec
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000afe5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afe5 : nop
        je public_4874ec
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000afe1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afe1 : nop
        je public_4874ec
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000afdd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afdd : nop
        je public_4874ec
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000afd9
  JMPTB mov eax, 3
  JMPTB public_4c0000000000afd9 : nop
        je public_48718e
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000afd5
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afd5 : nop
        je public_4874ec
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000afd1
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afd1 : nop
        je public_4874ec
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000afcd
  JMPTB mov eax, 5
  JMPTB public_4c0000000000afcd : nop
        je public_4874ec
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000afc9
  JMPTB mov eax, 4
  JMPTB public_4c0000000000afc9 : nop
        je public_486ce2
  JMPTB int 3
        public_486ce2 : nop
        mov eax, dword ptr ss : [esp+0x1230]
        mov esi, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ss : [ebp]
        lea esi, ss:[ebp+0x60]
        push esi
        mov ecx, ebp
        call dword ptr ds : [edx+0x14]
        fld dword ptr ds : [esi+8]
        fadd dword ptr ss : [ebp+0xE94]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fadd dword ptr ss : [ebp+0xE90]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fadd dword ptr ss : [ebp+0xE8C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [ebp+0x5DC]
        lea ecx, ss:[ebp+0x5DC]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x14]
        fld dword ptr ds : [esi+8]
        fadd dword ptr ss : [ebp+0x1750]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fadd dword ptr ss : [ebp+0x174C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fadd dword ptr ss : [ebp+0x1748]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [ebp+0xE98]
        lea ecx, ss:[ebp+0xE98]
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x14]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_486dab : nop
        mov eax, dword ptr ss : [esp+0x1230]
        cmp eax, dword ptr ss : [ebp+0x5AC]
        jne public_486dcd
        mov al, byte ptr ss : [ebp+0x5D4]
        test al, al
        je public_4874ec
        jmp public_4874e5
        public_486dcd : nop
        cmp eax, dword ptr ss : [ebp+0x5B0]
        jne public_486e09
        mov al, byte ptr ss : [ebp+0x5D5]
        test al, al
        je public_4874ec
        mov eax, dword ptr ss : [ebp+0xE88]
        cmp eax, 0xFFFFFFFF
        je public_4874ec
        push eax
        mov ecx, ebp
        call public_4880f0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_486e09 : nop
        cmp eax, dword ptr ss : [ebp+0x5B4]
        jne public_486ec3
        mov al, byte ptr ss : [ebp+0x5D6]
        xor ebx, ebx
        cmp al, bl
        je public_4874ec
        mov eax, dword ptr ss : [ebp+0xE88]
        cmp eax, 0xFFFFFFFF
        je public_4874ec
        mov ecx, dword ptr ss : [ebp+0x344]
        mov esi, dword ptr ds : [public_5c700c]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*4+0x14]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_486e50
        mov esi, eax
        public_486e50 : nop
        mov ecx, dword ptr ss : [ebp+0x1764]
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x338], 1
        je public_486e6a
        push ebx
        call public_57c7d0
        public_486e6a : nop
        mov eax, dword ptr ds : [public_67eca8]
        push 0x400
        lea edx, ss:[esp+0xA2C]
        push edx
        push 0x75C
        push eax
        call public_4347e0
        push esi
        lea ecx, ss:[esp+0xA3C]
        push ecx
        lea edx, ss:[esp+0x240]
        push edx
        call dword ptr ds : [public_5c70ec]
/*FIXUP push offset public_611aec @0x486e9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611aec
        lea eax, ss:[esp+0x248]
        push eax
        push ebp
        call public_4889e0
        add esp, 0x28
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_486ec3 : nop
        cmp eax, dword ptr ss : [ebp+0x5B8]
        jne public_486f43
        mov al, byte ptr ss : [ebp+0x5D7]
        xor ebx, ebx
        cmp al, bl
        je public_4874ec
        mov edx, dword ptr ds : [public_67eca8]
        push 0x400
        lea ecx, ss:[esp+0x22C]
        push ecx
        push 0x75B
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x1764]
        add esp, 0x10
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x338], 2
        je public_486f16
        push ebx
        call public_57c7d0
        public_486f16 : nop
        push ebx
        lea eax, ss:[esp+0x22C]
        push eax
        push ebp
        mov byte ptr ss : [ebp+0xE7E], bl
        mov byte ptr ss : [ebp+0x173A], bl
        call public_4889e0
        add esp, 0xC
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_486f43 : nop
        cmp eax, dword ptr ss : [ebp+0x5BC]
        jne public_486fab
        mov al, byte ptr ss : [ebp+0x5D8]
        test al, al
        je public_4874ec
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x330]
        push ecx
        call public_4a7690
        mov edx, dword ptr ss : [ebp+0x5DC]
        lea ecx, ss:[ebp+0x5DC]
        add esp, 4
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp+0xE98]
        lea ecx, ss:[ebp+0xE98]
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x84]
        push ebp
        call public_43d2a0
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_486fab : nop
        cmp eax, dword ptr ss : [ebp+0x1760]
        je public_4874ec
        cmp eax, dword ptr ss : [ebp+0x1788]
        jne public_487034
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x330]
        push eax
        call public_4a7690
        mov edx, dword ptr ss : [ebp+0x5DC]
        lea ecx, ss:[ebp+0x5DC]
        add esp, 4
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp+0xE98]
        lea ecx, ss:[ebp+0xE98]
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        cmp eax, ebx
        je public_487014
        public_487002 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_487002
        public_487014 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
/*FIXUP public_487034 : nop
        push offset public_5d2244 @0x487034*/
  FIXUP public_487034 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2244
        push 0x260
/*FIXUP push offset public_5d1e40 @0x48703e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x487048*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_487067 : nop
        mov eax, dword ptr ss : [esp+0x1230]
        cmp eax, dword ptr ss : [ebp+0x5AC]
        jne public_48707e
        mov ecx, dword ptr ss : [ebp+0x5C0]
        jmp public_4870c0
        public_48707e : nop
        cmp eax, dword ptr ss : [ebp+0x5B0]
        jne public_48708e
        mov ecx, dword ptr ss : [ebp+0x5C4]
        jmp public_4870c0
        public_48708e : nop
        cmp eax, dword ptr ss : [ebp+0x5B4]
        jne public_48709e
        mov ecx, dword ptr ss : [ebp+0x5C8]
        jmp public_4870c0
        public_48709e : nop
        cmp eax, dword ptr ss : [ebp+0x5B8]
        jne public_4870ae
        mov ecx, dword ptr ss : [ebp+0x5CC]
        jmp public_4870c0
        public_4870ae : nop
        cmp eax, dword ptr ss : [ebp+0x5BC]
        jne public_4874ec
        mov ecx, dword ptr ss : [ebp+0x5D0]
        public_4870c0 : nop
        xor ebx, ebx
        cmp ecx, ebx
        je public_4874ec
        test byte ptr ds : [ecx+0x6C], 1
        je public_4874ec
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 0x51
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_4870f0 : nop
        mov eax, dword ptr ss : [esp+0x1230]
        cmp eax, dword ptr ss : [ebp+0x5AC]
        jne public_487107
        mov ebp, dword ptr ss : [ebp+0x5C0]
        jmp public_487149
        public_487107 : nop
        cmp eax, dword ptr ss : [ebp+0x5B0]
        jne public_487117
        mov ebp, dword ptr ss : [ebp+0x5C4]
        jmp public_487149
        public_487117 : nop
        cmp eax, dword ptr ss : [ebp+0x5B4]
        jne public_487127
        mov ebp, dword ptr ss : [ebp+0x5C8]
        jmp public_487149
        public_487127 : nop
        cmp eax, dword ptr ss : [ebp+0x5B8]
        jne public_487137
        mov ebp, dword ptr ss : [ebp+0x5CC]
        jmp public_487149
        public_487137 : nop
        cmp eax, dword ptr ss : [ebp+0x5BC]
        jne public_4874ec
        mov ebp, dword ptr ss : [ebp+0x5D0]
        public_487149 : nop
        xor ebx, ebx
        cmp ebp, ebx
        je public_4874ec
        test byte ptr ss : [ebp+0x6C], 1
        je public_4874ec
        mov eax, dword ptr ss : [ebp]
        push ebx
        push ebx
        push 0x51
        mov ecx, ebp
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ss : [ebp]
        push ebx
/*FIXUP push offset public_679bb4 @0x487170*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        push 0x33
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_48718e : nop
        mov eax, dword ptr ss : [esp+0x1234]
        mov dword ptr ss : [ebp+0xE68], eax
        mov dword ptr ss : [ebp+0x1724], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_4871b0 : nop
        mov eax, dword ptr ss : [ebp+0x338]
        mov ecx, 1
        xor ebx, ebx
        cmp eax, ecx
        jne public_487279
        cmp dword ptr ss : [esp+0x1230], ecx
        jne public_487391
        mov eax, dword ptr ss : [ebp+0xE88]
        cmp eax, 0xFFFFFFFF
        je public_487391
        mov edx, dword ptr ss : [ebp+0x344]
        lea eax, ds:[eax+eax*8]
        mov esi, dword ptr ds : [edx+eax*4]
        mov eax, dword ptr ss : [ebp+0x348]
        mov edx, dword ptr ss : [ebp+0x344]
        mov ecx, 0x80
        lea edi, ss:[esp+0x28]
        rep movsd
        lea ecx, ss:[ebp+0x340]
        push eax
        push edx
        call public_4890c0
        or eax, 0xFFFFFFFF
        push eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xE80], ebx
        mov dword ptr ss : [ebp+0xE88], eax
        mov dword ptr ss : [ebp+0x173C], ebx
        mov dword ptr ss : [ebp+0x1744], eax
        call public_487cb0
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aa8f0
        cmp eax, 1
        je public_48726d
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2228 @0x48724e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2228
        push 0x3AB
/*FIXUP push offset public_5d1e40 @0x487258*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x487262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_48726d : nop
        mov ecx, ebp
        call public_4877f0
        jmp public_487391
        public_487279 : nop
        cmp eax, 2
        jne public_487297
        cmp dword ptr ss : [esp+0x1230], ecx
        jne public_487391
        mov byte ptr ss : [ebp+0x33C], 1
        jmp public_487391
        public_487297 : nop
        cmp eax, 3
        je public_487391
        cmp eax, 4
        jne public_487370
        cmp dword ptr ss : [esp+0x1230], ecx
        jne public_487391
        lea esi, ss:[ebp+0x368]
        mov ecx, 0x80
        lea edi, ss:[esp+0x28]
        rep movsd
        lea ecx, ss:[ebp+0x340]
        call public_488c20
        or eax, 0xFFFFFFFF
        push eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xE80], ebx
        mov dword ptr ss : [ebp+0xE88], eax
        mov dword ptr ss : [ebp+0x173C], ebx
        mov dword ptr ss : [ebp+0x1744], eax
        call public_487cb0
        mov byte ptr ss : [ebp+0x33D], bl
        mov byte ptr ss : [ebp+0x33E], bl
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebx
        je public_487335
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[ebp+0x568]
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0xE8]
        mov ecx, ebp
        call public_4877f0
        mov byte ptr ss : [ebp+0x33E], 1
        jmp public_487391
        public_487335 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2210 @0x48733b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2210
        push 0x366
/*FIXUP push offset public_5d1e40 @0x487345*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x48734f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov ecx, ebp
        call public_4877f0
        mov byte ptr ss : [ebp+0x33E], 1
        jmp public_487391
        lea ebx, ds:[ebx]
        public_487370 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x2DC
/*FIXUP push offset public_5d1e40 @0x48737c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov ecx, 0x100001
/*FIXUP push offset public_5d21dc @0x487386*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d21dc
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_487391 : nop
        mov ecx, dword ptr ss : [ebp+0x1764]
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x338], ebx
        je public_4873a6
        call public_57c750
        public_4873a6 : nop
        mov byte ptr ss : [ebp+0xE7E], 1
        mov byte ptr ss : [ebp+0x173A], 1
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_4873c3 : nop
        add eax, 0xFFFF0FFF
        cmp eax, 3
        ja public_4874ec
/*FIXUP jmp dword ptr ds : [eax*4+public_487534] @0x4873d1*/
  JMPTB cmp eax, 0
  JMPTB je public_4873d8
  JMPTB cmp eax, 1
  JMPTB je public_487435
  JMPTB cmp eax, 2
  JMPTB je public_4874b3
  JMPTB cmp eax, 3
  JMPTB je public_4874d2
  JMPTB int 3
        public_4873d8 : nop
        mov eax, dword ptr ss : [esp+0x1234]
        cmp eax, 0xFFFFFFFF
        jl public_487405
        cmp eax, dword ptr ss : [ebp+0xE80]
        jge public_4873f2
        mov dword ptr ss : [ebp+0xE88], eax
        public_4873f2 : nop
        cmp eax, 0xFFFFFFFF
        jl public_487405
        cmp eax, dword ptr ss : [ebp+0x173C]
        jge public_487405
        mov dword ptr ss : [ebp+0x1744], eax
        public_487405 : nop
        mov eax, dword ptr ss : [ebp+0xE88]
        cmp eax, 0xFFFFFFFF
        jl public_48741e
        cmp eax, dword ptr ss : [ebp+0x173C]
        jge public_48741e
        mov dword ptr ss : [ebp+0x1744], eax
        public_48741e : nop
        push eax
        mov ecx, ebp
        call public_487cb0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_487435 : nop
        mov eax, dword ptr ss : [ebp+0x334]
        cmp eax, 1
        je public_487449
        cmp eax, 3
        jne public_4874ec
        public_487449 : nop
        mov eax, dword ptr ss : [esp+0x1234]
        cmp eax, 0xFFFFFFFF
        jl public_487476
        cmp eax, dword ptr ss : [ebp+0xE80]
        jge public_487463
        mov dword ptr ss : [ebp+0xE88], eax
        public_487463 : nop
        cmp eax, 0xFFFFFFFF
        jl public_487476
        cmp eax, dword ptr ss : [ebp+0x173C]
        jge public_487476
        mov dword ptr ss : [ebp+0x1744], eax
        public_487476 : nop
        mov esi, dword ptr ss : [ebp+0xE88]
        cmp esi, 0xFFFFFFFF
        jl public_48748f
        cmp esi, dword ptr ss : [ebp+0x173C]
        jge public_48748f
        mov dword ptr ss : [ebp+0x1744], esi
        public_48748f : nop
        push esi
        mov ecx, ebp
        call public_487cb0
        cmp esi, 0xFFFFFFFF
        je public_4874ec
        push esi
        mov ecx, ebp
        call public_4880f0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_4874b3 : nop
        mov eax, dword ptr ss : [ebp+0x32C]
        lea ecx, ss:[ebp+0x32C]
        push 0xF
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1218
        ret 0xC
        public_4874d2 : nop
        mov al, byte ptr ss : [ebp+0x33D]
        test al, al
        je public_4874ec
        cmp dword ptr ss : [ebp+0x334], 2
        jne public_4874ec
        public_4874e5 : nop
        mov ecx, ebp
        call public_487550
        public_4874ec : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x1218
        ret 0xC
        UNREACHABLE_TRAP(0x486ca0)
        ASM_EXPORT_ENTRY_FIRST(0x4874d2, public_4874d2)
        ASM_EXPORT_ENTRY_LAST(0x4874ec, public_4874ec)
    }
}

#undef public_486ce2
#undef public_486dab
#undef public_486dcd
#undef public_486e09
#undef public_486e50
#undef public_486e6a
#undef public_486ec3
#undef public_486f16
#undef public_486f43
#undef public_486fab
#undef public_487002
#undef public_487014
#undef public_487034
#undef public_487067
#undef public_48707e
#undef public_48708e
#undef public_48709e
#undef public_4870ae
#undef public_4870c0
#undef public_4870f0
#undef public_487107
#undef public_487117
#undef public_487127
#undef public_487137
#undef public_487149
#undef public_48718e
#undef public_4871b0
#undef public_48726d
#undef public_487279
#undef public_487297
#undef public_487335
#undef public_487370
#undef public_487391
#undef public_4873a6
#undef public_4873c3
#undef public_4873d8
#undef public_4873f2
#undef public_487405
#undef public_48741e
#undef public_487435
#undef public_487449
#undef public_487463
#undef public_487476
#undef public_48748f
#undef public_4874b3
#undef public_4874d2
#undef public_4874e5
#undef public_4874ec

#pragma init_seg(compiler)
extern "C" void const* const public_4874d2 = __AsmFindLabelExport(&internal_486ca0, 0x4874d2);
extern "C" void const* const public_4874ec = __AsmFindLabelExport(&internal_486ca0, 0x4874ec);
