#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_40e300);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_42dd20);
CLANG_FORWARD_PROC_SYMBOL(public_42e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd500);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_40e34c _public_40e34c
#define public_40e3af _public_40e3af
#define public_40e3ed _public_40e3ed
#define public_40e410 _public_40e410
#define public_40e43e _public_40e43e
#define public_40e477 _public_40e477
#define public_40e47a _public_40e47a
#define public_40e496 _public_40e496
#define public_40e49b _public_40e49b
#define public_40e4ba _public_40e4ba
#define public_40e4ec _public_40e4ec
#define public_40e53d _public_40e53d
#define public_40e595 _public_40e595
#define public_40e5c2 _public_40e5c2
#define public_40e5dd _public_40e5dd
#define public_40e606 _public_40e606
#define public_40e62c _public_40e62c
#define public_40e652 _public_40e652
#define public_40e678 _public_40e678
#define public_40e6b9 _public_40e6b9
#define public_40e6c7 _public_40e6c7

PROC_DECLARE(0x40e300, internal_40e300, public_40e300);
extern "C" NAKED register_t __cdecl internal_40e300()
{
    __asm
    {
        mov eax, 0x2004
        call public_5b7e90
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2010]
        push edi
        mov edi, dword ptr ds : [public_5c6cf4]
        mov ebx, ecx
/*FIXUP push offset public_5c866c @0x40e31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_40e34c
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e34c : nop
        push offset public_5c8660 @0x40e34c*/
  FIXUP public_40e34c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8660
        call edi
        test al, al
        mov ecx, esi
        je public_40e43e
        call dword ptr ds : [public_5c6698]
        push eax
        call public_4fd500
        add esp, 4
        cmp eax, 0x2F
        mov dword ptr ds : [ebx], eax
        jne public_40e3af
/*FIXUP push offset public_5c865c @0x40e373*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
/*FIXUP push offset public_5c8648 @0x40e380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8648
        push 0x3A
/*FIXUP push offset public_5c84cc @0x40e387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x40e391*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
        public_40e3af : nop
        push eax
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_40e410
        fld dword ptr ds : [eax+0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_40e3ed
        mov al, byte ptr ds : [ebx+0x50]
        mov ecx, 1
        mov dl, al
        xor dl, cl
        and dl, cl
        pop edi
        xor dl, al
        pop esi
        mov byte ptr ds : [ebx+0x50], dl
        mov al, cl
        pop ebx
        add esp, 0x2004
        ret 4
        public_40e3ed : nop
        mov al, byte ptr ds : [ebx+0x50]
        xor ecx, ecx
        mov dl, al
        xor dl, cl
        and dl, 1
        pop edi
        xor dl, al
        pop esi
        mov byte ptr ds : [ebx+0x50], dl
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
        lea esp, ss:[esp]
        public_40e410 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x47
/*FIXUP push offset public_5c84cc @0x40e41b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov eax, 0x100001
/*FIXUP push offset public_5c85ec @0x40e425*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c85ec
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e43e : nop
        push offset public_5c85e0 @0x40e43e*/
  FIXUP public_40e43e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c85e0
        call edi
        test al, al
        mov ecx, esi
        je public_40e4ba
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_42dd20
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [ebx+8], eax
        je public_40e477
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0xC], ecx
        public_40e477 : nop
        mov eax, dword ptr ds : [ebx+8]
        public_40e47a : nop
        test eax, eax
        jne public_40e6b9
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        lea ecx, ds:[ebx+4]
        call dword ptr ds : [public_5c6044]
        push eax
/*FIXUP push offset public_5c85b4 @0x40e491*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c85b4
        public_40e496 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        public_40e49b : nop
        call public_402180
        add esp, 0x10
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e4ba : nop
        push offset public_5c85a8 @0x40e4ba*/
  FIXUP public_40e4ba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c85a8
        call edi
        test al, al
        mov ecx, esi
        je public_40e4ec
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_42dd20
        add esp, 0xC
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_40e47a
/*FIXUP public_40e4ec : nop
        push offset public_5c859c @0x40e4ec*/
  FIXUP public_40e4ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c859c
        call edi
        test al, al
        mov ecx, esi
        je public_40e53d
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_42e9e0
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [ebx+0x14], eax
        jne public_40e6b9
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        lea ecx, ds:[ebx+4]
        call dword ptr ds : [public_5c6044]
        push eax
/*FIXUP push offset public_5c8574 @0x40e533*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8574
        jmp public_40e496
/*FIXUP public_40e53d : nop
        push offset public_5c8568 @0x40e53d*/
  FIXUP public_40e53d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8568
        call edi
        test al, al
        mov ecx, esi
        je public_40e595
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        call public_42ae40
        add esp, 8
        test eax, eax
        mov dword ptr ds : [ebx+0x18], eax
        jne public_40e6b9
        mov edi, dword ptr ds : [public_5c6044]
        lea ecx, ss:[esp+0xC]
        call edi
        push eax
        lea ecx, ds:[ebx+4]
        call edi
        push eax
/*FIXUP push offset public_5c8540 @0x40e586*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8540
        lea edx, ss:[esp+0x1C]
        push edx
        jmp public_40e49b
/*FIXUP public_40e595 : nop
        push offset public_5c8534 @0x40e595*/
  FIXUP public_40e595 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8534
        call edi
        test al, al
        mov ecx, esi
        je public_40e606
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        test esi, esi
        jne public_40e5c2
        pop edi
        mov dword ptr ds : [ebx+0x1C], eax
        mov byte ptr ds : [ebx+0x20], al
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
        public_40e5c2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+0x20]
        jb public_40e5dd
        mov eax, 0x1F
        public_40e5dd : nop
        push ebp
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        pop ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ds : [ebx+0x1C], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e606 : nop
        push offset public_5c8524 @0x40e606*/
  FIXUP public_40e606 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8524
        call edi
        test al, al
        mov ecx, esi
        je public_40e62c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x40]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e62c : nop
        push offset public_5c8514 @0x40e62c*/
  FIXUP public_40e62c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8514
        call edi
        test al, al
        mov ecx, esi
        je public_40e652
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x44]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e652 : nop
        push offset public_5c8508 @0x40e652*/
  FIXUP public_40e652 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8508
        call edi
        test al, al
        mov ecx, esi
        je public_40e678
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x48]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
/*FIXUP public_40e678 : nop
        push offset public_5c84fc @0x40e678*/
  FIXUP public_40e678 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84fc
        call edi
        test al, al
        je public_40e6c7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        mov ecx, esi
        mov byte ptr ds : [ebx+0x4C], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        mov ecx, esi
        mov byte ptr ds : [ebx+0x4D], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [ebx+0x4E], al
        public_40e6b9 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2004
        ret 4
        public_40e6c7 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x2004
        ret 4
        UNREACHABLE_TRAP(0x40e300)
    }
}

#undef public_40e34c
#undef public_40e3af
#undef public_40e3ed
#undef public_40e410
#undef public_40e43e
#undef public_40e477
#undef public_40e47a
#undef public_40e496
#undef public_40e49b
#undef public_40e4ba
#undef public_40e4ec
#undef public_40e53d
#undef public_40e595
#undef public_40e5c2
#undef public_40e5dd
#undef public_40e606
#undef public_40e62c
#undef public_40e652
#undef public_40e678
#undef public_40e6b9
#undef public_40e6c7
