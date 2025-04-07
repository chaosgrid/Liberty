#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a690);

#define public_6f3a6c0 _public_6f3a6c0
#define public_6f3a6ed _public_6f3a6ed
#define public_6f3a709 _public_6f3a709
#define public_6f3a726 _public_6f3a726
#define public_6f3a743 _public_6f3a743
#define public_6f3a760 _public_6f3a760
#define public_6f3a780 _public_6f3a780
#define public_6f3a7bd _public_6f3a7bd
#define public_6f3a7dc _public_6f3a7dc
#define public_6f3a7fb _public_6f3a7fb
#define public_6f3a81e _public_6f3a81e
#define public_6f3a83b _public_6f3a83b
#define public_6f3a858 _public_6f3a858
#define public_6f3a875 _public_6f3a875
#define public_6f3a8af _public_6f3a8af
#define public_6f3a8cb _public_6f3a8cb
#define public_6f3a8e7 _public_6f3a8e7
#define public_6f3a901 _public_6f3a901
#define public_6f3a919 _public_6f3a919
#define public_6f3a92c _public_6f3a92c

PROC_DECLARE(0x6f3a690, internal_6f3a690, public_6f3a690);
extern "C" NAKED register_t __cdecl internal_6f3a690()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3a92c
        push ebx
        mov ebx, dword ptr ss : [esp+0x114]
        push ebp
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
        mov edi, edi
/*FIXUP public_6f3a6c0 : nop
        push offset public_6fb445c @0x6f3a6c0*/
  FIXUP public_6f3a6c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a6ed
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x124]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3a919
/*FIXUP public_6f3a6ed : nop
        push offset public_6fb9b20 @0x6f3a6ed*/
  FIXUP public_6f3a6ed : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b20
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a709
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3a919
/*FIXUP public_6f3a709 : nop
        push offset public_6fb9b04 @0x6f3a709*/
  FIXUP public_6f3a709 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9b04
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a726
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3a919
/*FIXUP public_6f3a726 : nop
        push offset public_6fb9ae4 @0x6f3a726*/
  FIXUP public_6f3a726 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9ae4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a743
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        jmp public_6f3a919
/*FIXUP public_6f3a743 : nop
        push offset public_6fb9ab4 @0x6f3a743*/
  FIXUP public_6f3a743 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9ab4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a760
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        jmp public_6f3a919
/*FIXUP public_6f3a760 : nop
        push offset public_6fb9a94 @0x6f3a760*/
  FIXUP public_6f3a760 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a94
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a81e
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[ecx]
        public_6f3a780 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3a780
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [public_6fb3294]
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97f4 @0x6f3a7a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97f4
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a7bd
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x14], eax
        jmp public_6f3a919
        public_6f3a7bd : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97ec @0x6f3a7c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97ec
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a7dc
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        jmp public_6f3a919
        public_6f3a7dc : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e8 @0x6f3a7e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e8
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a7fb
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x18], ecx
        jmp public_6f3a919
        public_6f3a7fb : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb97e0 @0x6f3a7ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb97e0
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a919
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x1C], eax
        jmp public_6f3a919
/*FIXUP public_6f3a81e : nop
        push offset public_6fb9a78 @0x6f3a81e*/
  FIXUP public_6f3a81e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a78
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a83b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x20]
        jmp public_6f3a919
/*FIXUP public_6f3a83b : nop
        push offset public_6fb9a5c @0x6f3a83b*/
  FIXUP public_6f3a83b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a5c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a858
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x24]
        jmp public_6f3a919
/*FIXUP public_6f3a858 : nop
        push offset public_6fb9a40 @0x6f3a858*/
  FIXUP public_6f3a858 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a40
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a8e7
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x14]
        public_6f3a875 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f3a875
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [public_6fb3294]
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9a34 @0x6f3a897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a34
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a8af
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x28], edx
        jmp public_6f3a919
        public_6f3a8af : nop
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb9a2c @0x6f3a8b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a2c
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a8cb
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x2C], ecx
        jmp public_6f3a919
        public_6f3a8cb : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb9a24 @0x6f3a8cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a24
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f3a919
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x30], eax
        jmp public_6f3a919
/*FIXUP public_6f3a8e7 : nop
        push offset public_6fb9a00 @0x6f3a8e7*/
  FIXUP public_6f3a8e7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9a00
        call edi
        test al, al
        mov ecx, esi
        je public_6f3a901
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x34]
        jmp public_6f3a919
/*FIXUP public_6f3a901 : nop
        push offset public_6fb99e0 @0x6f3a901*/
  FIXUP public_6f3a901 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb99e0
        call edi
        test al, al
        je public_6f3a919
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x38]
        public_6f3a919 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3a6c0
        pop edi
        pop ebp
        pop ebx
        public_6f3a92c : nop
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6f3a690)
    }
}

#undef public_6f3a6c0
#undef public_6f3a6ed
#undef public_6f3a709
#undef public_6f3a726
#undef public_6f3a743
#undef public_6f3a760
#undef public_6f3a780
#undef public_6f3a7bd
#undef public_6f3a7dc
#undef public_6f3a7fb
#undef public_6f3a81e
#undef public_6f3a83b
#undef public_6f3a858
#undef public_6f3a875
#undef public_6f3a8af
#undef public_6f3a8cb
#undef public_6f3a8e7
#undef public_6f3a901
#undef public_6f3a919
#undef public_6f3a92c
