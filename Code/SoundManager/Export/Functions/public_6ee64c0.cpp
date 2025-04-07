#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee64c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8dd0);

#define public_6ee6529 _public_6ee6529
#define public_6ee652e _public_6ee652e
#define public_6ee6581 _public_6ee6581
#define public_6ee658e _public_6ee658e
#define public_6ee65d4 _public_6ee65d4
#define public_6ee65db _public_6ee65db
#define public_6ee65e2 _public_6ee65e2
#define public_6ee65e4 _public_6ee65e4
#define public_6ee65ef _public_6ee65ef
#define public_6ee6624 _public_6ee6624
#define public_6ee6632 _public_6ee6632
#define public_6ee66c4 _public_6ee66c4
#define public_6ee66dd _public_6ee66dd
#define public_6ee66f4 _public_6ee66f4
#define public_6ee672c _public_6ee672c
#define public_6ee6744 _public_6ee6744
#define public_6ee675c _public_6ee675c
#define public_6ee675f _public_6ee675f
#define public_6ee678d _public_6ee678d
#define public_6ee67a5 _public_6ee67a5
#define public_6ee67a8 _public_6ee67a8
#define public_6ee67d9 _public_6ee67d9
#define public_6ee684f _public_6ee684f
#define public_6ee692d _public_6ee692d
#define public_6ee6942 _public_6ee6942
#define public_6ee696e _public_6ee696e
#define public_6ee697d _public_6ee697d
#define public_6ee699e _public_6ee699e
#define public_6ee69ac _public_6ee69ac
#define public_6ee6a16 _public_6ee6a16
#define public_6ee6a20 _public_6ee6a20
#define public_6ee6a5e _public_6ee6a5e
#define public_6ee6a93 _public_6ee6a93
#define public_6ee6aa8 _public_6ee6aa8
#define public_6ee6ad8 _public_6ee6ad8
#define public_6ee6b4b _public_6ee6b4b
#define public_6ee6b55 _public_6ee6b55

PROC_DECLARE(0x6ee64c0, internal_6ee64c0, public_6ee64c0);
extern "C" NAKED register_t __cdecl internal_6ee64c0()
{
    __asm
    {
        mov eax, 0x203C
        call public_6ee8da0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x204C]
        mov eax, dword ptr ds : [esi]
        push edi
        lea edx, ss:[esp+0x38]
        push edx
        mov edi, ecx
        mov dword ptr ss : [esp+0x3C], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        mov ebp, 1
        call dword ptr ds : [ecx+0x54]
        test eax, eax
        jl public_6ee652e
        mov eax, dword ptr ss : [esp+0x38]
        sub eax, 0
        je public_6ee6529
        dec eax
        je public_6ee65d4
/*FIXUP push offset public_6eeac8c @0x6ee6505*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeac8c
        push 0xD1A
/*FIXUP push offset public_6eea070 @0x6ee650f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee6519*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ee6529 : nop
        mov ebp, 1
        public_6ee652e : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        mov al, byte ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x50], al
        test al, al
        mov eax, dword ptr ds : [esi+8]
        je public_6ee692d
        test cl, cl
        sete byte ptr ss : [esp+0x13]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ee67d9
        test cl, cl
        jne public_6ee6581
        mov edx, dword ptr ds : [eax]
        push ebp
        push ebx
        push eax
        call dword ptr ds : [edx+0x48]
        public_6ee6581 : nop
        test byte ptr ds : [edi+0x90], 2
        je public_6ee658e
        or dword ptr ds : [esi+0x1C], 8
        public_6ee658e : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x50]
        test eax, eax
        jl public_6ee65ef
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, ebx
        je public_6ee65e2
        dec eax
        je public_6ee65db
/*FIXUP push offset public_6eeac6c @0x6ee65ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeac6c
        push 0xD4C
/*FIXUP push offset public_6eea070 @0x6ee65b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee65c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6ee65e2
        public_6ee65d4 : nop
        xor ebp, ebp
        jmp public_6ee652e
        public_6ee65db : nop
        mov ecx, 1
        jmp public_6ee65e4
        public_6ee65e2 : nop
        xor ecx, ecx
        public_6ee65e4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        public_6ee65ef : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x28]
        mov ebx, 0x168
        push edx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        jl public_6ee66f4
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, ebx
        jbe public_6ee6624
        mov edx, ebx
        mov dword ptr ss : [esp+0x24], edx
        public_6ee6624 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, ebx
        jbe public_6ee6632
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], ecx
        public_6ee6632 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        push eax
        call dword ptr ds : [ebx+0x34]
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        fild dword ptr ds : [edi+0xA4]
        mov eax, dword ptr ds : [esi+8]
        push ebp
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x44]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6ee9250]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6ee9498]
        fnstsw ax
        test ah, 5
        jp public_6ee66c4
        mov dword ptr ss : [esp+0x18], 0xC61C4000
        jmp public_6ee66dd
        public_6ee66c4 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6ee9230]
        fnstsw ax
        test ah, 0x41
        jne public_6ee66dd
        mov dword ptr ss : [esp+0x18], 0
        public_6ee66dd : nop
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [eax]
        push ebp
        call public_6ee8dd0
        push eax
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [ebx+0x3C]
        public_6ee66f4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x48]
        test eax, eax
        jl public_6ee672c
        fild dword ptr ds : [edi+0xA4]
        mov eax, dword ptr ds : [esi+8]
        push ebp
        fmul dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        public_6ee672c : nop
        fld dword ptr ds : [esi+0x30]
        fcomp dword ptr ds : [public_6ee9494]
        fnstsw ax
        test ah, 5
        jp public_6ee6744
        fld dword ptr ds : [public_6ee9494]
        jmp public_6ee675f
        public_6ee6744 : nop
        fld dword ptr ds : [esi+0x30]
        fcomp dword ptr ds : [public_6ee9490]
        fnstsw ax
        test ah, 0x41
        jne public_6ee675c
        fld dword ptr ds : [public_6ee9490]
        jmp public_6ee675f
        public_6ee675c : nop
        fld dword ptr ds : [esi+0x30]
        public_6ee675f : nop
        mov eax, dword ptr ds : [esi+8]
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_6ee9494]
        fnstsw ax
        test ah, 5
        jp public_6ee678d
        fld dword ptr ds : [public_6ee9494]
        jmp public_6ee67a8
        public_6ee678d : nop
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_6ee9490]
        fnstsw ax
        test ah, 0x41
        jne public_6ee67a5
        fld dword ptr ds : [public_6ee9490]
        jmp public_6ee67a8
        public_6ee67a5 : nop
        fld dword ptr ds : [esi+0x28]
        public_6ee67a8 : nop
        mov eax, dword ptr ds : [esi+8]
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        jmp public_6ee69ac
        public_6ee67d9 : nop
        fld dword ptr ds : [esi+0x24]
        mov ecx, 0x5F3759DF
        fst dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_6ee948c]
        fsubr dword ptr ds : [public_6ee9488]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ds : [public_6ee9230]
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 0x41
        jne public_6ee684f
        fstp st(0)
        fld dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+0xE4]
        fsub st, st(1)
        fmul dword ptr ds : [edi+0xEC]
        fadd st, st(1)
        fdivr st, st(1)
        fldlg2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_6ee9480]
        fstp st(1)
        public_6ee684f : nop
        fadd dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi+0x20]
        test al, 0x40
        fstp dword ptr ss : [esp+0x28]
        je public_6ee69ac
        fld dword ptr ds : [edi+0xB8]
        fmul dword ptr ds : [edi+0xB0]
        fld dword ptr ds : [edi+0xBC]
        fmul dword ptr ds : [edi+0xAC]
        fsubp 
        fld dword ptr ds : [edi+0xA8]
        fmul dword ptr ds : [edi+0xBC]
        fld dword ptr ds : [edi+0xB0]
        fmul dword ptr ds : [edi+0xB4]
        fsubp 
        fld dword ptr ds : [edi+0xAC]
        fmul dword ptr ds : [edi+0xB4]
        fld dword ptr ds : [edi+0xA8]
        fmul dword ptr ds : [edi+0xB8]
        fsubp 
        fld dword ptr ds : [public_6ee9494]
        fdiv dword ptr ss : [esp+0x14]
        fld st(0)
        fmul dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [esi+0x44]
        fld st(0)
        fmul dword ptr ds : [esi+0x48]
        fstp dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [esi+0x4C]
        fstp dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x34], ecx
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], edx
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(4)
        faddp 
        fmul dword ptr ds : [edi+0xF0]
        call public_6ee8dd0
        fstp st(0)
        lea ecx, ss:[esp+0x14]
        fstp st(0)
        mov ebp, eax
        fstp st(0)
        mov eax, dword ptr ds : [esi+4]
        push ecx
        mov dword ptr ss : [esp+0x18], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        cmp ebp, dword ptr ss : [esp+0x14]
        je public_6ee69ac
        push ebp
        jmp public_6ee699e
        public_6ee692d : nop
        test eax, eax
        mov byte ptr ss : [esp+0x13], cl
        je public_6ee6942
        test cl, cl
        je public_6ee6942
        mov ecx, dword ptr ds : [eax]
        push ebp
        push 2
        push eax
        call dword ptr ds : [ecx+0x48]
        public_6ee6942 : nop
        test byte ptr ds : [esi+0x20], 0x40
        je public_6ee69ac
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jl public_6ee69ac
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 0xFFFFD8F0
        jge public_6ee696e
        mov dword ptr ss : [esp+0x18], 0xFFFFD8F0
        jmp public_6ee697d
        public_6ee696e : nop
        cmp eax, 0x2710
        jle public_6ee697d
        mov dword ptr ss : [esp+0x18], 0x2710
        public_6ee697d : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6ee69ac
        push ecx
        public_6ee699e : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x40]
        mov byte ptr ss : [esp+0x13], 1
        public_6ee69ac : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x20]
        push eax
        mov ecx, edi
        call public_6ee31d0
        test byte ptr ds : [esi+0x1C], 0x20
        mov ebx, dword ptr ss : [esp+0x14]
        je public_6ee6a5e
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        movzx ebp, word ptr ds : [ebx+8]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jl public_6ee6a5e
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6ee1670
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], 0
        fimul dword ptr ss : [esp+0x20]
        add esp, 4
        call public_6ee8dd0
        mov ebp, eax
        cmp ebp, 0x186A0
        jbe public_6ee6a16
        mov ebp, 0x186A0
        jmp public_6ee6a20
        public_6ee6a16 : nop
        cmp ebp, 0x64
        jae public_6ee6a20
        mov ebp, 0x64
        public_6ee6a20 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x44]
        test eax, eax
        jge public_6ee6a5e
        push ebp
        lea edx, ss:[esp+0x50]
/*FIXUP push offset public_6eeac48 @0x6ee6a33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeac48
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0xDFD
/*FIXUP push offset public_6eea070 @0x6ee6a49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee6a53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6ee6a5e : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x48]
        fadd dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6ee9250]
        fcom dword ptr ds : [public_6ee9230]
        fnstsw ax
        test ah, 0x41
        jne public_6ee6a93
        fstp st(0)
        fld dword ptr ds : [public_6ee9230]
        jmp public_6ee6aa8
        public_6ee6a93 : nop
        fcom dword ptr ds : [public_6ee9498]
        fnstsw ax
        test ah, 5
        jp public_6ee6aa8
        fstp st(0)
        fld dword ptr ds : [public_6ee9498]
        public_6ee6aa8 : nop
        call public_6ee8dd0
        lea edx, ss:[esp+0x3C]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        push edx
        mov dword ptr ss : [esp+0x40], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        cmp ebp, dword ptr ss : [esp+0x3C]
        je public_6ee6ad8
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov byte ptr ss : [esp+0x13], 1
        public_6ee6ad8 : nop
        test byte ptr ds : [edi+0x90], 4
        je public_6ee6b55
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6ee6b55
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_6ee917c @0x6ee6b04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push esi
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6ee6b55
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x14]
        push edx
        push 1
/*FIXUP push offset public_6ee912c @0x6ee6b1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee912c
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test byte ptr ss : [esp+0x14], 2
        je public_6ee6b4b
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 4
        lea edx, ss:[esp+0x28]
        push edx
        push ebx
        push ebx
        push 1
/*FIXUP push offset public_6ee912c @0x6ee6b42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee912c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6ee6b4b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ee6b55 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x203C
        ret 4
        UNREACHABLE_TRAP(0x6ee64c0)
    }
}

#undef public_6ee6529
#undef public_6ee652e
#undef public_6ee6581
#undef public_6ee658e
#undef public_6ee65d4
#undef public_6ee65db
#undef public_6ee65e2
#undef public_6ee65e4
#undef public_6ee65ef
#undef public_6ee6624
#undef public_6ee6632
#undef public_6ee66c4
#undef public_6ee66dd
#undef public_6ee66f4
#undef public_6ee672c
#undef public_6ee6744
#undef public_6ee675c
#undef public_6ee675f
#undef public_6ee678d
#undef public_6ee67a5
#undef public_6ee67a8
#undef public_6ee67d9
#undef public_6ee684f
#undef public_6ee692d
#undef public_6ee6942
#undef public_6ee696e
#undef public_6ee697d
#undef public_6ee699e
#undef public_6ee69ac
#undef public_6ee6a16
#undef public_6ee6a20
#undef public_6ee6a5e
#undef public_6ee6a93
#undef public_6ee6aa8
#undef public_6ee6ad8
#undef public_6ee6b4b
#undef public_6ee6b55
