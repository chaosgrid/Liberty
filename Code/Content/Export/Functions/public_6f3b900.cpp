#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b900);

#define public_6f3b921 _public_6f3b921
#define public_6f3b94b _public_6f3b94b
#define public_6f3b967 _public_6f3b967
#define public_6f3b984 _public_6f3b984
#define public_6f3b9a1 _public_6f3b9a1
#define public_6f3b9be _public_6f3b9be
#define public_6f3b9db _public_6f3b9db
#define public_6f3b9f8 _public_6f3b9f8
#define public_6f3ba15 _public_6f3ba15
#define public_6f3ba32 _public_6f3ba32
#define public_6f3ba4f _public_6f3ba4f
#define public_6f3ba6c _public_6f3ba6c
#define public_6f3ba86 _public_6f3ba86
#define public_6f3baa0 _public_6f3baa0
#define public_6f3baba _public_6f3baba
#define public_6f3bad4 _public_6f3bad4
#define public_6f3baec _public_6f3baec
#define public_6f3bafe _public_6f3bafe

PROC_DECLARE(0x6f3b900, internal_6f3b900, public_6f3b900);
extern "C" NAKED register_t __cdecl internal_6f3b900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3bafe
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3b921 : nop
        push offset public_6fb445c @0x6f3b921*/
  FIXUP public_6f3b921 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b94b
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3baec
/*FIXUP public_6f3b94b : nop
        push offset public_6fba658 @0x6f3b94b*/
  FIXUP public_6f3b94b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba658
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b967
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3baec
/*FIXUP public_6f3b967 : nop
        push offset public_6fba630 @0x6f3b967*/
  FIXUP public_6f3b967 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba630
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b984
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3baec
/*FIXUP public_6f3b984 : nop
        push offset public_6fba60c @0x6f3b984*/
  FIXUP public_6f3b984 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba60c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b9a1
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        jmp public_6f3baec
/*FIXUP public_6f3b9a1 : nop
        push offset public_6fba5ec @0x6f3b9a1*/
  FIXUP public_6f3b9a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba5ec
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b9be
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        jmp public_6f3baec
/*FIXUP public_6f3b9be : nop
        push offset public_6fba5c4 @0x6f3b9be*/
  FIXUP public_6f3b9be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba5c4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b9db
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x10]
        jmp public_6f3baec
/*FIXUP public_6f3b9db : nop
        push offset public_6fba59c @0x6f3b9db*/
  FIXUP public_6f3b9db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba59c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b9f8
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x14]
        jmp public_6f3baec
/*FIXUP public_6f3b9f8 : nop
        push offset public_6fba580 @0x6f3b9f8*/
  FIXUP public_6f3b9f8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba580
        call edi
        test al, al
        mov ecx, esi
        je public_6f3ba15
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x18]
        jmp public_6f3baec
/*FIXUP public_6f3ba15 : nop
        push offset public_6fba564 @0x6f3ba15*/
  FIXUP public_6f3ba15 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba564
        call edi
        test al, al
        mov ecx, esi
        je public_6f3ba32
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x1C]
        jmp public_6f3baec
/*FIXUP public_6f3ba32 : nop
        push offset public_6fba540 @0x6f3ba32*/
  FIXUP public_6f3ba32 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba540
        call edi
        test al, al
        mov ecx, esi
        je public_6f3ba4f
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x20]
        jmp public_6f3baec
/*FIXUP public_6f3ba4f : nop
        push offset public_6fba520 @0x6f3ba4f*/
  FIXUP public_6f3ba4f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba520
        call edi
        test al, al
        mov ecx, esi
        je public_6f3ba6c
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x24]
        jmp public_6f3baec
/*FIXUP public_6f3ba6c : nop
        push offset public_6fba4f8 @0x6f3ba6c*/
  FIXUP public_6f3ba6c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba4f8
        call edi
        test al, al
        mov ecx, esi
        je public_6f3ba86
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x28]
        jmp public_6f3baec
/*FIXUP public_6f3ba86 : nop
        push offset public_6fba4d4 @0x6f3ba86*/
  FIXUP public_6f3ba86 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba4d4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3baa0
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x34]
        jmp public_6f3baec
/*FIXUP public_6f3baa0 : nop
        push offset public_6fba4b4 @0x6f3baa0*/
  FIXUP public_6f3baa0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba4b4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3baba
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x38]
        jmp public_6f3baec
/*FIXUP public_6f3baba : nop
        push offset public_6fba48c @0x6f3baba*/
  FIXUP public_6f3baba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba48c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3bad4
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x2C]
        jmp public_6f3baec
/*FIXUP public_6f3bad4 : nop
        push offset public_6fba468 @0x6f3bad4*/
  FIXUP public_6f3bad4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba468
        call edi
        test al, al
        je public_6f3baec
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x30]
        public_6f3baec : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b921
        pop edi
        pop ebx
        public_6f3bafe : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b900)
    }
}

#undef public_6f3b921
#undef public_6f3b94b
#undef public_6f3b967
#undef public_6f3b984
#undef public_6f3b9a1
#undef public_6f3b9be
#undef public_6f3b9db
#undef public_6f3b9f8
#undef public_6f3ba15
#undef public_6f3ba32
#undef public_6f3ba4f
#undef public_6f3ba6c
#undef public_6f3ba86
#undef public_6f3baa0
#undef public_6f3baba
#undef public_6f3bad4
#undef public_6f3baec
#undef public_6f3bafe
