#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c190);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cad0);

#define public_6f3c1c0 _public_6f3c1c0
#define public_6f3c1e7 _public_6f3c1e7
#define public_6f3c234 _public_6f3c234
#define public_6f3c25a _public_6f3c25a
#define public_6f3c274 _public_6f3c274
#define public_6f3c28a _public_6f3c28a
#define public_6f3c2a0 _public_6f3c2a0
#define public_6f3c2b5 _public_6f3c2b5
#define public_6f3c2ec _public_6f3c2ec
#define public_6f3c30f _public_6f3c30f
#define public_6f3c332 _public_6f3c332
#define public_6f3c355 _public_6f3c355
#define public_6f3c379 _public_6f3c379
#define public_6f3c3b0 _public_6f3c3b0
#define public_6f3c3d3 _public_6f3c3d3
#define public_6f3c3f6 _public_6f3c3f6
#define public_6f3c419 _public_6f3c419
#define public_6f3c43d _public_6f3c43d
#define public_6f3c465 _public_6f3c465
#define public_6f3c49a _public_6f3c49a
#define public_6f3c4b9 _public_6f3c4b9
#define public_6f3c4ee _public_6f3c4ee
#define public_6f3c50d _public_6f3c50d
#define public_6f3c541 _public_6f3c541
#define public_6f3c561 _public_6f3c561
#define public_6f3c581 _public_6f3c581
#define public_6f3c5a1 _public_6f3c5a1
#define public_6f3c5c2 _public_6f3c5c2
#define public_6f3c5f6 _public_6f3c5f6
#define public_6f3c616 _public_6f3c616
#define public_6f3c636 _public_6f3c636
#define public_6f3c656 _public_6f3c656
#define public_6f3c677 _public_6f3c677
#define public_6f3c6ac _public_6f3c6ac
#define public_6f3c6cb _public_6f3c6cb
#define public_6f3c6f3 _public_6f3c6f3
#define public_6f3c750 _public_6f3c750
#define public_6f3c770 _public_6f3c770
#define public_6f3c781 _public_6f3c781
#define public_6f3c7a9 _public_6f3c7a9
#define public_6f3c7d0 _public_6f3c7d0
#define public_6f3c7eb _public_6f3c7eb
#define public_6f3c817 _public_6f3c817
#define public_6f3c83f _public_6f3c83f
#define public_6f3c876 _public_6f3c876
#define public_6f3c899 _public_6f3c899
#define public_6f3c8bc _public_6f3c8bc
#define public_6f3c8dd _public_6f3c8dd
#define public_6f3c905 _public_6f3c905
#define public_6f3c915 _public_6f3c915
#define public_6f3c928 _public_6f3c928
#define public_6f3c94b _public_6f3c94b
#define public_6f3c94e _public_6f3c94e
#define public_6f3c961 _public_6f3c961

PROC_DECLARE(0x6f3c190, internal_6f3c190, public_6f3c190);
extern "C" NAKED register_t __cdecl internal_6f3c190()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        mov dword ptr ss : [esp+8], 0
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3c961
        push ebx
        mov ebx, dword ptr ds : [public_6fb3294]
        push ebp
        push edi
        mov edi, dword ptr ds : [public_6fb3054]
        nop 
/*FIXUP public_6f3c1c0 : nop
        push offset public_6fb445c @0x6f3c1c0*/
  FIXUP public_6f3c1c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c1e7
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx], eax
        jmp public_6f3c94b
/*FIXUP public_6f3c1e7 : nop
        push offset public_6fbad68 @0x6f3c1e7*/
  FIXUP public_6f3c1e7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad68
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c2b5
        call edi
        mov edx, dword ptr ss : [esp+0x28]
        mov ebp, eax
/*FIXUP push offset public_6fbad60 @0x6f3c204*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad60
        push ebp
        mov dword ptr ds : [edx+0xD8], 0
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6f3c234
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0xD8], 7
        jmp public_6f3c94e
/*FIXUP public_6f3c234 : nop
        push offset public_6fbad58 @0x6f3c234*/
  FIXUP public_6f3c234 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad58
        push ebp
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6f3c25a
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0xD8], 0
        jmp public_6f3c94e
/*FIXUP public_6f3c25a : nop
        push offset public_6fbad48 @0x6f3c25a*/
  FIXUP public_6f3c25a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad48
        push ebp
        xor edi, edi
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6f3c274
        mov edi, 1
/*FIXUP public_6f3c274 : nop
        push offset public_6fbad38 @0x6f3c274*/
  FIXUP public_6f3c274 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad38
        push ebp
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6f3c28a
        or edi, 2
/*FIXUP public_6f3c28a : nop
        push offset public_6fbad2c @0x6f3c28a*/
  FIXUP public_6f3c28a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad2c
        push ebp
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6f3c2a0
        or edi, 4
        public_6f3c2a0 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+0xD8], edi
        mov edi, dword ptr ds : [public_6fb3054]
        jmp public_6f3c94e
/*FIXUP public_6f3c2b5 : nop
        push offset public_6fbad18 @0x6f3c2b5*/
  FIXUP public_6f3c2b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad18
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c379
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fbad10 @0x6f3c2ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad10
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c2ec
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0xDC], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c2ec : nop
        push offset public_6fbad08 @0x6f3c2ec*/
  FIXUP public_6f3c2ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad08
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c30f
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov dword ptr ds : [ecx+0xDC], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c30f : nop
        push offset public_6fbad00 @0x6f3c30f*/
  FIXUP public_6f3c30f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad00
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c332
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 2
        mov dword ptr ds : [ecx+0xDC], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c332 : nop
        push offset public_6fbacf8 @0x6f3c332*/
  FIXUP public_6f3c332 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf8
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c355
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 3
        mov dword ptr ds : [ecx+0xDC], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c355 : nop
        push offset public_6fbacf0 @0x6f3c355*/
  FIXUP public_6f3c355 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf0
        push ebp
        call ebx
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 4
        mov dword ptr ds : [ecx+0xDC], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c379 : nop
        push offset public_6fbacd8 @0x6f3c379*/
  FIXUP public_6f3c379 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacd8
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c43d
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fbad10 @0x6f3c392*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad10
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c3b0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+0x124], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c3b0 : nop
        push offset public_6fbad08 @0x6f3c3b0*/
  FIXUP public_6f3c3b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad08
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c3d3
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov dword ptr ds : [edx+0x124], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c3d3 : nop
        push offset public_6fbad00 @0x6f3c3d3*/
  FIXUP public_6f3c3d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad00
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c3f6
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 2
        mov dword ptr ds : [edx+0x124], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c3f6 : nop
        push offset public_6fbacf8 @0x6f3c3f6*/
  FIXUP public_6f3c3f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf8
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c419
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 3
        mov dword ptr ds : [edx+0x124], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c419 : nop
        push offset public_6fbacf0 @0x6f3c419*/
  FIXUP public_6f3c419 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf0
        push ebp
        call ebx
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 4
        mov dword ptr ds : [edx+0x124], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c43d : nop
        push offset public_6fbacb8 @0x6f3c43d*/
  FIXUP public_6f3c43d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacb8
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c465
        push 0
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+0x128]
        jmp public_6f3c94e
/*FIXUP public_6f3c465 : nop
        push offset public_6fbac98 @0x6f3c465*/
  FIXUP public_6f3c465 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac98
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c4b9
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fb9848 @0x6f3c47a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c49a
        mov ecx, dword ptr ss : [esp+0x28]
        mov al, 1
        mov byte ptr ds : [ecx+0x12C], al
        jmp public_6f3c94e
/*FIXUP public_6f3c49a : nop
        push offset public_6fb9840 @0x6f3c49a*/
  FIXUP public_6f3c49a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push ebp
        call ebx
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ds : [ecx+0x12C], al
        jmp public_6f3c94e
/*FIXUP public_6f3c4b9 : nop
        push offset public_6fbac80 @0x6f3c4b9*/
  FIXUP public_6f3c4b9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac80
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c50d
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fb9848 @0x6f3c4ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c4ee
        mov edx, dword ptr ss : [esp+0x28]
        mov al, 1
        mov byte ptr ds : [edx+0x12D], al
        jmp public_6f3c94e
/*FIXUP public_6f3c4ee : nop
        push offset public_6fb9840 @0x6f3c4ee*/
  FIXUP public_6f3c4ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push ebp
        call ebx
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ds : [edx+0x12D], al
        jmp public_6f3c94e
/*FIXUP public_6f3c50d : nop
        push offset public_6fbac64 @0x6f3c50d*/
  FIXUP public_6f3c50d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac64
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c5c2
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fbad10 @0x6f3c526*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad10
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c541
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c541 : nop
        push offset public_6fbad08 @0x6f3c541*/
  FIXUP public_6f3c541 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad08
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c561
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c561 : nop
        push offset public_6fbad00 @0x6f3c561*/
  FIXUP public_6f3c561 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad00
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c581
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 2
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c581 : nop
        push offset public_6fbacf8 @0x6f3c581*/
  FIXUP public_6f3c581 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf8
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c5a1
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 3
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c5a1 : nop
        push offset public_6fbacf0 @0x6f3c5a1*/
  FIXUP public_6f3c5a1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf0
        push ebp
        call ebx
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 4
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c5c2 : nop
        push offset public_6fbac48 @0x6f3c5c2*/
  FIXUP public_6f3c5c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac48
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c677
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fbad10 @0x6f3c5db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad10
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c5f6
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c5f6 : nop
        push offset public_6fbad08 @0x6f3c5f6*/
  FIXUP public_6f3c5f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad08
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c616
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov dword ptr ds : [edx+8], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c616 : nop
        push offset public_6fbad00 @0x6f3c616*/
  FIXUP public_6f3c616 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbad00
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c636
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 2
        mov dword ptr ds : [edx+8], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c636 : nop
        push offset public_6fbacf8 @0x6f3c636*/
  FIXUP public_6f3c636 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf8
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c656
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 3
        mov dword ptr ds : [edx+8], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c656 : nop
        push offset public_6fbacf0 @0x6f3c656*/
  FIXUP public_6f3c656 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbacf0
        push ebp
        call ebx
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 4
        mov dword ptr ds : [edx+8], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c677 : nop
        push offset public_6fbac30 @0x6f3c677*/
  FIXUP public_6f3c677 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac30
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c6cb
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fb9848 @0x6f3c68c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c6ac
        mov ecx, dword ptr ss : [esp+0x28]
        mov al, 1
        mov byte ptr ds : [ecx+0xCC], al
        jmp public_6f3c94e
/*FIXUP public_6f3c6ac : nop
        push offset public_6fb9840 @0x6f3c6ac*/
  FIXUP public_6f3c6ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push ebp
        call ebx
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ds : [ecx+0xCC], al
        jmp public_6f3c94e
/*FIXUP public_6f3c6cb : nop
        push offset public_6fbac10 @0x6f3c6cb*/
  FIXUP public_6f3c6cb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbac10
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c6f3
        push 0
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx+0xD0]
        jmp public_6f3c94e
/*FIXUP public_6f3c6f3 : nop
        push offset public_6fbabf8 @0x6f3c6f3*/
  FIXUP public_6f3c6f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbabf8
        call dword ptr ds : [public_6fb3014]
        test al, al
        jne public_6f3c94e
/*FIXUP push offset public_6fbabe8 @0x6f3c706*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbabe8
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c7eb
        call edi
        mov ecx, dword ptr ds : [public_6fbabe0]
        mov dl, byte ptr ds : [public_6fbabe4]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x24], dl
        call dword ptr ds : [public_6fb3368]
        add esp, 8
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3c7d0
/*FIXUP public_6f3c750 : nop
        push offset public_6fbabd4 @0x6f3c750*/
  FIXUP public_6f3c750 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbabd4
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c770
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ss:[ebp+ebp*2]
        mov dword ptr ds : [eax+edx*4+0x10], 0xB
        inc ebp
        public_6f3c770 : nop
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[ebp+ebp*2]
        mov edi, offset public_6fb9608
        lea esi, ds:[edx+ecx*4+0x14]
        public_6f3c781 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi-0x20]
        push eax
        push ecx
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c7a9
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi-4], edx
        mov dword ptr ds : [esi], 0x459C4000
        mov dword ptr ds : [esi+4], 0xF
        inc ebp
        add esi, 0xC
        public_6f3c7a9 : nop
        add edi, 0x24
        cmp edi, offset public_6fb97b8
        jl public_6f3c781
        lea eax, ss:[esp+0x18]
        push eax
        push 0
        call dword ptr ds : [public_6fb3368]
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f3c750
        mov esi, dword ptr ss : [esp+0x24]
        public_6f3c7d0 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [public_6fb3054]
        lea ecx, ss:[ebp+ebp*2]
        mov dword ptr ds : [edx+ecx*4+0x10], 0xC
        jmp public_6f3c94e
/*FIXUP public_6f3c7eb : nop
        push offset public_6fbabc0 @0x6f3c7eb*/
  FIXUP public_6f3c7eb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbabc0
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f3c817
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        push eax
        call public_6f3c9b0
        add esp, 0xC
        inc ebp
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6f3c94e
/*FIXUP public_6f3c817 : nop
        push offset public_6fbaba8 @0x6f3c817*/
  FIXUP public_6f3c817 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaba8
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c83f
        call edi
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        call public_6f3cad0
        add esp, 8
        jmp public_6f3c94e
/*FIXUP public_6f3c83f : nop
        push offset public_6fbab98 @0x6f3c83f*/
  FIXUP public_6f3c83f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab98
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c8dd
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fbab90 @0x6f3c858*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab90
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c876
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+0xD4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c876 : nop
        push offset public_6fbab84 @0x6f3c876*/
  FIXUP public_6f3c876 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab84
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c899
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov dword ptr ds : [edx+0xD4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c899 : nop
        push offset public_6fbab74 @0x6f3c899*/
  FIXUP public_6f3c899 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab74
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c8bc
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 2
        mov dword ptr ds : [edx+0xD4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c8bc : nop
        push offset public_6fbab6c @0x6f3c8bc*/
  FIXUP public_6f3c8bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab6c
        push ebp
        call ebx
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 3
        mov dword ptr ds : [edx+0xD4], eax
        jmp public_6f3c94e
/*FIXUP public_6f3c8dd : nop
        push offset public_6fbab54 @0x6f3c8dd*/
  FIXUP public_6f3c8dd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab54
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f3c928
        call edi
        mov ebp, eax
/*FIXUP push offset public_6fb9848 @0x6f3c8f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f3c905
        mov al, 1
        jmp public_6f3c915
/*FIXUP public_6f3c905 : nop
        push offset public_6fb9840 @0x6f3c905*/
  FIXUP public_6f3c905 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        setne al
        public_6f3c915 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx+0x134], al
        mov byte ptr ds : [ecx+0x135], 1
        jmp public_6f3c94e
/*FIXUP public_6f3c928 : nop
        push offset public_6fbab3c @0x6f3c928*/
  FIXUP public_6f3c928 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbab3c
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f3c94e
        mov ecx, esi
        call edi
        push eax
        call public_6f3c970
        mov ecx, dword ptr ss : [esp+0x2C]
        mov byte ptr ds : [ecx+0x12E], al
        public_6f3c94b : nop
        add esp, 4
        public_6f3c94e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3c1c0
        pop edi
        pop ebp
        pop ebx
        public_6f3c961 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f3c190)
    }
}

#undef public_6f3c1c0
#undef public_6f3c1e7
#undef public_6f3c234
#undef public_6f3c25a
#undef public_6f3c274
#undef public_6f3c28a
#undef public_6f3c2a0
#undef public_6f3c2b5
#undef public_6f3c2ec
#undef public_6f3c30f
#undef public_6f3c332
#undef public_6f3c355
#undef public_6f3c379
#undef public_6f3c3b0
#undef public_6f3c3d3
#undef public_6f3c3f6
#undef public_6f3c419
#undef public_6f3c43d
#undef public_6f3c465
#undef public_6f3c49a
#undef public_6f3c4b9
#undef public_6f3c4ee
#undef public_6f3c50d
#undef public_6f3c541
#undef public_6f3c561
#undef public_6f3c581
#undef public_6f3c5a1
#undef public_6f3c5c2
#undef public_6f3c5f6
#undef public_6f3c616
#undef public_6f3c636
#undef public_6f3c656
#undef public_6f3c677
#undef public_6f3c6ac
#undef public_6f3c6cb
#undef public_6f3c6f3
#undef public_6f3c750
#undef public_6f3c770
#undef public_6f3c781
#undef public_6f3c7a9
#undef public_6f3c7d0
#undef public_6f3c7eb
#undef public_6f3c817
#undef public_6f3c83f
#undef public_6f3c876
#undef public_6f3c899
#undef public_6f3c8bc
#undef public_6f3c8dd
#undef public_6f3c905
#undef public_6f3c915
#undef public_6f3c928
#undef public_6f3c94b
#undef public_6f3c94e
#undef public_6f3c961
