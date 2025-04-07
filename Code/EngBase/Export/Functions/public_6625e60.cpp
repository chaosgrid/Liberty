#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_66204b0);
CLANG_FORWARD_PROC_SYMBOL(public_6626310);
CLANG_FORWARD_PROC_SYMBOL(public_6626340);
CLANG_FORWARD_PROC_SYMBOL(public_6626d00);
CLANG_FORWARD_PROC_SYMBOL(public_6626f20);
CLANG_FORWARD_PROC_SYMBOL(public_6626f90);
CLANG_FORWARD_PROC_SYMBOL(public_6627060);
CLANG_FORWARD_PROC_SYMBOL(public_66270f0);
CLANG_FORWARD_PROC_SYMBOL(public_6627150);
CLANG_FORWARD_PROC_SYMBOL(public_6627180);
CLANG_FORWARD_PROC_SYMBOL(public_6627b30);
CLANG_FORWARD_PROC_SYMBOL(public_6627d60);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6625e9d _public_6625e9d
#define public_6625ec7 _public_6625ec7
#define public_6625eca _public_6625eca
#define public_6625f1c _public_6625f1c
#define public_6625f3c _public_6625f3c
#define public_6625fd2 _public_6625fd2
#define public_6626005 _public_6626005
#define public_662607e _public_662607e
#define public_662611a _public_662611a
#define public_6626121 _public_6626121
#define public_6626172 _public_6626172
#define public_6626179 _public_6626179
#define public_66261ca _public_66261ca
#define public_66261d1 _public_66261d1
#define public_6626233 _public_6626233
#define public_662623a _public_662623a
#define public_6626250 _public_6626250
#define public_6626262 _public_6626262
#define public_6626288 _public_6626288
#define public_6626293 _public_6626293
#define public_66262de _public_66262de

PROC_DECLARE(0x6625e60, internal_6625e60, public_6625e60);
extern "C" NAKED register_t __cdecl internal_6625e60()
{
    __asm
    {
        mov eax, 0x2424
        call public_6628230
        push ebp
        mov ebp, dword ptr ss : [esp+0x242C]
        push esi
        mov esi, dword ptr ss : [esp+0x2438]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6629720 @0x6625e80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6629720
        push esi
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_6625e9d
        pop edi
        pop esi
        pop ebp
        add esp, 0x2424
        ret 0xC
        public_6625e9d : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2F0]
        push edx
/*FIXUP push offset public_662a054 @0x6625ea7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a054
        push esi
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], eax
        jne public_6625ec7
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x2424
        ret 0xC
        public_6625ec7 : nop
        push ebx
        xor ebx, ebx
        public_6625eca : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x320]
        push ecx
        push esi
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_6625f1c
        lea edx, ss:[esp+0x320]
        lea eax, ss:[esp+0x434]
        push edx
/*FIXUP push offset public_662abf8 @0x6625eeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abf8
        push eax
        call public_6611d80
        push eax
        push 0xFF
        mov ecx, 0x100002
/*FIXUP push offset public_662aac0 @0x6625f01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aac0
/*FIXUP push offset public_662a0d4 @0x6625f06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        mov ecx, dword ptr ds : [public_6629004]
        call dword ptr ds : [ecx]
        add esp, 0x20
        jmp public_6626293
        public_6625f1c : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1B4]
        push eax
/*FIXUP push offset public_662abf4 @0x6625f26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abf4
        push esi
        call dword ptr ds : [edx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], eax
        je public_6626288
        public_6625f3c : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x1E0]
        push edx
        push esi
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_6626262
        cmp edi, dword ptr ss : [ebp+0x10]
        jne public_6626005
        mov al, byte ptr ss : [esp+0x17]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], al
        call public_6627150
        lea ecx, ss:[esp+0x18]
        lea edx, ss:[esp+0x243C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_6627180
        push eax
        lea ecx, ss:[esp+0x78]
        call public_6627d60
        lea eax, ss:[esp+0x74]
        lea ecx, ss:[esp+0x64]
        push eax
        push ecx
        lea ecx, ss:[ebp+0xC]
        call public_6626f90
        lea ecx, ss:[esp+0x78]
        call public_6626f20
        lea ecx, ss:[esp+0x88]
        call public_6626f20
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp eax, ecx
        je public_6625fd2
        mov dword ptr ss : [ebp+0x24], eax
        mov byte ptr ss : [ebp+0x28], 1
        public_6625fd2 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea edx, ss:[esp+0x74]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea ecx, ss:[esp+0x24]
        call public_66270f0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_66281d0
        mov edi, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_6626005 : nop
        lea edx, ss:[esp+0x1E0]
        lea ecx, ss:[esp+0x1E0]
        push edx
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        call public_6626340
        lea eax, ss:[esp+0x44]
        lea ecx, ss:[esp+0x94]
        push eax
        call public_6626310
        mov eax, dword ptr ds : [edi+0x14]
        lea ecx, ds:[edi+0x10]
        lea edx, ss:[esp+0x94]
        push edx
        push eax
        lea eax, ss:[esp+0x74]
        push eax
        call public_6627060
        mov eax, dword ptr ss : [esp+0x98]
        cmp eax, ebx
        je public_662607e
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_662607e : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ss : [esp+0x2438]
        lea edx, ss:[esp+0x320]
        mov ebp, dword ptr ds : [ecx+4]
        push edx
        lea ecx, ds:[eax-4]
        add ebp, 0x10
        call public_6626d00
        cmp eax, ebx
        mov dword ptr ss : [ebp], eax
        je public_66261d1
        jle public_66262de
        cmp eax, 2
        jg public_66262de
/*FIXUP push offset public_662a030 @0x66260b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
/*FIXUP push offset public_662abec @0x66260bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abec
        lea ecx, ss:[esp+0x120]
        call public_66204b0
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x118]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6626121
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x40]
        push ebx
        push ecx
        lea edx, ss:[esp+0x60]
        push 0xC
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_662611a
        cmp dword ptr ss : [esp+0x40], 0xC
        jne public_662611a
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        lea eax, ss:[ebp+0x34]
        mov dword ptr ss : [ebp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_662611a : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
/*FIXUP public_6626121 : nop
        push offset public_662a030 @0x6626121*/
  FIXUP public_6626121 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
/*FIXUP push offset public_662abe8 @0x6626126*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abe8
        lea ecx, ss:[esp+0xEC]
        call public_66204b0
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xE4]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6626179
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x3C]
        push ebx
        push eax
        lea ecx, ss:[esp+0x34]
        push 4
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6626172
        cmp dword ptr ss : [esp+0x3C], 4
        jne public_6626172
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x40], edx
        public_6626172 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
/*FIXUP public_6626179 : nop
        push offset public_662a030 @0x6626179*/
  FIXUP public_6626179 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
/*FIXUP push offset public_662abe4 @0x662617e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abe4
        lea ecx, ss:[esp+0x188]
        call public_66204b0
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x180]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66261d1
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x38]
        push ebx
        push ecx
        lea edx, ss:[esp+0x3C]
        push 4
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_66261ca
        cmp dword ptr ss : [esp+0x38], 4
        jne public_66261ca
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp+0x44], eax
        public_66261ca : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
/*FIXUP public_66261d1 : nop
        push offset public_662a030 @0x66261d1*/
  FIXUP public_66261d1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
/*FIXUP push offset public_662abd8 @0x66261d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abd8
        lea ecx, ss:[esp+0x154]
        call public_66204b0
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14C]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_662623a
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push ebx
        push eax
        lea ecx, ss:[esp+0x54]
        push 0xC
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6626233
        cmp dword ptr ss : [esp+0x30], 0xC
        jne public_6626233
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        lea edx, ss:[ebp+4]
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        public_6626233 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_662623a : nop
        add ebp, 0x10
        push ebp
/*FIXUP push offset public_662abcc @0x662623e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662abcc
        push esi
        call public_6627b30
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        public_6626250 : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x6626252*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [edx+0x60]
        mov ebp, dword ptr ss : [esp+0x2438]
        public_6626262 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1B4]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x4C]
        test eax, eax
        jne public_6625f3c
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x50]
        public_6626288 : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x662628a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [edx+0x60]
        public_6626293 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2F4]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x4C]
        test eax, eax
        jne public_6625eca
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x66262bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ss : [ebp+0x10]
        pop ebx
        cmp edi, edx
        pop edi
        setne al
        pop esi
        and eax, 0xFF
        pop ebp
        add esp, 0x2424
        ret 0xC
        public_66262de : nop
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662ab90 @0x66262e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662ab90
        push 0x120
        mov eax, 0x100002
/*FIXUP push offset public_662aac0 @0x66262f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aac0
/*FIXUP push offset public_662a0d4 @0x66262f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6626250
        UNREACHABLE_TRAP(0x6625e60)
    }
}

#undef public_6625e9d
#undef public_6625ec7
#undef public_6625eca
#undef public_6625f1c
#undef public_6625f3c
#undef public_6625fd2
#undef public_6626005
#undef public_662607e
#undef public_662611a
#undef public_6626121
#undef public_6626172
#undef public_6626179
#undef public_66261ca
#undef public_66261d1
#undef public_6626233
#undef public_662623a
#undef public_6626250
#undef public_6626262
#undef public_6626288
#undef public_6626293
#undef public_66262de
