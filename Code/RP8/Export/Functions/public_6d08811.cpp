#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d020ab);
CLANG_FORWARD_PROC_SYMBOL(public_6d0376f);
CLANG_FORWARD_PROC_SYMBOL(public_6d038ba);
CLANG_FORWARD_PROC_SYMBOL(public_6d03c94);
CLANG_FORWARD_PROC_SYMBOL(public_6d047df);
CLANG_FORWARD_PROC_SYMBOL(public_6d159ff);
CLANG_FORWARD_PROC_SYMBOL(public_6d15b0d);
CLANG_FORWARD_PROC_SYMBOL(public_6d15b45);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ce6a);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc70);

#define public_6d08890 _public_6d08890
#define public_6d088c8 _public_6d088c8
#define public_6d089a4 _public_6d089a4
#define public_6d08a20 _public_6d08a20
#define public_6d08ad3 _public_6d08ad3
#define public_6d08ba5 _public_6d08ba5
#define public_6d08bb0 _public_6d08bb0
#define public_6d08c81 _public_6d08c81
#define public_6d08cd2 _public_6d08cd2
#define public_6d08cdd _public_6d08cdd
#define public_6d08ce9 _public_6d08ce9
#define public_6d08cf8 _public_6d08cf8
#define public_6d08d97 _public_6d08d97
#define public_6d08d9c _public_6d08d9c
#define public_6d08daa _public_6d08daa
#define public_6d08dec _public_6d08dec
#define public_6d08e28 _public_6d08e28
#define public_6d08e72 _public_6d08e72
#define public_6d08e7b _public_6d08e7b
#define public_6d08e8d _public_6d08e8d
#define public_6d08e94 _public_6d08e94
#define public_6d08e99 _public_6d08e99
#define public_6d08ed8 _public_6d08ed8
#define public_6d08eea _public_6d08eea
#define public_6d08ef1 _public_6d08ef1
#define public_6d08f13 _public_6d08f13
#define public_6d08f1c _public_6d08f1c
#define public_6d08f25 _public_6d08f25
#define public_6d08f2e _public_6d08f2e
#define public_6d08f37 _public_6d08f37
#define public_6d08f3e _public_6d08f3e
#define public_6d08fca _public_6d08fca
#define public_6d09061 _public_6d09061
#define public_6d090f9 _public_6d090f9
#define public_6d091b3 _public_6d091b3
#define public_6d091c7 _public_6d091c7
#define public_6d0927e _public_6d0927e
#define public_6d092ef _public_6d092ef
#define public_6d09314 _public_6d09314
#define public_6d09405 _public_6d09405
#define public_6d094a7 _public_6d094a7
#define public_6d095d7 _public_6d095d7
#define public_6d096af _public_6d096af
#define public_6d09724 _public_6d09724
#define public_6d0972d _public_6d0972d
#define public_6d097bd _public_6d097bd
#define public_6d0981f _public_6d0981f
#define public_6d09877 _public_6d09877
#define public_6d098d7 _public_6d098d7

PROC_DECLARE(0x6d08811, internal_6d08811, public_6d08811);
extern "C" NAKED register_t __cdecl internal_6d08811()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        mov eax, 0x1425C
        call public_6d2f270
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d08890
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x1A0]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x1A0], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x1A0]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x1A0], ecx
/*FIXUP push offset public_6d65268 @0x6d08863*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65268
        push 0x7C7
/*FIXUP push offset public_6d652a0 @0x6d0886d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d652a0
/*FIXUP push offset public_6d652ec @0x6d08872*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d652ec
        mov edx, dword ptr ss : [ebp-0x1A0]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d098d7
        public_6d08890 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x130], 0
        je public_6d088c8
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x78], eax
        cmp dword ptr ss : [ebp-0x78], 0x88760868
        jne public_6d088c8
        or eax, 0xFFFFFFFF
        jmp public_6d098d7
        public_6d088c8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x70], 0
        mov dword ptr ss : [ebp-0x54], 0xFFFFFFFF
        lea ecx, ss:[ebp-0x50]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp-0x68], eax
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d089a4
        mov eax, dword ptr ss : [ebp-0x68]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65308 @0x6d08922*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65308
        lea ecx, ss:[ebp-0x21A0]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x121D0], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x21A4]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x21A4], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x21A4]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x21A4], edx
        mov eax, dword ptr ss : [ebp-0x121D0]
        push eax
        push 0x7E2
/*FIXUP push offset public_6d65328 @0x6d08980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65328
/*FIXUP push offset public_6d65374 @0x6d08985*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65374
        mov ecx, dword ptr ss : [ebp-0x21A4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x68]
        jmp public_6d098d7
        public_6d089a4 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        movzx ecx, byte ptr ds : [eax+0x25]
        test ecx, ecx
        je public_6d08c81
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x54], eax
        cmp dword ptr ss : [ebp-0x54], 0
        jge public_6d08bb0
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, 0xA
        lea edi, ss:[ebp-0xA4]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFF
        jne public_6d08a20
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x121D4], edx
        mov eax, dword ptr ss : [ebp-0x121D4]
        push eax
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0xAC], eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x121D8], edx
        mov eax, dword ptr ss : [ebp-0x121D8]
        mov dword ptr ss : [ebp-0x94], eax
        public_6d08a20 : nop
        lea ecx, ss:[ebp-0x54]
        push ecx
        lea edx, ss:[ebp-0xA4]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+0x2C]
        mov dword ptr ss : [ebp-0x7C], eax
        cmp dword ptr ss : [ebp-0x7C], 0
        jge public_6d08ad3
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65390 @0x6d08a51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65390
        lea ecx, ss:[ebp-0x41A4]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x121DC], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x41A8]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x41A8], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x41A8]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x41A8], edx
        mov eax, dword ptr ss : [ebp-0x121DC]
        push eax
        push 0x7FE
/*FIXUP push offset public_6d653b0 @0x6d08aaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d653b0
/*FIXUP push offset public_6d653fc @0x6d08ab4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d653fc
        mov ecx, dword ptr ss : [ebp-0x41A8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x7C]
        jmp public_6d098d7
        public_6d08ad3 : nop
        lea eax, ss:[ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x54]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0xA8], eax
        cmp dword ptr ss : [ebp-0xA8], 0
        jge public_6d08ba5
        mov eax, dword ptr ss : [ebp-0xA8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65418 @0x6d08b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65418
        lea ecx, ss:[ebp-0x61A8]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x121E0], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x61AC]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x61AC], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x61AC]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x61AC], edx
        mov eax, dword ptr ss : [ebp-0x121E0]
        push eax
        push 0x802
/*FIXUP push offset public_6d65438 @0x6d08b7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65438
/*FIXUP push offset public_6d65484 @0x6d08b83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65484
        mov ecx, dword ptr ss : [ebp-0x61AC]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0xA8]
        jmp public_6d098d7
        public_6d08ba5 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x70], eax
        jmp public_6d08c81
        public_6d08bb0 : nop
        lea ecx, ss:[ebp-0x50]
        push ecx
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A8]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x12C]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0xB0], eax
        cmp dword ptr ss : [ebp-0xB0], 0
        jge public_6d08c81
        mov ecx, dword ptr ss : [ebp-0xB0]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d654a0 @0x6d08bfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654a0
        lea edx, ss:[ebp-0x81AC]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x121E4], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x81B0]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x81B0], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x81B0]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x81B0], eax
        mov ecx, dword ptr ss : [ebp-0x121E4]
        push ecx
        push 0x80E
/*FIXUP push offset public_6d654c0 @0x6d08c5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654c0
/*FIXUP push offset public_6d6550c @0x6d08c60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6550c
        mov edx, dword ptr ss : [ebp-0x81B0]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0xB0]
        jmp public_6d098d7
        public_6d08c81 : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x121E8], ecx
        mov edx, dword ptr ss : [ebp-0x121E8]
        push edx
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x64], eax
        cmp dword ptr ss : [ebp-0x70], 0
        jne public_6d08d9c
        mov eax, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [eax+0x10], 0xFFFFFFFF
        je public_6d08cd2
        mov ecx, dword ptr ss : [ebp-0x64]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x121EC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, dword ptr ss : [ebp-0x121EC]
        jne public_6d08cdd
        public_6d08cd2 : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x70], edx
        jmp public_6d08d9c
        public_6d08cdd : nop
        mov dword ptr ss : [ebp-0xB4], 0
        jmp public_6d08cf8
        public_6d08ce9 : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        add eax, 1
        mov dword ptr ss : [ebp-0xB4], eax
        public_6d08cf8 : nop
        cmp dword ptr ss : [ebp-0xB4], 9
        jge public_6d08d9c
        mov ecx, dword ptr ss : [ebp-0xB4]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov dword ptr ss : [ebp-0xB8], eax
        mov edx, dword ptr ss : [ebp-0xB8]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax+0x10]
        jne public_6d08d97
        mov edx, dword ptr ss : [ebp-0xB8]
        mov eax, dword ptr ds : [edx]
        push eax
        call public_6d5cbb0
        add esp, 4
        mov dword ptr ss : [ebp-0xBC], eax
        mov ecx, dword ptr ss : [ebp-0xBC]
        push ecx
        push 1
        push 1
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1AC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x28]
        mov dword ptr ss : [ebp-0xC0], eax
        cmp dword ptr ss : [ebp-0xC0], 0
        jl public_6d08d97
        mov eax, dword ptr ss : [ebp-0xBC]
        mov dword ptr ss : [ebp-0x70], eax
        jmp public_6d08d9c
        public_6d08d97 : nop
        jmp public_6d08ce9
        public_6d08d9c : nop
        cmp dword ptr ss : [ebp-0x70], 0
        jne public_6d08daa
        or eax, 0xFFFFFFFF
        jmp public_6d098d7
        public_6d08daa : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [ebp-8], edx
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d08dec
        mov eax, dword ptr ss : [ebp-0x70]
        push eax
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x81B4], eax
        mov ecx, dword ptr ss : [ebp-0x81B4]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x121F0], edx
        mov eax, dword ptr ss : [ebp-0x121F0]
        mov dword ptr ss : [ebp-8], eax
        public_6d08dec : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [ebp-0x60], edx
        lea eax, ss:[ebp-0x60]
        push eax
        lea ecx, ss:[ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x70]
        push edx
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x12C]
        push edx
        call public_6d159ff
        add esp, 0x14
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jne public_6d08e28
        or eax, 0xFFFFFFFF
        jmp public_6d098d7
        public_6d08e28 : nop
        mov dword ptr ss : [ebp-0x74], 1
        mov dword ptr ss : [ebp-0x5C], 1
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0x6C], 0x7FFFFFFF
        mov eax, dword ptr ss : [ebp+0x10]
        movzx ecx, byte ptr ds : [eax+0x25]
        test ecx, ecx
        jne public_6d08e99
        mov edx, dword ptr ss : [ebp+0x10]
        movzx eax, byte ptr ds : [edx+0x24]
        test eax, eax
        je public_6d08e72
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3F0]
        mov dword ptr ss : [ebp-0x121F4], edx
        cmp dword ptr ss : [ebp-0x121F4], 0
        je public_6d08e7b
        public_6d08e72 : nop
        mov dword ptr ss : [ebp-0x6C], 3
        jmp public_6d08e94
        public_6d08e7b : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [eax+0x1C], 0
        jne public_6d08e8d
        mov dword ptr ss : [ebp-0x6C], 3
        jmp public_6d08e94
        public_6d08e8d : nop
        mov dword ptr ss : [ebp-0x6C], 4
        public_6d08e94 : nop
        jmp public_6d08f3e
        public_6d08e99 : nop
        mov dword ptr ss : [ebp-0x74], 0
        mov ecx, dword ptr ss : [ebp+0x10]
        movzx edx, byte ptr ds : [ecx+0x24]
        test edx, edx
        je public_6d08ed8
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x3F0]
        mov dword ptr ss : [ebp-0x121F8], ecx
        cmp dword ptr ss : [ebp-0x121F8], 0
        jne public_6d08ed8
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x20]
        sub eax, 1
        mov dword ptr ss : [ebp-0x5C], eax
        mov dword ptr ss : [ebp-0x6C], 2
        jmp public_6d08ef1
        public_6d08ed8 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [ecx+0x1C], 0
        jne public_6d08eea
        mov dword ptr ss : [ebp-0x6C], 3
        jmp public_6d08ef1
        public_6d08eea : nop
        mov dword ptr ss : [ebp-0x6C], 4
        public_6d08ef1 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x1425C], eax
        cmp dword ptr ss : [ebp-0x1425C], 4
        ja public_6d08f3e
        mov ecx, dword ptr ss : [ebp-0x1425C]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d098df] @0x6d08f0c*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d08f13
  JMPTB cmp ecx, 1
  JMPTB je public_6d08f1c
  JMPTB cmp ecx, 2
  JMPTB je public_6d08f25
  JMPTB cmp ecx, 3
  JMPTB je public_6d08f2e
  JMPTB cmp ecx, 4
  JMPTB je public_6d08f37
  JMPTB int 3
        public_6d08f13 : nop
        mov dword ptr ss : [ebp-4], 0x80000000
        jmp public_6d08f3e
        public_6d08f1c : nop
        mov dword ptr ss : [ebp-4], 1
        jmp public_6d08f3e
        public_6d08f25 : nop
        mov dword ptr ss : [ebp-4], 2
        jmp public_6d08f3e
        public_6d08f2e : nop
        mov dword ptr ss : [ebp-4], 4
        jmp public_6d08f3e
        public_6d08f37 : nop
        mov dword ptr ss : [ebp-4], 8
        public_6d08f3e : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x34], ecx
        mov dword ptr ss : [ebp-0x30], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        mov dword ptr ss : [ebp-0x24], ecx
        mov dword ptr ss : [ebp-0x20], 1
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x128]
        and cl, 1
        xor edx, edx
        mov dl, cl
        neg edx
        sbb edx, edx
        neg edx
        mov dword ptr ss : [ebp-0x18], edx
        mov dword ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x130], 0
        jne public_6d091c7
        push 2
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call dword ptr ds : [public_6d5e168]
        mov dword ptr ss : [ebp-0x19C], eax
        public_6d08fca : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x130
        push eax
        lea ecx, ss:[ebp-0x40]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x124]
        push eax
        mov ecx, dword ptr ss : [ebp-0x19C]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1AC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1A8]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x12C]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x68], eax
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d09061
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x124]
        and eax, 0xC0
        test eax, eax
        je public_6d09061
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x124]
        and edx, 0xFFFFFF3F
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x124], edx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x124]
        or edx, 0x20
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x124], edx
        jmp public_6d08fca
        public_6d09061 : nop
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d090f9
        mov ecx, dword ptr ss : [ebp-0x68]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65528 @0x6d09078*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65528
        lea edx, ss:[ebp-0xA1B4]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x121FC], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0xA1B8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0xA1B8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0xA1B8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0xA1B8], eax
        mov ecx, dword ptr ss : [ebp-0x121FC]
        push ecx
        push 0x8E1
/*FIXUP push offset public_6d65540 @0x6d090d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65540
/*FIXUP push offset public_6d6558c @0x6d090db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6558c
        mov edx, dword ptr ss : [ebp-0xA1B8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x68]
        jmp public_6d098d7
        public_6d090f9 : nop
        lea ecx, ss:[ebp-0x198]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0x68], eax
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d091b3
        mov ecx, dword ptr ss : [ebp-0x68]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d655a8 @0x6d09132*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655a8
        lea edx, ss:[ebp-0xC1B8]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x12200], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0xC1BC]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0xC1BC], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0xC1BC]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0xC1BC], eax
        mov ecx, dword ptr ss : [ebp-0x12200]
        push ecx
        push 0x8E9
/*FIXUP push offset public_6d655c0 @0x6d09190*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655c0
/*FIXUP push offset public_6d6560c @0x6d09195*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6560c
        mov edx, dword ptr ss : [ebp-0xC1BC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x68]
        jmp public_6d098d7
        public_6d091b3 : nop
        lea ecx, ss:[ebp-0x198]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d020ab
        jmp public_6d0927e
        public_6d091c7 : nop
        lea edx, ss:[ebp-0x40]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [ebp-0x68], eax
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d0927e
        mov edx, dword ptr ss : [ebp-0x68]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65628 @0x6d091fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65628
        lea eax, ss:[ebp-0xE1BC]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x12204], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xE1C0]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xE1C0], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xE1C0]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xE1C0], ecx
        mov edx, dword ptr ss : [ebp-0x12204]
        push edx
        push 0x8F4
/*FIXUP push offset public_6d65640 @0x6d0925a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65640
/*FIXUP push offset public_6d6568c @0x6d0925f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6568c
        mov eax, dword ptr ss : [ebp-0xE1C0]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x68]
        jmp public_6d098d7
        public_6d0927e : nop
        mov dword ptr ss : [ebp-0x14220], 0x4000
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x1421C], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x14C
        mov dword ptr ss : [ebp-0x14218], ecx
        mov edx, dword ptr ss : [ebp-0x14218]
        cmp dword ptr ds : [edx+4], 0
        je public_6d09314
        mov eax, dword ptr ss : [ebp-0x14218]
        cmp dword ptr ds : [eax+4], 0
        je public_6d09314
        mov ecx, dword ptr ss : [ebp-0x14218]
        cmp dword ptr ds : [ecx+8], 0
        je public_6d092ef
        mov edx, dword ptr ss : [ebp-0x14218]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x14218]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x14218]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d092ef : nop
        mov edx, dword ptr ss : [ebp-0x14218]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x14218]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x14218]
        mov dword ptr ds : [ecx+4], 0
        public_6d09314 : nop
        mov edx, dword ptr ss : [ebp-0x14218]
        mov eax, dword ptr ss : [ebp-0x14220]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0x14218]
        mov dword ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ss : [ebp-0x14220]
        shl edx, 1
        mov dword ptr ss : [ebp-0x1220C], edx
        mov eax, dword ptr ss : [ebp-0x14218]
        add eax, 4
        push eax
        push 0
        push 0x65
        mov ecx, dword ptr ss : [ebp-0x14218]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov eax, dword ptr ss : [ebp-0x1220C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1421C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x1421C]
        push eax
        call dword ptr ds : [edx+0x60]
        mov dword ptr ss : [ebp-0x12208], eax
        cmp dword ptr ss : [ebp-0x12208], 0
        jge public_6d09405
        mov ecx, dword ptr ss : [ebp-0x1220C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x12208]
        push edx
/*FIXUP push offset public_6d6afd4 @0x6d0938f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6afd4
        lea eax, ss:[ebp-0x1420C]
        push eax
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x14214], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x14210]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x14210], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x14210]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x14210], ecx
        mov edx, dword ptr ss : [ebp-0x14214]
        push edx
        push 0x31
/*FIXUP push offset public_6d6af80 @0x6d093e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af80
/*FIXUP push offset public_6d6ade0 @0x6d093ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov eax, dword ptr ss : [ebp-0x14210]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d09405 : nop
        mov edx, dword ptr ss : [ebp-0x12208]
        mov dword ptr ss : [ebp-0x68], edx
        cmp dword ptr ss : [ebp-0x68], 0
        jge public_6d094a7
        mov eax, dword ptr ss : [ebp-0x68]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d656a8 @0x6d09425*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d656a8
        lea ecx, ss:[ebp-0x101C0]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x14224], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x101C4]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x101C4], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x101C4]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x101C4], edx
        mov eax, dword ptr ss : [ebp-0x14224]
        push eax
        push 0x8FB
/*FIXUP push offset public_6d656c8 @0x6d09483*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d656c8
/*FIXUP push offset public_6d65714 @0x6d09488*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65714
        mov ecx, dword ptr ss : [ebp-0x101C4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x68]
        jmp public_6d098d7
        public_6d094a7 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        or cl, 1
        mov edx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [edx+0x184], cl
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax+0x230], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x14228], edx
        mov eax, dword ptr ss : [ebp-0x14228]
        push eax
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x101C8], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x101C8]
        mov dword ptr ds : [ecx+0x234], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x260], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [edx+0x238], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+0x240], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+0x244], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x234]
        push eax
        call public_6d5cc70
        add esp, 4
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x1422C], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x1422C]
        mov dword ptr ds : [edx+0x248], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6d15b0d
        add esp, 4
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x24C], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6d15b45
        add esp, 4
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+0x250], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edx+0x254], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        add edx, 1
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x258], edx
        mov ecx, dword ptr ss : [ebp-0x2C]
        and ecx, 2
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [edx+0x25C], cl
        xor eax, eax
        cmp dword ptr ss : [ebp-0x24], 0
        sete al
        mov ecx, dword ptr ss : [ebp+8]
        mov byte ptr ds : [ecx+0x25D], al
        cmp dword ptr ss : [ebp+0x14], 0
        je public_6d095d7
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x238
        mov ecx, 0xA
        mov edi, dword ptr ss : [ebp+0x14]
        rep movsd
        public_6d095d7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d0376f
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d038ba
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d03c94
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d047df
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x22C8
        mov dword ptr ss : [ebp-0x14230], edx
        mov eax, dword ptr ss : [ebp-0x14230]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ss : [ebp-0x14230]
        mov byte ptr ds : [ecx+0x19], 0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x244]
        mov dword ptr ss : [ebp-0x14244], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x240]
        mov dword ptr ss : [ebp-0x14240], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x1423C], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x22C8
        mov dword ptr ss : [ebp-0x14238], edx
        mov eax, dword ptr ss : [ebp-0x14238]
        movzx ecx, byte ptr ds : [eax+0x19]
        test ecx, ecx
        je public_6d096af
        mov edx, 1
        test edx, edx
        jne public_6d096af
        mov eax, dword ptr ss : [ebp-0x14238]
        cmp dword ptr ds : [eax], 0
        jne public_6d096af
        mov ecx, dword ptr ss : [ebp-0x14238]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d096af
        mov edx, dword ptr ss : [ebp-0x14238]
        mov eax, dword ptr ss : [ebp-0x14240]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d096af
        mov ecx, dword ptr ss : [ebp-0x14238]
        mov edx, dword ptr ss : [ebp-0x14244]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6d096af
        mov dword ptr ss : [ebp-0x58], 0
        jmp public_6d0972d
        public_6d096af : nop
        mov eax, dword ptr ss : [ebp-0x14238]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x14238]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x14238]
        mov eax, dword ptr ss : [ebp-0x14240]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x14238]
        mov edx, dword ptr ss : [ebp-0x14244]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x14238]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1423C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x1423C]
        push eax
        call dword ptr ds : [edx+0xA0]
        mov dword ptr ss : [ebp-0x14234], eax
        cmp dword ptr ss : [ebp-0x14234], 0
        jl public_6d09724
        mov ecx, 1
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr ss : [ebp-0x14238]
        mov byte ptr ds : [edx+0x19], cl
        public_6d09724 : nop
        mov eax, dword ptr ss : [ebp-0x14234]
        mov dword ptr ss : [ebp-0x58], eax
        public_6d0972d : nop
        cmp dword ptr ss : [ebp-0x58], 0
        jge public_6d097bd
        mov ecx, dword ptr ss : [ebp-0x58]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65730 @0x6d09744*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65730
        lea edx, ss:[ebp-0x121C8]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x14248], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x121CC]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x121CC], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x121CC]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x121CC], eax
        mov ecx, dword ptr ss : [ebp-0x14248]
        push ecx
        push 0x924
/*FIXUP push offset public_6d65748 @0x6d097a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65748
/*FIXUP push offset public_6d65794 @0x6d097a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65794
        mov edx, dword ptr ss : [ebp-0x121CC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d097bd : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x14254], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22C8
        mov dword ptr ss : [ebp-0x14250], eax
        mov ecx, dword ptr ss : [ebp-0x14250]
        movzx edx, byte ptr ds : [ecx+0x18]
        test edx, edx
        je public_6d0981f
        mov eax, 1
        test eax, eax
        jne public_6d0981f
        mov ecx, dword ptr ss : [ebp-0x14250]
        fld dword ptr ds : [public_6d5e48c]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jp public_6d0981f
        mov edx, dword ptr ss : [ebp-0x14250]
        fld dword ptr ds : [public_6d5e488]
        fcomp dword ptr ds : [edx+0x14]
        fnstsw ax
        test ah, 0x44
        jp public_6d0981f
        jmp public_6d09877
        public_6d0981f : nop
        mov eax, dword ptr ss : [ebp-0x14250]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0x14250]
        mov dword ptr ds : [ecx+0x14], 0x3F800000
        mov edx, dword ptr ss : [ebp-0x14250]
        push edx
        mov eax, dword ptr ss : [ebp-0x14254]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x14254]
        push edx
        call dword ptr ds : [ecx+0xA0]
        mov dword ptr ss : [ebp-0x1424C], eax
        cmp dword ptr ss : [ebp-0x1424C], 0
        jl public_6d09877
        mov eax, 1
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr ss : [ebp-0x14250]
        mov byte ptr ds : [ecx+0x18], al
        public_6d09877 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2ce6a
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x138
        mov dword ptr ss : [ebp-0x14258], edx
        mov eax, dword ptr ss : [ebp-0x14258]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x14258]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x14258]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x14258]
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x14258]
        mov dword ptr ds : [ecx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x68]
        public_6d098d7 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d08811)
        ASM_EXPORT_ENTRY_FIRST(0x6d08f13, public_6d08f13)
        ASM_EXPORT_ENTRY(0x6d08f1c, public_6d08f1c)
        ASM_EXPORT_ENTRY(0x6d08f25, public_6d08f25)
        ASM_EXPORT_ENTRY(0x6d08f2e, public_6d08f2e)
        ASM_EXPORT_ENTRY_LAST(0x6d08f37, public_6d08f37)
    }
}

#undef public_6d08890
#undef public_6d088c8
#undef public_6d089a4
#undef public_6d08a20
#undef public_6d08ad3
#undef public_6d08ba5
#undef public_6d08bb0
#undef public_6d08c81
#undef public_6d08cd2
#undef public_6d08cdd
#undef public_6d08ce9
#undef public_6d08cf8
#undef public_6d08d97
#undef public_6d08d9c
#undef public_6d08daa
#undef public_6d08dec
#undef public_6d08e28
#undef public_6d08e72
#undef public_6d08e7b
#undef public_6d08e8d
#undef public_6d08e94
#undef public_6d08e99
#undef public_6d08ed8
#undef public_6d08eea
#undef public_6d08ef1
#undef public_6d08f13
#undef public_6d08f1c
#undef public_6d08f25
#undef public_6d08f2e
#undef public_6d08f37
#undef public_6d08f3e
#undef public_6d08fca
#undef public_6d09061
#undef public_6d090f9
#undef public_6d091b3
#undef public_6d091c7
#undef public_6d0927e
#undef public_6d092ef
#undef public_6d09314
#undef public_6d09405
#undef public_6d094a7
#undef public_6d095d7
#undef public_6d096af
#undef public_6d09724
#undef public_6d0972d
#undef public_6d097bd
#undef public_6d0981f
#undef public_6d09877
#undef public_6d098d7

#pragma init_seg(compiler)
extern "C" void const* const public_6d08f13 = __AsmFindLabelExport(&internal_6d08811, 0x6d08f13);
extern "C" void const* const public_6d08f1c = __AsmFindLabelExport(&internal_6d08811, 0x6d08f1c);
extern "C" void const* const public_6d08f25 = __AsmFindLabelExport(&internal_6d08811, 0x6d08f25);
extern "C" void const* const public_6d08f2e = __AsmFindLabelExport(&internal_6d08811, 0x6d08f2e);
extern "C" void const* const public_6d08f37 = __AsmFindLabelExport(&internal_6d08811, 0x6d08f37);
