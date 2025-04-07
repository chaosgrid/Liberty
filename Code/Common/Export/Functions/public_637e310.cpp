#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_63743a0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_6378980);
CLANG_FORWARD_PROC_SYMBOL(public_637e310);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_637e359 _public_637e359
#define public_637e395 _public_637e395
#define public_637e3bf _public_637e3bf
#define public_637e3dd _public_637e3dd
#define public_637e414 _public_637e414
#define public_637e496 _public_637e496
#define public_637e4b1 _public_637e4b1
#define public_637e535 _public_637e535
#define public_637e559 _public_637e559
#define public_637e577 _public_637e577
#define public_637e59c _public_637e59c
#define public_637e5e3 _public_637e5e3
#define public_637e5ea _public_637e5ea
#define public_637e60f _public_637e60f
#define public_637e621 _public_637e621
#define public_637e629 _public_637e629
#define public_637e63a _public_637e63a
#define public_637e649 _public_637e649
#define public_637e652 _public_637e652
#define public_637e695 _public_637e695
#define public_637e6cc _public_637e6cc
#define public_637e6e3 _public_637e6e3

PROC_DECLARE(0x637e310, internal_637e310, public_637e310);
extern "C" NAKED register_t __cdecl internal_637e310()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        xor ebx, ebx
        cmp eax, 1
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x14], ebx
        jl public_637e359
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f5988 @0x637e34a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5988
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_637e359 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ds : [public_658bf80]
        inc edx
        push esi
        mov dword ptr ds : [public_658bf80], edx
        call public_63705e0
        push esi
        call public_636ef40
        mov dword ptr ds : [public_658b824], 1
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test eax, 0x40000
        je public_637e395
        inc dword ptr ds : [edi]
        public_637e395 : nop
        mov dword ptr ds : [public_658b820], esi
        or dword ptr ds : [esi+0x50], 0x400
        mov dword ptr ds : [esi+0x20], ebx
        cmp dword ptr ds : [public_658b078], 4
        jl public_637e3bf
        push ebx
        push ebx
        push ebx
        push esi
/*FIXUP push offset public_63f5980 @0x637e3b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5980
        call public_6378820
        add esp, 0x14
        public_637e3bf : nop
        mov edx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [public_658b820]
        inc edx
        cmp eax, ebx
        mov dword ptr ds : [public_658b8e0], edx
        mov dword ptr ss : [esp+0x10], eax
        je public_637e652
        public_637e3dd : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 4
        je public_637e649
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], ecx
        mov ecx, dword ptr ds : [eax+0x3C]
        cmp ecx, ebx
        je public_637e63a
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        cmp esi, ebx
        je public_637e63a
        public_637e414 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], eax
        je public_637e629
        mov dword ptr ds : [esi+0x48], eax
        mov ecx, dword ptr ds : [public_658be28]
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x18]
        push edx
        inc ecx
        push esi
        push eax
        mov dword ptr ds : [public_658be28], ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x24]
        fcomp qword ptr ds : [public_658b0c8]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_637e4b1
        mov ecx, dword ptr ds : [public_658bf80]
        inc ecx
        push esi
        mov dword ptr ds : [public_658bf80], ecx
        call public_63705e0
        push esi
        call public_636ef40
        or dword ptr ds : [esi+0x50], 0x400
        mov dword ptr ds : [esi+0x20], ebx
        mov ecx, dword ptr ds : [public_658b824]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_658b824], ecx
        test dword ptr ds : [esi+0x50], 0x40000
        je public_637e496
        mov eax, dword ptr ss : [ebp+0x10]
        inc dword ptr ds : [eax]
        public_637e496 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_637e629
        push ebx
        push ebx
        push ebx
        push esi
/*FIXUP push offset public_63f5980 @0x637e4a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5980
        jmp public_637e621
        public_637e4b1 : nop
        fld qword ptr ds : [public_658b098]
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_637e5e3
        or dword ptr ds : [esi+0x50], 0x800000
        mov ecx, dword ptr ds : [public_658bac8]
        inc ecx
/*FIXUP push offset public_63f596c @0x637e4d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f596c
        mov dword ptr ds : [public_658bac8], ecx
        call public_637f410
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_658b0a8]
        add esp, 4
        inc ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_637e59c
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        jne public_637e577
        fld qword ptr ds : [public_658b888]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_637e535
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_658b888], ecx
        mov dword ptr ds : [public_658b88c], edx
        public_637e535 : nop
        fld qword ptr ds : [public_658b890]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_637e559
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_658b890], eax
        mov dword ptr ds : [public_658b894], ecx
        public_637e559 : nop
        fld qword ptr ds : [esi+8]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_637e59c
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        jmp public_637e59c
        public_637e577 : nop
        fld qword ptr ds : [public_658b898]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_637e59c
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_658b898], ecx
        mov dword ptr ds : [public_658b89c], edx
        public_637e59c : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_637e5ea
        mov eax, dword ptr ds : [public_658b0cc]
        mov ecx, dword ptr ds : [public_658b0c8]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        push edx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5910 @0x637e5d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5910
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        jmp public_637e5ea
        public_637e5e3 : nop
        and dword ptr ds : [esi+0x50], 0xFF7FFFFF
        public_637e5ea : nop
        mov edx, dword ptr ds : [public_658bf50]
        mov ecx, dword ptr ss : [esp+0xC]
        inc edx
        mov dword ptr ds : [public_658bf50], edx
        mov eax, dword ptr ds : [esi+0x50]
        inc ecx
        test eax, 0x40000
        mov dword ptr ss : [esp+0xC], ecx
        je public_637e60f
        mov eax, dword ptr ss : [ebp+0x14]
        inc dword ptr ds : [eax]
        public_637e60f : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_637e629
        push ebx
        push ebx
        push ebx
        push esi
/*FIXUP push offset public_63f5908 @0x637e61c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5908
        public_637e621 : nop
        call public_6378820
        add esp, 0x14
        public_637e629 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        cmp esi, ebx
        jne public_637e414
        mov eax, dword ptr ss : [esp+0x10]
        public_637e63a : nop
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_637e3dd
        public_637e649 : nop
        cmp dword ptr ss : [esp+0xC], ebx
        mov edi, dword ptr ss : [ebp+0x10]
        jne public_637e695
/*FIXUP public_637e652 : nop
        push offset public_63f58f8 @0x637e652*/
  FIXUP public_637e652 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f58f8
        call public_637f410
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 8
        push eax
/*FIXUP push offset public_63f58a0 @0x637e66f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f58a0
        push edx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [public_658b810]
        push 1
        push ebx
        push eax
        call public_6378980
        push ebx
        push ebx
        push 3
        call public_6378600
        add esp, 0x24
        public_637e695 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_637e6cc
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_658b824]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        push edx
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
/*FIXUP push offset public_63f5850 @0x637e6bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5850
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_637e6cc : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_637e6e3
        cmp dword ptr ds : [public_658b844], 0x32
        jge public_637e6e3
        call public_63743a0
        public_637e6e3 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637e310)
    }
}

#undef public_637e359
#undef public_637e395
#undef public_637e3bf
#undef public_637e3dd
#undef public_637e414
#undef public_637e496
#undef public_637e4b1
#undef public_637e535
#undef public_637e559
#undef public_637e577
#undef public_637e59c
#undef public_637e5e3
#undef public_637e5ea
#undef public_637e60f
#undef public_637e621
#undef public_637e629
#undef public_637e63a
#undef public_637e649
#undef public_637e652
#undef public_637e695
#undef public_637e6cc
#undef public_637e6e3
