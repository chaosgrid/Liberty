#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_559db0);
CLANG_FORWARD_PROC_SYMBOL(public_55a490);
CLANG_FORWARD_PROC_SYMBOL(public_55a6b0);
CLANG_FORWARD_PROC_SYMBOL(public_564610);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_55a6f5 _public_55a6f5
#define public_55a722 _public_55a722
#define public_55a78e _public_55a78e
#define public_55a7fe _public_55a7fe
#define public_55a80d _public_55a80d
#define public_55a821 _public_55a821
#define public_55a841 _public_55a841
#define public_55a867 _public_55a867
#define public_55a876 _public_55a876
#define public_55a941 _public_55a941
#define public_55a9b8 _public_55a9b8
#define public_55aa16 _public_55aa16
#define public_55aa3f _public_55aa3f
#define public_55aa41 _public_55aa41
#define public_55aa5b _public_55aa5b
#define public_55aa84 _public_55aa84
#define public_55aa86 _public_55aa86
#define public_55aaa0 _public_55aaa0
#define public_55aac9 _public_55aac9
#define public_55aacb _public_55aacb
#define public_55aae2 _public_55aae2
#define public_55ab11 _public_55ab11
#define public_55ab1b _public_55ab1b
#define public_55ab3d _public_55ab3d
#define public_55ab5d _public_55ab5d
#define public_55ab6d _public_55ab6d
#define public_55ab7b _public_55ab7b
#define public_55ab93 _public_55ab93
#define public_55abb0 _public_55abb0
#define public_55abbc _public_55abbc
#define public_55abc2 _public_55abc2
#define public_55abcf _public_55abcf
#define public_55abf2 _public_55abf2
#define public_55ac04 _public_55ac04
#define public_55ac16 _public_55ac16

PROC_DECLARE(0x55a6b0, internal_55a6b0, public_55a6b0);
extern "C" NAKED register_t __cdecl internal_55a6b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push eax
        push ebx
        call public_59dd00
        push ebx
        call public_59dbf0
        mov cl, byte ptr ds : [ebx+0x6C]
        mov ebp, dword ptr ss : [esp+0x50]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test ebp, ebp
        mov byte ptr ds : [ebx+0x6C], cl
        je public_55ac04
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_55ab6d
        public_55a6f5 : nop
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5dba88 @0x55a6fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba88
        mov ecx, ebp
        call edi
        test al, al
        mov ecx, ebp
        je public_55a722
        mov esi, dword ptr ds : [ebx]
        push 0
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, ebx
        call dword ptr ds : [esi+0x98]
        jmp public_55ab5d
/*FIXUP public_55a722 : nop
        push offset public_5e1728 @0x55a722*/
  FIXUP public_55a722 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1728
        call edi
        test al, al
        mov ecx, ebp
        je public_55a78e
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea edx, ds:[ebx+0x350]
        mov dword ptr ss : [esp+0x48], ecx
        push ecx
        mov ecx, edx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55ab5d
        mov ecx, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ds : [ebx+0x354]
        mov edx, ecx
        shr ecx, 2
        lea eax, ds:[ebx+0x350]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        jmp public_55ab5d
/*FIXUP public_55a78e : nop
        push offset public_5e1718 @0x55a78e*/
  FIXUP public_55a78e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1718
        call edi
        test al, al
        mov ecx, ebp
        je public_55a821
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        cmp byte ptr ds : [esi], 0
        je public_55ab5d
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea edx, ds:[ebx+0x360]
        mov dword ptr ss : [esp+0x48], ecx
        push ecx
        mov ecx, edx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55a7fe
        mov ecx, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ds : [ebx+0x364]
        mov edx, ecx
        shr ecx, 2
        lea eax, ds:[ebx+0x360]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_55a7fe : nop
        mov eax, dword ptr ds : [ebx+0x364]
        test eax, eax
        jne public_55a80d
        mov eax, dword ptr ds : [public_5c7078]
        public_55a80d : nop
        push eax
        call public_564610
        add esp, 4
        mov dword ptr ds : [ebx+0x374], eax
        jmp public_55ab5d
/*FIXUP public_55a821 : nop
        push offset public_5e1710 @0x55a821*/
  FIXUP public_55a821 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1710
        call edi
        test al, al
        mov ecx, ebp
        je public_55a876
        call dword ptr ds : [public_5c6698]
        test eax, eax
        je public_55a841
        cmp byte ptr ds : [eax], 0
        je public_55ab5d
        public_55a841 : nop
        lea edi, ds:[ebx+0xCC]
        push edi
        lea esi, ds:[ebx+0x34C]
        push esi
        push eax
        call public_55a490
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        test eax, eax
        jne public_55a867
        cmp dword ptr ds : [edi], 0
        je public_55ab5d
        public_55a867 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x8C]
        jmp public_55ab5d
/*FIXUP public_55a876 : nop
        push offset public_5e1708 @0x55a876*/
  FIXUP public_55a876 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        call edi
        test al, al
        mov ecx, ebp
        je public_55a941
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0xA8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        cmp dword ptr ds : [ebx+0x84], 0xFFFFFFFF
        je public_55ab5d
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fadd dword ptr ds : [ebx+0x68]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x60]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [ebx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_55ab5d
/*FIXUP public_55a941 : nop
        push offset public_5dd344 @0x55a941*/
  FIXUP public_55a941 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call edi
        test al, al
        je public_55a9b8
        mov ecx, dword ptr ss : [esp+0x40]
        lea edi, ds:[ebx+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x24], eax
        je public_55ab5d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_55ab5d
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_5c6698]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, esi
        call dword ptr ds : [eax+0x90]
        jmp public_55ab5d
/*FIXUP public_55a9b8 : nop
        push offset public_5e16fc @0x55a9b8*/
  FIXUP public_55a9b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16fc
        mov ecx, ebp
        call edi
        test al, al
        mov ecx, ebp
        je public_55aa16
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ebx+0xB4]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_55ab5d
/*FIXUP public_55aa16 : nop
        push offset public_5e16ec @0x55aa16*/
  FIXUP public_55aa16 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16ec
        call edi
        test al, al
        mov ecx, ebp
        je public_55aa5b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55aa3f
        mov ecx, 1
        jmp public_55aa41
        public_55aa3f : nop
        xor ecx, ecx
        public_55aa41 : nop
        mov al, byte ptr ds : [ebx+0x331]
        mov dl, al
        xor dl, cl
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ebx+0x331], dl
        jmp public_55ab5d
/*FIXUP public_55aa5b : nop
        push offset public_5e16dc @0x55aa5b*/
  FIXUP public_55aa5b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16dc
        call edi
        test al, al
        mov ecx, ebp
        je public_55aaa0
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55aa84
        mov eax, 1
        jmp public_55aa86
        public_55aa84 : nop
        xor eax, eax
        public_55aa86 : nop
        mov cl, byte ptr ds : [ebx+0x330]
        shl al, 3
        xor al, cl
        and al, 8
        xor al, cl
        mov byte ptr ds : [ebx+0x330], al
        jmp public_55ab5d
/*FIXUP public_55aaa0 : nop
        push offset public_5e16cc @0x55aaa0*/
  FIXUP public_55aaa0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16cc
        call edi
        test al, al
        mov ecx, ebp
        je public_55aae2
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55aac9
        mov eax, 1
        jmp public_55aacb
        public_55aac9 : nop
        xor eax, eax
        public_55aacb : nop
        mov cl, byte ptr ds : [ebx+0x330]
        shl al, 5
        xor al, cl
        and al, 0x20
        xor al, cl
        mov byte ptr ds : [ebx+0x330], al
        jmp public_55ab5d
/*FIXUP public_55aae2 : nop
        push offset public_5e16c0 @0x55aae2*/
  FIXUP public_55aae2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16c0
        call edi
        test al, al
        mov ecx, ebp
        je public_55ab1b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_55ab11
        mov eax, 1
        mov byte ptr ds : [ebx+0x2D1], al
        jmp public_55ab5d
        public_55ab11 : nop
        xor eax, eax
        mov byte ptr ds : [ebx+0x2D1], al
        jmp public_55ab5d
/*FIXUP public_55ab1b : nop
        push offset public_5e16b8 @0x55ab1b*/
  FIXUP public_55ab1b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16b8
        call edi
        test al, al
        mov ecx, ebp
        je public_55ab3d
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [ebx+0xCC], eax
        jmp public_55ab5d
/*FIXUP public_55ab3d : nop
        push offset public_5e16ac @0x55ab3d*/
  FIXUP public_55ab3d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16ac
        call edi
        test al, al
        je public_55ab5d
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [ebx+0x32C], eax
        public_55ab5d : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_55a6f5
        public_55ab6d : nop
        mov al, byte ptr ds : [public_679af0]
        test al, al
        jne public_55ab7b
        call public_559db0
        public_55ab7b : nop
        xor esi, esi
        mov dword ptr ds : [ebx+0x338], esi
        mov ebp, dword ptr ds : [public_679a48]
        cmp ebp, esi
        jne public_55ab93
        mov dword ptr ss : [esp+0x40], esi
        jmp public_55abb0
        public_55ab93 : nop
        mov ecx, dword ptr ds : [public_679a4c]
        sub ecx, ebp
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x40], edx
        public_55abb0 : nop
        mov eax, dword ptr ss : [esp+0x40]
        xor edi, edi
        cmp eax, esi
        jle public_55ac04
        jmp public_55abc2
        public_55abbc : nop
        mov ebp, dword ptr ds : [public_679a48]
        public_55abc2 : nop
        mov eax, dword ptr ds : [esi+ebp+4]
        test eax, eax
        jne public_55abcf
        mov eax, dword ptr ds : [public_5c7078]
        public_55abcf : nop
        lea ecx, ds:[ebx+0xD0]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_55abf2
        mov eax, dword ptr ss : [esp+0x40]
        inc edi
        add esi, 0x24
        cmp edi, eax
        jl public_55abbc
        jmp public_55ac04
        public_55abf2 : nop
        mov edx, dword ptr ds : [public_679a48]
        lea ecx, ds:[edi+edi*8]
        lea eax, ds:[edx+ecx*4]
        mov dword ptr ds : [ebx+0x338], eax
        public_55ac04 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_55ac16
        mov edx, dword ptr ds : [ebx]
        lea eax, ds:[ebx+0x60]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        public_55ac16 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x55a6b0)
    }
}

#undef public_55a6f5
#undef public_55a722
#undef public_55a78e
#undef public_55a7fe
#undef public_55a80d
#undef public_55a821
#undef public_55a841
#undef public_55a867
#undef public_55a876
#undef public_55a941
#undef public_55a9b8
#undef public_55aa16
#undef public_55aa3f
#undef public_55aa41
#undef public_55aa5b
#undef public_55aa84
#undef public_55aa86
#undef public_55aaa0
#undef public_55aac9
#undef public_55aacb
#undef public_55aae2
#undef public_55ab11
#undef public_55ab1b
#undef public_55ab3d
#undef public_55ab5d
#undef public_55ab6d
#undef public_55ab7b
#undef public_55ab93
#undef public_55abb0
#undef public_55abbc
#undef public_55abc2
#undef public_55abcf
#undef public_55abf2
#undef public_55ac04
#undef public_55ac16
