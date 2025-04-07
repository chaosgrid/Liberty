#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a940);

#define public_6f3a970 _public_6f3a970
#define public_6f3a99d _public_6f3a99d
#define public_6f3a9c0 _public_6f3a9c0
#define public_6f3a9fd _public_6f3a9fd
#define public_6f3aa1c _public_6f3aa1c
#define public_6f3aa3f _public_6f3aa3f
#define public_6f3aa5c _public_6f3aa5c
#define public_6f3aa79 _public_6f3aa79
#define public_6f3aa96 _public_6f3aa96
#define public_6f3aab3 _public_6f3aab3
#define public_6f3aad0 _public_6f3aad0
#define public_6f3aaed _public_6f3aaed
#define public_6f3ab1f _public_6f3ab1f
#define public_6f3ab3b _public_6f3ab3b
#define public_6f3ab58 _public_6f3ab58
#define public_6f3ab75 _public_6f3ab75
#define public_6f3ab92 _public_6f3ab92
#define public_6f3abb0 _public_6f3abb0
#define public_6f3abed _public_6f3abed
#define public_6f3ac0c _public_6f3ac0c
#define public_6f3ac2b _public_6f3ac2b
#define public_6f3ac4e _public_6f3ac4e
#define public_6f3ac6b _public_6f3ac6b
#define public_6f3ac8e _public_6f3ac8e
#define public_6f3aca8 _public_6f3aca8
#define public_6f3acc8 _public_6f3acc8
#define public_6f3ace8 _public_6f3ace8
#define public_6f3ad02 _public_6f3ad02
#define public_6f3ad1a _public_6f3ad1a
#define public_6f3ad2d _public_6f3ad2d

PROC_DECLARE(0x6f3a940, internal_6f3a940, public_6f3a940);
extern "C" NAKED register_t __cdecl internal_6f3a940()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3ad2d
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ss : [esp+0x118]
        push edi
        mov edi, edi
/*FIXUP public_6f3a970 : nop
        push offset public_6fb445c @0x6f3a970*/
  FIXUP public_6f3a970 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a99d
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x124]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3ad1a
/*FIXUP public_6f3a99d : nop
        push offset public_6fb9d98 @0x6f3a99d*/
  FIXUP public_6f3a99d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9d98
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aa3f
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        lea ebx, ds:[ebx]
        public_6f3a9c0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3a9c0
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [public_6fb3294]
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9d8c @0x6f3a9e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9d8c
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a9fd
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], eax
        jmp public_6f3ad1a
        public_6f3a9fd : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97a4 @0x6f3aa01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97a4
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3aa1c
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], edx
        jmp public_6f3ad1a
        public_6f3aa1c : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb97bc @0x6f3aa20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97bc
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3ad1a
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0xC], ecx
        jmp public_6f3ad1a
/*FIXUP public_6f3aa3f : nop
        push offset public_6fb9d68 @0x6f3aa3f*/
  FIXUP public_6f3aa3f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9d68
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aa5c
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x10]
        jmp public_6f3ad1a
/*FIXUP public_6f3aa5c : nop
        push offset public_6fb9d34 @0x6f3aa5c*/
  FIXUP public_6f3aa5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9d34
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aa79
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x14]
        jmp public_6f3ad1a
/*FIXUP public_6f3aa79 : nop
        push offset public_6fb9d18 @0x6f3aa79*/
  FIXUP public_6f3aa79 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9d18
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aa96
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp]
        jmp public_6f3ad1a
/*FIXUP public_6f3aa96 : nop
        push offset public_6fb9cf4 @0x6f3aa96*/
  FIXUP public_6f3aa96 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9cf4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aab3
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x18]
        jmp public_6f3ad1a
/*FIXUP public_6f3aab3 : nop
        push offset public_6fb9cd4 @0x6f3aab3*/
  FIXUP public_6f3aab3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9cd4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aad0
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_6f3ad1a
/*FIXUP public_6f3aad0 : nop
        push offset public_6fb9cb4 @0x6f3aad0*/
  FIXUP public_6f3aad0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9cb4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aaed
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x20]
        jmp public_6f3ad1a
/*FIXUP public_6f3aaed : nop
        push offset public_6fb9c8c @0x6f3aaed*/
  FIXUP public_6f3aaed : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9c8c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ab3b
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3ab02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f3ab1f
        mov al, 1
        mov byte ptr ss : [ebp+0x24], al
        jmp public_6f3ad1a
/*FIXUP public_6f3ab1f : nop
        push offset public_6fb9840 @0x6f3ab1f*/
  FIXUP public_6f3ab1f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ss : [ebp+0x24], al
        jmp public_6f3ad1a
/*FIXUP public_6f3ab3b : nop
        push offset public_6fb9c78 @0x6f3ab3b*/
  FIXUP public_6f3ab3b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9c78
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ab58
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x54]
        jmp public_6f3ad1a
/*FIXUP public_6f3ab58 : nop
        push offset public_6fb9c5c @0x6f3ab58*/
  FIXUP public_6f3ab58 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9c5c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ab75
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x58]
        jmp public_6f3ad1a
/*FIXUP public_6f3ab75 : nop
        push offset public_6fb9c30 @0x6f3ab75*/
  FIXUP public_6f3ab75 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9c30
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ab92
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x5C]
        jmp public_6f3ad1a
/*FIXUP public_6f3ab92 : nop
        push offset public_6fb9c14 @0x6f3ab92*/
  FIXUP public_6f3ab92 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9c14
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ac4e
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        nop 
        public_6f3abb0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3abb0
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [public_6fb3294]
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97f4 @0x6f3abd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97f4
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3abed
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x2C], eax
        jmp public_6f3ad1a
        public_6f3abed : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97ec @0x6f3abf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97ec
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3ac0c
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x28], edx
        jmp public_6f3ad1a
        public_6f3ac0c : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e8 @0x6f3ac10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e8
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3ac2b
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x30], ecx
        jmp public_6f3ad1a
        public_6f3ac2b : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e0 @0x6f3ac2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e0
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3ad1a
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x34], eax
        jmp public_6f3ad1a
/*FIXUP public_6f3ac4e : nop
        push offset public_6fb9bf8 @0x6f3ac4e*/
  FIXUP public_6f3ac4e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9bf8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ac6b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x38]
        jmp public_6f3ad1a
/*FIXUP public_6f3ac6b : nop
        push offset public_6fb9be0 @0x6f3ac6b*/
  FIXUP public_6f3ac6b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9be0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ac8e
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x3C]
        jmp public_6f3ad1a
/*FIXUP public_6f3ac8e : nop
        push offset public_6fb9bb8 @0x6f3ac8e*/
  FIXUP public_6f3ac8e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9bb8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3aca8
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x40]
        jmp public_6f3ad1a
/*FIXUP public_6f3aca8 : nop
        push offset public_6fb9b94 @0x6f3aca8*/
  FIXUP public_6f3aca8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b94
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3acc8
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x44]
        jmp public_6f3ad1a
/*FIXUP public_6f3acc8 : nop
        push offset public_6fb9b7c @0x6f3acc8*/
  FIXUP public_6f3acc8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b7c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ace8
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x48]
        jmp public_6f3ad1a
/*FIXUP public_6f3ace8 : nop
        push offset public_6fb9b60 @0x6f3ace8*/
  FIXUP public_6f3ace8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b60
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3ad02
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x4C]
        jmp public_6f3ad1a
/*FIXUP public_6f3ad02 : nop
        push offset public_6fb9b34 @0x6f3ad02*/
  FIXUP public_6f3ad02 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b34
        call ebx
        test al, al
        je public_6f3ad1a
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x50]
        public_6f3ad1a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3a970
        pop edi
        pop ebp
        pop ebx
        public_6f3ad2d : nop
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6f3a940)
    }
}

#undef public_6f3a970
#undef public_6f3a99d
#undef public_6f3a9c0
#undef public_6f3a9fd
#undef public_6f3aa1c
#undef public_6f3aa3f
#undef public_6f3aa5c
#undef public_6f3aa79
#undef public_6f3aa96
#undef public_6f3aab3
#undef public_6f3aad0
#undef public_6f3aaed
#undef public_6f3ab1f
#undef public_6f3ab3b
#undef public_6f3ab58
#undef public_6f3ab75
#undef public_6f3ab92
#undef public_6f3abb0
#undef public_6f3abed
#undef public_6f3ac0c
#undef public_6f3ac2b
#undef public_6f3ac4e
#undef public_6f3ac6b
#undef public_6f3ac8e
#undef public_6f3aca8
#undef public_6f3acc8
#undef public_6f3ace8
#undef public_6f3ad02
#undef public_6f3ad1a
#undef public_6f3ad2d
