#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e6e0);

#define public_40e701 _public_40e701
#define public_40e706 _public_40e706
#define public_40e738 _public_40e738
#define public_40e74b _public_40e74b
#define public_40e750 _public_40e750
#define public_40e77d _public_40e77d
#define public_40e789 _public_40e789
#define public_40e790 _public_40e790
#define public_40e7b0 _public_40e7b0
#define public_40e7b4 _public_40e7b4
#define public_40e7b9 _public_40e7b9
#define public_40e7f3 _public_40e7f3
#define public_40e80e _public_40e80e
#define public_40e828 _public_40e828
#define public_40e86a _public_40e86a
#define public_40e8ad _public_40e8ad
#define public_40e8df _public_40e8df
#define public_40e921 _public_40e921
#define public_40e953 _public_40e953

PROC_DECLARE(0x40e6e0, internal_40e6e0, public_40e6e0);
extern "C" NAKED register_t __cdecl internal_40e6e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        mov ebp, ecx
        cmp eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c6044]
        je public_40e738
        test eax, eax
        je public_40e701
        mov eax, dword ptr ds : [eax+8]
        jmp public_40e706
        public_40e701 : nop
        mov eax, offset public_5c8864
        public_40e706 : nop
        push eax
        lea ecx, ss:[ebp+4]
        mov esi, 0x100002
        call edi
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x89
/*FIXUP push offset public_5c84cc @0x40e71c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c882c @0x40e721*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c882c
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        add esp, 0x18
        mov dword ptr ss : [ebp+0xC], edx
        public_40e738 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, dword ptr ss : [ebp+0x18]
        je public_40e77d
        test ecx, ecx
        je public_40e74b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_40e750
        public_40e74b : nop
        mov eax, offset public_5c8864
        public_40e750 : nop
        push eax
        lea ecx, ss:[ebp+4]
        mov esi, 0x100002
        call edi
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x93
/*FIXUP push offset public_5c84cc @0x40e767*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c87f4 @0x40e76c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c87f4
        push esi
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ebx+0x18]
        add esp, 0x18
        mov dword ptr ss : [ebp+0x18], edx
        public_40e77d : nop
        lea ecx, ss:[ebp+0x20]
        test ecx, ecx
        jne public_40e789
        mov eax, dword ptr ds : [ebx+0x1C]
        jmp public_40e7b9
        public_40e789 : nop
        mov edi, ecx
        lea esi, ds:[ebx+0x20]
        mov edi, edi
        public_40e790 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_40e7b4
        test al, al
        je public_40e7b0
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_40e7b4
        add esi, 2
        add edi, 2
        test al, al
        jne public_40e790
        public_40e7b0 : nop
        xor eax, eax
        jmp public_40e7b9
        public_40e7b4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_40e7b9 : nop
        test eax, eax
        sete al
        test al, al
        jne public_40e828
        lea esi, ds:[ebx+0x20]
        push esi
        push ecx
        push 0x97
/*FIXUP push offset public_5c84cc @0x40e7cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov eax, 0x100002
/*FIXUP push offset public_5c87b8 @0x40e7d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c87b8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        test esi, esi
        jne public_40e7f3
        mov dword ptr ss : [ebp+0x1C], esi
        mov byte ptr ss : [ebp+0x20], 0
        jmp public_40e828
        public_40e7f3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x20]
        jb public_40e80e
        mov eax, 0x1F
        public_40e80e : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x20], 0
        mov dword ptr ss : [ebp+0x1C], eax
        public_40e828 : nop
        fld dword ptr ds : [ebx+0x40]
        fcomp dword ptr ss : [ebp+0x40]
        fnstsw ax
        test ah, 0x44
        jnp public_40e86a
        fld dword ptr ds : [ebx+0x40]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ss : [ebp+0x40]
        fstp qword ptr ss : [esp]
        push 0x98
/*FIXUP push offset public_5c84cc @0x40e84f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c8770 @0x40e854*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8770
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x40]
        add esp, 0x20
        mov dword ptr ss : [ebp+0x40], ecx
        public_40e86a : nop
        fld dword ptr ds : [ebx+0x44]
        fcomp dword ptr ss : [ebp+0x44]
        fnstsw ax
        test ah, 0x44
        jnp public_40e8ad
        fld dword ptr ds : [ebx+0x44]
        mov edx, dword ptr ds : [public_5c6d18]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ss : [ebp+0x44]
        fstp qword ptr ss : [esp]
        push 0x99
/*FIXUP push offset public_5c84cc @0x40e897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c8728 @0x40e89c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8728
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x44]
        add esp, 0x20
        mov dword ptr ss : [ebp+0x44], eax
        public_40e8ad : nop
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ss : [ebp+0x4C]
        cmp eax, ecx
        je public_40e8df
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x9B
/*FIXUP push offset public_5c84cc @0x40e8c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov edx, 0x100002
/*FIXUP push offset public_5c86e8 @0x40e8ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c86e8
        push edx
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ebx+0x4C]
        add esp, 0x18
        mov dword ptr ss : [ebp+0x4C], edx
        public_40e8df : nop
        fld dword ptr ds : [ebx+0x48]
        fcomp dword ptr ss : [ebp+0x48]
        fnstsw ax
        test ah, 0x44
        jnp public_40e921
        fld dword ptr ds : [ebx+0x48]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ss : [ebp+0x48]
        fstp qword ptr ss : [esp]
        push 0x9C
/*FIXUP push offset public_5c84cc @0x40e906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c86ac @0x40e90b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c86ac
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x48]
        add esp, 0x20
        mov dword ptr ss : [ebp+0x48], ecx
        public_40e921 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        mov ecx, dword ptr ss : [ebp+0x50]
        cmp eax, ecx
        je public_40e953
        push eax
        push ecx
        push 0x9E
/*FIXUP push offset public_5c84cc @0x40e932*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov edx, 0x100002
/*FIXUP push offset public_5c8678 @0x40e93c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8678
        push edx
        mov edx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x50]
        add esp, 0x18
        mov dword ptr ss : [ebp+0x50], eax
        public_40e953 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40e6e0)
    }
}

#undef public_40e701
#undef public_40e706
#undef public_40e738
#undef public_40e74b
#undef public_40e750
#undef public_40e77d
#undef public_40e789
#undef public_40e790
#undef public_40e7b0
#undef public_40e7b4
#undef public_40e7b9
#undef public_40e7f3
#undef public_40e80e
#undef public_40e828
#undef public_40e86a
#undef public_40e8ad
#undef public_40e8df
#undef public_40e921
#undef public_40e953
