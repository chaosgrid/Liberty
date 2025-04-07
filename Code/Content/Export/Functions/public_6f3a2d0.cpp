#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a2d0);

#define public_6f3a300 _public_6f3a300
#define public_6f3a32d _public_6f3a32d
#define public_6f3a34a _public_6f3a34a
#define public_6f3a36d _public_6f3a36d
#define public_6f3a38a _public_6f3a38a
#define public_6f3a3ad _public_6f3a3ad
#define public_6f3a3d0 _public_6f3a3d0
#define public_6f3a3ed _public_6f3a3ed
#define public_6f3a40a _public_6f3a40a
#define public_6f3a427 _public_6f3a427
#define public_6f3a444 _public_6f3a444
#define public_6f3a461 _public_6f3a461
#define public_6f3a47e _public_6f3a47e
#define public_6f3a49b _public_6f3a49b
#define public_6f3a4cd _public_6f3a4cd
#define public_6f3a4e9 _public_6f3a4e9
#define public_6f3a506 _public_6f3a506
#define public_6f3a523 _public_6f3a523
#define public_6f3a560 _public_6f3a560
#define public_6f3a57f _public_6f3a57f
#define public_6f3a59e _public_6f3a59e
#define public_6f3a5c1 _public_6f3a5c1
#define public_6f3a5e0 _public_6f3a5e0
#define public_6f3a61a _public_6f3a61a
#define public_6f3a636 _public_6f3a636
#define public_6f3a652 _public_6f3a652
#define public_6f3a66c _public_6f3a66c
#define public_6f3a67f _public_6f3a67f

PROC_DECLARE(0x6f3a2d0, internal_6f3a2d0, public_6f3a2d0);
extern "C" NAKED register_t __cdecl internal_6f3a2d0()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3a67f
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ss : [esp+0x118]
        push edi
        mov edi, edi
/*FIXUP public_6f3a300 : nop
        push offset public_6fb445c @0x6f3a300*/
  FIXUP public_6f3a300 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a32d
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x124]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3a66c
/*FIXUP public_6f3a32d : nop
        push offset public_6fb99c8 @0x6f3a32d*/
  FIXUP public_6f3a32d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb99c8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a34a
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp]
        jmp public_6f3a66c
/*FIXUP public_6f3a34a : nop
        push offset public_6fb99b0 @0x6f3a34a*/
  FIXUP public_6f3a34a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb99b0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a36d
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x14]
        jmp public_6f3a66c
/*FIXUP public_6f3a36d : nop
        push offset public_6fb9988 @0x6f3a36d*/
  FIXUP public_6f3a36d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9988
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a38a
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x18]
        jmp public_6f3a66c
/*FIXUP public_6f3a38a : nop
        push offset public_6fb9964 @0x6f3a38a*/
  FIXUP public_6f3a38a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9964
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a3ad
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_6f3a66c
/*FIXUP public_6f3a3ad : nop
        push offset public_6fb994c @0x6f3a3ad*/
  FIXUP public_6f3a3ad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb994c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a3d0
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x20]
        jmp public_6f3a66c
/*FIXUP public_6f3a3d0 : nop
        push offset public_6fb9930 @0x6f3a3d0*/
  FIXUP public_6f3a3d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9930
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a3ed
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x24]
        jmp public_6f3a66c
/*FIXUP public_6f3a3ed : nop
        push offset public_6fb9904 @0x6f3a3ed*/
  FIXUP public_6f3a3ed : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9904
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a40a
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x28]
        jmp public_6f3a66c
/*FIXUP public_6f3a40a : nop
        push offset public_6fb98ec @0x6f3a40a*/
  FIXUP public_6f3a40a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb98ec
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a427
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x2C]
        jmp public_6f3a66c
/*FIXUP public_6f3a427 : nop
        push offset public_6fb98d8 @0x6f3a427*/
  FIXUP public_6f3a427 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb98d8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a444
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x30]
        jmp public_6f3a66c
/*FIXUP public_6f3a444 : nop
        push offset public_6fb98bc @0x6f3a444*/
  FIXUP public_6f3a444 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb98bc
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a461
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x34]
        jmp public_6f3a66c
/*FIXUP public_6f3a461 : nop
        push offset public_6fb98a0 @0x6f3a461*/
  FIXUP public_6f3a461 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb98a0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a47e
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x38]
        jmp public_6f3a66c
/*FIXUP public_6f3a47e : nop
        push offset public_6fb987c @0x6f3a47e*/
  FIXUP public_6f3a47e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb987c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a49b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x40]
        jmp public_6f3a66c
/*FIXUP public_6f3a49b : nop
        push offset public_6fb9850 @0x6f3a49b*/
  FIXUP public_6f3a49b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9850
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a4e9
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3a4b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f3a4cd
        mov al, 1
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6f3a66c
/*FIXUP public_6f3a4cd : nop
        push offset public_6fb9840 @0x6f3a4cd*/
  FIXUP public_6f3a4cd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6f3a66c
/*FIXUP public_6f3a4e9 : nop
        push offset public_6fb981c @0x6f3a4e9*/
  FIXUP public_6f3a4e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb981c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a506
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x3C]
        jmp public_6f3a66c
/*FIXUP public_6f3a506 : nop
        push offset public_6fb97fc @0x6f3a506*/
  FIXUP public_6f3a506 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97fc
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3a5c1
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        public_6f3a523 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3a523
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [public_6fb3294]
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97f4 @0x6f3a545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97f4
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a560
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x4C], eax
        jmp public_6f3a66c
        public_6f3a560 : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97ec @0x6f3a564*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97ec
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a57f
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x48], edx
        jmp public_6f3a66c
        public_6f3a57f : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e8 @0x6f3a583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e8
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a59e
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x50], ecx
        jmp public_6f3a66c
        public_6f3a59e : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e0 @0x6f3a5a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e0
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a66c
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x54], eax
        jmp public_6f3a66c
/*FIXUP public_6f3a5c1 : nop
        push offset public_6fb97c4 @0x6f3a5c1*/
  FIXUP public_6f3a5c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97c4
        call ebx
        test al, al
        je public_6f3a66c
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        mov edi, edi
        public_6f3a5e0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3a5e0
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [public_6fb3294]
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97bc @0x6f3a602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97bc
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a61a
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f3a66c
        public_6f3a61a : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb97ac @0x6f3a61e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97ac
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a636
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6f3a66c
        public_6f3a636 : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97a4 @0x6f3a63a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97a4
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a652
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_6f3a66c
        public_6f3a652 : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9798 @0x6f3a656*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9798
        push ecx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f3a66c
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        public_6f3a66c : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3a300
        pop edi
        pop ebp
        pop ebx
        public_6f3a67f : nop
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6f3a2d0)
    }
}

#undef public_6f3a300
#undef public_6f3a32d
#undef public_6f3a34a
#undef public_6f3a36d
#undef public_6f3a38a
#undef public_6f3a3ad
#undef public_6f3a3d0
#undef public_6f3a3ed
#undef public_6f3a40a
#undef public_6f3a427
#undef public_6f3a444
#undef public_6f3a461
#undef public_6f3a47e
#undef public_6f3a49b
#undef public_6f3a4cd
#undef public_6f3a4e9
#undef public_6f3a506
#undef public_6f3a523
#undef public_6f3a560
#undef public_6f3a57f
#undef public_6f3a59e
#undef public_6f3a5c1
#undef public_6f3a5e0
#undef public_6f3a61a
#undef public_6f3a636
#undef public_6f3a652
#undef public_6f3a66c
#undef public_6f3a67f
