#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_66fe770);
CLANG_FORWARD_PROC_SYMBOL(public_66ff1b0);
CLANG_FORWARD_PROC_SYMBOL(public_66ff1e0);
CLANG_FORWARD_PROC_SYMBOL(public_66ff200);
CLANG_FORWARD_PROC_SYMBOL(public_66ff230);
CLANG_FORWARD_PROC_SYMBOL(public_66ff260);
CLANG_FORWARD_PROC_SYMBOL(public_66ff290);
CLANG_FORWARD_PROC_SYMBOL(public_66ff430);
CLANG_FORWARD_PROC_SYMBOL(public_66ff460);
CLANG_FORWARD_PROC_SYMBOL(public_66ff680);
CLANG_FORWARD_PROC_SYMBOL(public_66ff6a0);
CLANG_FORWARD_PROC_SYMBOL(public_670092a);
CLANG_FORWARD_JUMP_SYMBOL(public_6700e4f);

#define public_66fe7b3 _public_66fe7b3
#define public_66fe83e _public_66fe83e
#define public_66fe865 _public_66fe865
#define public_66fe889 _public_66fe889
#define public_66fe891 _public_66fe891
#define public_66fe8a0 _public_66fe8a0
#define public_66fea00 _public_66fea00
#define public_66fea27 _public_66fea27
#define public_66fead2 _public_66fead2
#define public_66feaea _public_66feaea
#define public_66feafb _public_66feafb
#define public_66feb0d _public_66feb0d
#define public_66febc7 _public_66febc7
#define public_66fec45 _public_66fec45
#define public_66fecd6 _public_66fecd6
#define public_66fecfc _public_66fecfc
#define public_66fed1c _public_66fed1c
#define public_66fed2d _public_66fed2d
#define public_66fed65 _public_66fed65
#define public_66fed9e _public_66fed9e
#define public_66feda6 _public_66feda6
#define public_66fedb7 _public_66fedb7
#define public_66fef9c _public_66fef9c
#define public_66fef9e _public_66fef9e
#define public_66fefae _public_66fefae
#define public_66ff06f _public_66ff06f
#define public_66ff0a1 _public_66ff0a1
#define public_66ff0a3 _public_66ff0a3
#define public_66ff0c5 _public_66ff0c5
#define public_66ff0dd _public_66ff0dd
#define public_66ff18c _public_66ff18c
#define public_66ff18e _public_66ff18e

PROC_DECLARE(0x66fe770, internal_66fe770, public_66fe770);
extern "C" NAKED register_t __cdecl internal_66fe770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700e4f @0x66fe772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700e4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x140
        push ebx
        push esi
        lea edx, ss:[esp+0x40]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        xor ebx, ebx
        push 9
        mov dword ptr ss : [esp+0x48], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        cmp dword ptr ss : [esp+0x40], ebx
        jne public_66fe7b3
        or eax, 0xFFFFFFFF
        jmp public_66ff18e
        public_66fe7b3 : nop
        cmp dword ptr ss : [esp+0x160], ebx
        je public_66ff18c
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov eax, dword ptr ds : [esi+0x1C]
/*FIXUP push offset public_67025e0 @0x66fe7cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67025e0
        mov dword ptr ss : [esp+0x154], ebx
        mov byte ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x2C], offset public_67025e0
        call dword ptr ds : [public_6701004]
        add esp, 4
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jge public_66fe83e
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_66ff1b0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6701000]
/*FIXUP push offset public_67025ac @0x66fe825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67025ac
        push 0x24
/*FIXUP push offset public_670257c @0x66fe82c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670257c
/*FIXUP push offset public_6702560 @0x66fe831*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702560
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_66fe865
        public_66fe83e : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x128]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        test eax, eax
        jl public_66fe865
        mov edx, dword ptr ss : [esp+0x128]
        mov dword ptr ss : [esp+0x34], edx
        public_66fe865 : nop
        cmp dword ptr ss : [esp+0x34], ebx
        jne public_66fe891
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x150], 0xFFFFFFFF
        je public_66fe889
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        public_66fe889 : nop
        or eax, 0xFFFFFFFF
        jmp public_66ff18e
        public_66fe891 : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x14]
        push edi
        mov edi, offset public_67029ec
        mov eax, 0x89
        public_66fe8a0 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_66fe8a0
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x160]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [esi+0x14]
        push eax
        push edx
        call dword ptr ds : [edi+0x7C]
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x120]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x120], eax
        mov dword ptr ss : [esp+0x124], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x60]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x164], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x6C]
        push edx
        push 0x2F
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], 0x2F
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x164], 2
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x54]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x164], 3
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0xB
        push ebx
        push eax
        mov byte ptr ss : [esp+0x168], 4
        call dword ptr ds : [ecx+0xF8]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0x108]
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, offset public_6702a1c
        mov eax, 1
        lea esp, ss:[esp]
        public_66fea00 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        push ebx
        push ebp
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_66fea00
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, offset public_6702a54
        mov eax, 1
        public_66fea27 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        push 1
        push ebp
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_66fea27
        push 0xC
        push ebx
        lea ecx, ss:[esp+0x108]
        call public_66ff680
        push 4
        push ebx
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x160], 5
        call public_66ff680
        push 8
        push ebx
        lea ecx, ss:[esp+0x118]
        mov byte ptr ss : [esp+0x160], 6
        call public_66ff680
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x158], 7
        mov dword ptr ss : [esp+0x9C], 0x142
        mov dword ptr ss : [esp+0xA0], ebx
        mov dword ptr ss : [esp+0xA4], ebx
        call public_66ff430
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebx
        mov ebp, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [esi+0x14]
        mov byte ptr ss : [esp+0x158], 8
        je public_66fead2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xA0], ebx
        public_66fead2 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        cmp eax, ebx
        je public_66feaea
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xA4], ebx
        public_66feaea : nop
        cmp edi, ebx
        je public_66feafb
        mov dword ptr ss : [esp+0xA0], edi
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_66feafb : nop
        cmp ebp, ebx
        je public_66feb0d
        mov dword ptr ss : [esp+0xA4], ebp
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+4]
        public_66feb0d : nop
        mov ecx, dword ptr ss : [esp+0x168]
        lea edi, ds:[ecx*4]
        lea ecx, ss:[esp+0x94]
        call public_66ff430
        cmp edi, ebx
        je public_66ff0a3
        mov cl, byte ptr ss : [esp+0xEC]
        mov eax, edi
        cdq 
        and edx, 3
        add eax, edx
        and cl, 0xFD
        or cl, 4
        mov dl, cl
        shr dl, 1
        xor dl, cl
        and dl, 1
        xor cl, dl
        sar eax, 2
        lea edx, ss:[esp+0xA8]
        push edx
        mov edx, dword ptr ss : [esp+0xA0]
        lea edi, ds:[edi+eax*2]
        mov eax, dword ptr ss : [esp+0xA8]
        push edi
        push edx
        mov dword ptr ss : [esp+0xA0], 4
        mov byte ptr ss : [esp+0xF8], cl
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x2B], al
        je public_66ff0a3
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0xB4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0xC0], edi
        call public_66ff290
        mov eax, dword ptr ss : [esp+0x168]
        test eax, eax
        jle public_66fefae
        public_66febc7 : nop
        mov edi, dword ptr ss : [esp+0x164]
        mov ecx, dword ptr ds : [edi+ebx*8]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov ebp, eax
        lea edx, ss:[ebp+0x24]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x88], eax
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x8C], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ds : [edi+ebx*8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov al, byte ptr ss : [esp+0x16C]
        test al, al
        je public_66fec45
        cmp edi, 0xFFFFFFFF
        je public_66fec45
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x70]
        push ecx
        push 0x3F800000
        push edi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        jge public_66fecd6
        public_66fec45 : nop
        fld dword ptr ds : [public_6704090]
        mov edx, dword ptr ds : [public_6704090]
        mov eax, dword ptr ds : [public_670408c]
        fchs 
        mov ecx, dword ptr ds : [public_6704088]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [public_670408c]
        mov dword ptr ss : [esp+0x7C], ecx
        mov dword ptr ss : [esp+0x70], edx
        fchs 
        fstp dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x78], 0
        mov edx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x150]
        call public_66ff1e0
        fld dword ptr ds : [public_6704084]
        push ecx
        lea edx, ss:[esp+0x148]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x138]
        push eax
        call public_66ff230
        add esp, 0xC
        lea ecx, ss:[esp+0x130]
        push ecx
        lea ecx, ss:[esp+0x8C]
        call public_66ff200
        public_66fecd6 : nop
        mov edx, dword ptr ss : [esp+0x164]
        mov al, byte ptr ss : [esp+0x170]
        fld dword ptr ds : [edx+ebx*8+4]
        test al, al
        fstp dword ptr ss : [esp+0x18]
        je public_66fecfc
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0x18]
        public_66fecfc : nop
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_6702138]
        fnstsw ax
        test ah, 5
        jp public_66fed1c
        fstp st(0)
        fld dword ptr ds : [public_6702138]
        public_66fed1c : nop
        mov al, byte ptr ds : [public_6704640]
        test al, al
        je public_66fed2d
        fstp st(0)
        fld dword ptr ds : [public_6702fc0]
        public_66fed2d : nop
        fcom dword ptr ds : [public_6704080]
        fnstsw ax
        test ah, 0x41
        je public_66fef9c
        fdiv dword ptr ds : [public_6704080]
        mov al, byte ptr ss : [esp+0x174]
        test al, al
        je public_66fed65
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [public_670407c]
        fadd qword ptr ds : [public_6702fb8]
        fstp dword ptr ds : [public_6704078]
        public_66fed65 : nop
        mov al, byte ptr ss : [esp+0x178]
        test al, al
        je public_66fed9e
        fsubr dword ptr ds : [public_6704074]
        fcom dword ptr ds : [public_6702138]
        fnstsw ax
        test ah, 5
        jnp public_66fef9c
        fcom dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 0x41
        jne public_66feda6
        fstp st(0)
        fld dword ptr ds : [public_6701394]
        jmp public_66fedb7
        public_66fed9e : nop
        fstp st(0)
        fld dword ptr ds : [public_6704070]
        public_66feda6 : nop
        fcom dword ptr ds : [public_6702138]
        fnstsw ax
        test ah, 0x41
        jne public_66fef9c
        public_66fedb7 : nop
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [public_67022c4]
        call public_670092a
        fstp st(0)
        shl eax, 0x18
        or eax, 0xFFFFFF
        mov dword ptr ss : [esp+0xFC], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x130]
        call public_66ff1e0
        fld dword ptr ss : [esp+0x124]
        fld dword ptr ss : [esp+0x12C]
        mov edi, dword ptr ss : [esp+0x18]
        fpatan 
        push ecx
        mov dword ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0xFC], 0
        fld st(0)
        fsin 
        fmul dword ptr ds : [public_6704078]
        fxch 
        fcos 
        fmul dword ptr ds : [public_6704078]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0x14]
        fld qword ptr ds : [public_67022c8]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x78]
        fadd dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_67022c8]
        fadd dword ptr ss : [esp+0x88]
        fadd dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        push edi
        fld dword ptr ss : [esp+0x1C]
        push ecx
        fadd dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp]
        call public_66ff460
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xF4], 0
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xF8], 0x3F800000
        push ecx
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push edi
        fld dword ptr ss : [esp+0x1C]
        push ecx
        fsub dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp]
        call public_66ff460
        fld dword ptr ss : [esp+0x2C]
        push ecx
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xF8], 0x3F800000
        mov dword ptr ss : [esp+0xFC], 0x3F800000
        fst dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push edi
        fld dword ptr ss : [esp+0x2C]
        push ecx
        fadd dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0xA0]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_66ff460
        fld dword ptr ss : [esp+0x14]
        push ecx
        fadd dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xF8], 0x3F800000
        mov dword ptr ss : [esp+0xFC], 0
        fstp dword ptr ss : [esp]
        push edi
        fld dword ptr ss : [esp+0x18]
        push ecx
        fadd dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0xA0]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_66ff460
        jmp public_66fef9e
        public_66fef9c : nop
        fstp st(0)
        public_66fef9e : nop
        mov eax, dword ptr ss : [esp+0x168]
        inc ebx
        cmp ebx, eax
        jl public_66febc7
        public_66fefae : nop
        mov eax, dword ptr ss : [esp+0xA4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x98]
        test eax, eax
        je public_66ff0a1
        test byte ptr ss : [esp+0xEC], 2
        je public_66ff06f
        mov eax, dword ptr ss : [esp+0x100]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0xC0]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0xC4]
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0x108]
        mov eax, dword ptr ss : [esp+0xC8]
        add esi, edx
        mov dword ptr ss : [esp+0x100], esi
        mov dword ptr ds : [ecx], eax
        push 0
        lea ecx, ss:[esp+0x10C]
        call public_66ff6a0
        fld dword ptr ss : [esp+0xCC]
        mov edx, dword ptr ss : [esp+0x110]
        fstp dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x110]
        fld dword ptr ss : [esp+0xD0]
        push 0
        lea ecx, ss:[esp+0x114]
        fstp dword ptr ds : [eax+4]
        call public_66ff6a0
        inc dword ptr ss : [esp+0x98]
        public_66ff06f : nop
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0xB8]
        push edx
        mov edx, dword ptr ss : [esp+0xB4]
        push edx
        mov edx, dword ptr ss : [esp+0xA4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x11C]
        public_66ff0a1 : nop
        xor ebx, ebx
        public_66ff0a3 : nop
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebx
        pop edi
        mov byte ptr ss : [esp+0x154], 0xB
        pop ebp
        je public_66ff0c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x98], ebx
        public_66ff0c5 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        cmp eax, ebx
        je public_66ff0dd
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x9C], ebx
        public_66ff0dd : nop
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        mov dword ptr ss : [esp+0x110], ebx
        mov dword ptr ss : [esp+0x114], ebx
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x10C], ebx
        mov dword ptr ss : [esp+0x100], ebx
        mov dword ptr ss : [esp+0x104], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x15C], 3
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        push eax
        mov byte ptr ss : [esp+0x15C], 2
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        mov byte ptr ss : [esp+0x15C], 1
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x150], 0
        call public_66f3080
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x150], 0xFFFFFFFF
        call public_66ff260
        public_66ff18c : nop
        xor eax, eax
        public_66ff18e : nop
        mov ecx, dword ptr ss : [esp+0x148]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14C
        ret 0x1C
        UNREACHABLE_TRAP(0x66fe770)
    }
}

#undef public_66fe7b3
#undef public_66fe83e
#undef public_66fe865
#undef public_66fe889
#undef public_66fe891
#undef public_66fe8a0
#undef public_66fea00
#undef public_66fea27
#undef public_66fead2
#undef public_66feaea
#undef public_66feafb
#undef public_66feb0d
#undef public_66febc7
#undef public_66fec45
#undef public_66fecd6
#undef public_66fecfc
#undef public_66fed1c
#undef public_66fed2d
#undef public_66fed65
#undef public_66fed9e
#undef public_66feda6
#undef public_66fedb7
#undef public_66fef9c
#undef public_66fef9e
#undef public_66fefae
#undef public_66ff06f
#undef public_66ff0a1
#undef public_66ff0a3
#undef public_66ff0c5
#undef public_66ff0dd
#undef public_66ff18c
#undef public_66ff18e
