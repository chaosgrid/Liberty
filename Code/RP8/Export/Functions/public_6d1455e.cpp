#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fcbf);

#define public_6d145cc _public_6d145cc
#define public_6d145eb _public_6d145eb
#define public_6d14644 _public_6d14644
#define public_6d14664 _public_6d14664
#define public_6d14683 _public_6d14683
#define public_6d1468e _public_6d1468e
#define public_6d146b9 _public_6d146b9
#define public_6d146ce _public_6d146ce
#define public_6d146d9 _public_6d146d9
#define public_6d14704 _public_6d14704
#define public_6d1476d _public_6d1476d
#define public_6d147ee _public_6d147ee
#define public_6d147f6 _public_6d147f6
#define public_6d148a6 _public_6d148a6
#define public_6d148c8 _public_6d148c8
#define public_6d148ce _public_6d148ce

PROC_DECLARE(0x6d1455e, internal_6d1455e, public_6d1455e);
extern "C" NAKED register_t __cdecl internal_6d1455e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x403C
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x118], 0
        jne public_6d145cc
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x10]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
/*FIXUP push offset public_6d6a3e8 @0x6d145a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a3e8
        push 0x1242
/*FIXUP push offset public_6d6a428 @0x6d145ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a428
/*FIXUP push offset public_6d6a474 @0x6d145b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a474
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d148ce
        public_6d145cc : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        je public_6d145eb
        mov edx, dword ptr ss : [ebp-8]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d14644
        public_6d145eb : nop
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x14]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x14]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
/*FIXUP push offset public_6d6a490 @0x6d14617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a490
        push 0x1249
/*FIXUP push offset public_6d6a4b8 @0x6d14621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a4b8
/*FIXUP push offset public_6d6a504 @0x6d14626*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a504
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, 0xFFFFFFFE
        jmp public_6d148ce
        public_6d14644 : nop
        mov dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp-4], 0
        je public_6d14664
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d14664 : nop
        mov dword ptr ss : [ebp-0x202C], 0x80004005
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+4], 0
        je public_6d14683
        mov dword ptr ss : [ebp-0x2028], 0
        jmp public_6d1468e
        public_6d14683 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2028], ecx
        public_6d1468e : nop
        cmp dword ptr ss : [ebp-0x2028], 0
        je public_6d146b9
        lea edx, ss:[ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2028]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x2028]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp-0x202C], eax
        jmp public_6d14704
        public_6d146b9 : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+4], 1
        je public_6d146ce
        mov dword ptr ss : [ebp-0x2030], 0
        jmp public_6d146d9
        public_6d146ce : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x2030], eax
        public_6d146d9 : nop
        cmp dword ptr ss : [ebp-0x2030], 0
        je public_6d14704
        lea ecx, ss:[ebp-4]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x2030]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x2030]
        push edx
        call dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [ebp-0x202C], eax
        public_6d14704 : nop
        cmp dword ptr ss : [ebp-0x202C], 0
        jge public_6d1476d
        mov eax, dword ptr ss : [ebp-0x202C]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6affc @0x6d1471d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6affc
        lea ecx, ss:[ebp-0x4030]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x4038], eax
        mov edx, dword ptr ss : [ebp-0x4038]
        push edx
        push 0xAB
/*FIXUP push offset public_6d6ae00 @0x6d14743*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae00
/*FIXUP push offset public_6d6ade0 @0x6d14748*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push 2
        push 0x10000
        lea ecx, ss:[ebp-0x4034]
        call public_6d15b80
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d1476d : nop
        xor edx, edx
        cmp dword ptr ss : [ebp-0x202C], 0
        setge dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d147f6
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x18]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x18]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x18], ecx
/*FIXUP push offset public_6d6a520 @0x6d147ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a520
        push 0x1250
/*FIXUP push offset public_6d6a558 @0x6d147b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a558
/*FIXUP push offset public_6d6a5a4 @0x6d147bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a5a4
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov dword ptr ss : [ebp-0x1C], 0xFFFFFFFE
        cmp dword ptr ss : [ebp-4], 0
        je public_6d147ee
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d147ee : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        jmp public_6d148ce
        public_6d147f6 : nop
        push 0
        push 0
        push 1
        push 0
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        push 0
        push 0
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2fcbf
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d148a6
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d6a5c0 @0x6d1482d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a5c0
        lea edx, ss:[ebp-0x201C]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x403C], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2020]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2020], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2020]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2020], eax
        mov ecx, dword ptr ss : [ebp-0x403C]
        push ecx
        push 0x125E
/*FIXUP push offset public_6d6a5d8 @0x6d1488b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a5d8
/*FIXUP push offset public_6d6a624 @0x6d14890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a624
        mov edx, dword ptr ss : [ebp-0x2020]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d148a6 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x2024], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d148c8
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d148c8 : nop
        mov eax, dword ptr ss : [ebp-0x2024]
        public_6d148ce : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d1455e)
    }
}

#undef public_6d145cc
#undef public_6d145eb
#undef public_6d14644
#undef public_6d14664
#undef public_6d14683
#undef public_6d1468e
#undef public_6d146b9
#undef public_6d146ce
#undef public_6d146d9
#undef public_6d14704
#undef public_6d1476d
#undef public_6d147ee
#undef public_6d147f6
#undef public_6d148a6
#undef public_6d148c8
#undef public_6d148ce
