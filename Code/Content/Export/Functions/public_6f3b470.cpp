#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b470);

#define public_6f3b492 _public_6f3b492
#define public_6f3b4bc _public_6f3b4bc
#define public_6f3b4d9 _public_6f3b4d9
#define public_6f3b4f6 _public_6f3b4f6
#define public_6f3b513 _public_6f3b513
#define public_6f3b530 _public_6f3b530
#define public_6f3b54d _public_6f3b54d
#define public_6f3b56a _public_6f3b56a
#define public_6f3b58d _public_6f3b58d
#define public_6f3b5aa _public_6f3b5aa
#define public_6f3b5c7 _public_6f3b5c7
#define public_6f3b5e4 _public_6f3b5e4
#define public_6f3b601 _public_6f3b601
#define public_6f3b61e _public_6f3b61e
#define public_6f3b638 _public_6f3b638
#define public_6f3b652 _public_6f3b652
#define public_6f3b66c _public_6f3b66c
#define public_6f3b6a8 _public_6f3b6a8
#define public_6f3b6ab _public_6f3b6ab
#define public_6f3b6be _public_6f3b6be

PROC_DECLARE(0x6f3b470, internal_6f3b470, public_6f3b470);
extern "C" NAKED register_t __cdecl internal_6f3b470()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b6be
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3b492 : nop
        push offset public_6fb445c @0x6f3b492*/
  FIXUP public_6f3b492 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b4bc
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b6ab
/*FIXUP public_6f3b4bc : nop
        push offset public_6fba2d8 @0x6f3b4bc*/
  FIXUP public_6f3b4bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba2d8
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b4d9
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+4]
        jmp public_6f3b6ab
/*FIXUP public_6f3b4d9 : nop
        push offset public_6fba2b4 @0x6f3b4d9*/
  FIXUP public_6f3b4d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba2b4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b4f6
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+8]
        jmp public_6f3b6ab
/*FIXUP public_6f3b4f6 : nop
        push offset public_6fba294 @0x6f3b4f6*/
  FIXUP public_6f3b4f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba294
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b513
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6f3b6ab
/*FIXUP public_6f3b513 : nop
        push offset public_6fba268 @0x6f3b513*/
  FIXUP public_6f3b513 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba268
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b530
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x10]
        jmp public_6f3b6ab
/*FIXUP public_6f3b530 : nop
        push offset public_6fba23c @0x6f3b530*/
  FIXUP public_6f3b530 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba23c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b54d
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x3C]
        jmp public_6f3b6ab
/*FIXUP public_6f3b54d : nop
        push offset public_6fba21c @0x6f3b54d*/
  FIXUP public_6f3b54d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba21c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b56a
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x14]
        jmp public_6f3b6ab
/*FIXUP public_6f3b56a : nop
        push offset public_6fba1fc @0x6f3b56a*/
  FIXUP public_6f3b56a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba1fc
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b58d
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x18]
        jmp public_6f3b6ab
/*FIXUP public_6f3b58d : nop
        push offset public_6fba1e4 @0x6f3b58d*/
  FIXUP public_6f3b58d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba1e4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b5aa
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_6f3b6ab
/*FIXUP public_6f3b5aa : nop
        push offset public_6fba1c8 @0x6f3b5aa*/
  FIXUP public_6f3b5aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba1c8
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b5c7
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x20]
        jmp public_6f3b6ab
/*FIXUP public_6f3b5c7 : nop
        push offset public_6fba1a8 @0x6f3b5c7*/
  FIXUP public_6f3b5c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba1a8
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b5e4
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x2C]
        jmp public_6f3b6ab
/*FIXUP public_6f3b5e4 : nop
        push offset public_6fba194 @0x6f3b5e4*/
  FIXUP public_6f3b5e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba194
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b601
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x24]
        jmp public_6f3b6ab
/*FIXUP public_6f3b601 : nop
        push offset public_6fba16c @0x6f3b601*/
  FIXUP public_6f3b601 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba16c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b61e
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x28]
        jmp public_6f3b6ab
/*FIXUP public_6f3b61e : nop
        push offset public_6fba150 @0x6f3b61e*/
  FIXUP public_6f3b61e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba150
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b638
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x30]
        jmp public_6f3b6ab
/*FIXUP public_6f3b638 : nop
        push offset public_6fba130 @0x6f3b638*/
  FIXUP public_6f3b638 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba130
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b652
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x34]
        jmp public_6f3b6ab
/*FIXUP public_6f3b652 : nop
        push offset public_6fba10c @0x6f3b652*/
  FIXUP public_6f3b652 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba10c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b66c
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x38]
        jmp public_6f3b6ab
/*FIXUP public_6f3b66c : nop
        push offset public_6fba100 @0x6f3b66c*/
  FIXUP public_6f3b66c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba100
        call edi
        test al, al
        je public_6f3b6ab
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        mov ebx, eax
/*FIXUP push offset public_6fba0f4 @0x6f3b681*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba0f4
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f3b6a8
/*FIXUP push offset public_6fba0ec @0x6f3b694*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba0ec
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        mov eax, 1
        public_6f3b6a8 : nop
        mov dword ptr ss : [ebp], eax
        public_6f3b6ab : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b492
        pop edi
        pop ebp
        pop ebx
        public_6f3b6be : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b470)
    }
}

#undef public_6f3b492
#undef public_6f3b4bc
#undef public_6f3b4d9
#undef public_6f3b4f6
#undef public_6f3b513
#undef public_6f3b530
#undef public_6f3b54d
#undef public_6f3b56a
#undef public_6f3b58d
#undef public_6f3b5aa
#undef public_6f3b5c7
#undef public_6f3b5e4
#undef public_6f3b601
#undef public_6f3b61e
#undef public_6f3b638
#undef public_6f3b652
#undef public_6f3b66c
#undef public_6f3b6a8
#undef public_6f3b6ab
#undef public_6f3b6be
