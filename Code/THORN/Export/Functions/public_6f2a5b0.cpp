#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a150);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f2a5e0 _public_6f2a5e0
#define public_6f2a5e6 _public_6f2a5e6
#define public_6f2a603 _public_6f2a603
#define public_6f2a62c _public_6f2a62c
#define public_6f2a632 _public_6f2a632
#define public_6f2a64b _public_6f2a64b
#define public_6f2a674 _public_6f2a674
#define public_6f2a67a _public_6f2a67a
#define public_6f2a698 _public_6f2a698
#define public_6f2a6c1 _public_6f2a6c1
#define public_6f2a6c7 _public_6f2a6c7
#define public_6f2a6e5 _public_6f2a6e5
#define public_6f2a70e _public_6f2a70e
#define public_6f2a714 _public_6f2a714
#define public_6f2a732 _public_6f2a732
#define public_6f2a75b _public_6f2a75b
#define public_6f2a761 _public_6f2a761
#define public_6f2a77a _public_6f2a77a
#define public_6f2a7a7 _public_6f2a7a7
#define public_6f2a7ad _public_6f2a7ad
#define public_6f2a7ca _public_6f2a7ca
#define public_6f2a7f9 _public_6f2a7f9
#define public_6f2a7ff _public_6f2a7ff
#define public_6f2a81c _public_6f2a81c
#define public_6f2a849 _public_6f2a849
#define public_6f2a84f _public_6f2a84f
#define public_6f2a876 _public_6f2a876
#define public_6f2a878 _public_6f2a878
#define public_6f2a87b _public_6f2a87b
#define public_6f2a8a4 _public_6f2a8a4
#define public_6f2a8aa _public_6f2a8aa
#define public_6f2a8d1 _public_6f2a8d1
#define public_6f2a8d3 _public_6f2a8d3
#define public_6f2a8d6 _public_6f2a8d6
#define public_6f2a8fc _public_6f2a8fc

PROC_DECLARE(0x6f2a5b0, internal_6f2a5b0, public_6f2a5b0);
extern "C" NAKED register_t __cdecl internal_6f2a5b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a5e0
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ed38 @0x6f2a5ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ed38
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a5e6
        public_6f2a5e0 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a5e6 : nop
        push edi
        call public_6f4b410
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        jne public_6f2a603
        push edi
        call public_6f4b590
        add esp, 4
        mov dword ptr ss : [ebp+0x48], eax
        public_6f2a603 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a62c
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ea08 @0x6f2a616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ea08
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a632
        public_6f2a62c : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a632 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a64b
        push edi
        call public_6f4b590
        add esp, 4
        mov dword ptr ss : [ebp+0x4C], eax
        public_6f2a64b : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a674
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5e9fc @0x6f2a65e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e9fc
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a67a
        public_6f2a674 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a67a : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a698
        push edi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ss : [ebp+0x50], eax
        public_6f2a698 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a6c1
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ed30 @0x6f2a6ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ed30
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a6c7
        public_6f2a6c1 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a6c7 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a6e5
        push edi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ss : [ebp+0x2C], eax
        public_6f2a6e5 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a70e
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ed20 @0x6f2a6f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ed20
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a714
        public_6f2a70e : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a714 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a732
        push edi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov dword ptr ss : [ebp+0x30], eax
        public_6f2a732 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a75b
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5e398 @0x6f2a745*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e398
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a761
        public_6f2a75b : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a761 : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a77a
        push edi
        call public_6f4b540
        fstp dword ptr ss : [ebp+0x3C]
        add esp, 4
        public_6f2a77a : nop
        mov edi, dword ptr ss : [ebp+0x34]
        push ebx
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a7a7
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ea24 @0x6f2a791*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ea24
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov ebx, eax
        jmp public_6f2a7ad
        public_6f2a7a7 : nop
        mov ebx, dword ptr ds : [public_6f61de8]
        public_6f2a7ad : nop
        push ebx
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a7ca
        push ebx
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov edi, eax
        public_6f2a7ca : nop
        mov dword ptr ss : [ebp+0x34], edi
        mov edi, dword ptr ss : [ebp+0x38]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a7f9
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ea1c @0x6f2a7e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ea1c
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov ebx, eax
        jmp public_6f2a7ff
        public_6f2a7f9 : nop
        mov ebx, dword ptr ds : [public_6f61de8]
        public_6f2a7ff : nop
        push ebx
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a81c
        push ebx
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        mov edi, eax
        public_6f2a81c : nop
        push esi
        mov dword ptr ss : [ebp+0x38], edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        pop ebx
        je public_6f2a849
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ed14 @0x6f2a833*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ed14
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a84f
        public_6f2a849 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a84f : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a87b
        push edi
        call public_6f4b540
        fcomp qword ptr ds : [public_6f5a228]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_6f2a876
        mov al, 1
        jmp public_6f2a878
        public_6f2a876 : nop
        xor al, al
        public_6f2a878 : nop
        mov byte ptr ss : [ebp+0x40], al
        public_6f2a87b : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a8a4
        push esi
        call public_6f4b900
/*FIXUP push offset public_6f5ed0c @0x6f2a88e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ed0c
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a8aa
        public_6f2a8a4 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a8aa : nop
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a8d6
        push edi
        call public_6f4b540
        fcomp qword ptr ds : [public_6f5a228]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_6f2a8d1
        mov al, 1
        jmp public_6f2a8d3
        public_6f2a8d1 : nop
        xor al, al
        public_6f2a8d3 : nop
        mov byte ptr ss : [ebp+0x41], al
/*FIXUP public_6f2a8d6 : nop
        push offset public_6f5ecf8 @0x6f2a8d6*/
  FIXUP public_6f2a8d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ecf8
        push esi
        call public_6f2a150
        mov esi, eax
        push esi
        call public_6f4b410
        add esp, 0xC
        test eax, eax
        jne public_6f2a8fc
        push esi
        call public_6f4b540
        fstp dword ptr ss : [ebp+0x44]
        add esp, 4
        public_6f2a8fc : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f2a5b0)
    }
}

#undef public_6f2a5e0
#undef public_6f2a5e6
#undef public_6f2a603
#undef public_6f2a62c
#undef public_6f2a632
#undef public_6f2a64b
#undef public_6f2a674
#undef public_6f2a67a
#undef public_6f2a698
#undef public_6f2a6c1
#undef public_6f2a6c7
#undef public_6f2a6e5
#undef public_6f2a70e
#undef public_6f2a714
#undef public_6f2a732
#undef public_6f2a75b
#undef public_6f2a761
#undef public_6f2a77a
#undef public_6f2a7a7
#undef public_6f2a7ad
#undef public_6f2a7ca
#undef public_6f2a7f9
#undef public_6f2a7ff
#undef public_6f2a81c
#undef public_6f2a849
#undef public_6f2a84f
#undef public_6f2a876
#undef public_6f2a878
#undef public_6f2a87b
#undef public_6f2a8a4
#undef public_6f2a8aa
#undef public_6f2a8d1
#undef public_6f2a8d3
#undef public_6f2a8d6
#undef public_6f2a8fc
