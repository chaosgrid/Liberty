#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b030);

#define public_6f3b052 _public_6f3b052
#define public_6f3b07c _public_6f3b07c
#define public_6f3b09f _public_6f3b09f
#define public_6f3b0bc _public_6f3b0bc
#define public_6f3b0d9 _public_6f3b0d9
#define public_6f3b0f3 _public_6f3b0f3
#define public_6f3b122 _public_6f3b122
#define public_6f3b13b _public_6f3b13b
#define public_6f3b155 _public_6f3b155
#define public_6f3b16d _public_6f3b16d
#define public_6f3b180 _public_6f3b180

PROC_DECLARE(0x6f3b030, internal_6f3b030, public_6f3b030);
extern "C" NAKED register_t __cdecl internal_6f3b030()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b180
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
/*FIXUP public_6f3b052 : nop
        push offset public_6fb445c @0x6f3b052*/
  FIXUP public_6f3b052 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b07c
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b16d
/*FIXUP public_6f3b07c : nop
        push offset public_6fb9f40 @0x6f3b07c*/
  FIXUP public_6f3b07c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f40
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b09f
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp]
        jmp public_6f3b16d
/*FIXUP public_6f3b09f : nop
        push offset public_6fb9f2c @0x6f3b09f*/
  FIXUP public_6f3b09f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f2c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b0bc
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+4]
        jmp public_6f3b16d
/*FIXUP public_6f3b0bc : nop
        push offset public_6fb9f14 @0x6f3b0bc*/
  FIXUP public_6f3b0bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9f14
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b0d9
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+8]
        jmp public_6f3b16d
/*FIXUP public_6f3b0d9 : nop
        push offset public_6fb9ef8 @0x6f3b0d9*/
  FIXUP public_6f3b0d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9ef8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b0f3
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6f3b16d
/*FIXUP public_6f3b0f3 : nop
        push offset public_6fb9ee0 @0x6f3b0f3*/
  FIXUP public_6f3b0f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9ee0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b13b
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3b108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f3b122
        mov al, 1
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6f3b16d
/*FIXUP public_6f3b122 : nop
        push offset public_6fb9840 @0x6f3b122*/
  FIXUP public_6f3b122 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6f3b16d
/*FIXUP public_6f3b13b : nop
        push offset public_6fb9ec8 @0x6f3b13b*/
  FIXUP public_6f3b13b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9ec8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b155
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x14]
        jmp public_6f3b16d
/*FIXUP public_6f3b155 : nop
        push offset public_6fb9eb8 @0x6f3b155*/
  FIXUP public_6f3b155 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9eb8
        call ebx
        test al, al
        je public_6f3b16d
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x18]
        public_6f3b16d : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b052
        pop edi
        pop ebp
        pop ebx
        public_6f3b180 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b030)
    }
}

#undef public_6f3b052
#undef public_6f3b07c
#undef public_6f3b09f
#undef public_6f3b0bc
#undef public_6f3b0d9
#undef public_6f3b0f3
#undef public_6f3b122
#undef public_6f3b13b
#undef public_6f3b155
#undef public_6f3b16d
#undef public_6f3b180
