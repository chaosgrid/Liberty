#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b770);

#define public_6f3b792 _public_6f3b792
#define public_6f3b7bc _public_6f3b7bc
#define public_6f3b7d9 _public_6f3b7d9
#define public_6f3b80b _public_6f3b80b
#define public_6f3b827 _public_6f3b827
#define public_6f3b844 _public_6f3b844
#define public_6f3b861 _public_6f3b861
#define public_6f3b881 _public_6f3b881
#define public_6f3b89b _public_6f3b89b
#define public_6f3b8b5 _public_6f3b8b5
#define public_6f3b8cf _public_6f3b8cf
#define public_6f3b8e7 _public_6f3b8e7
#define public_6f3b8fa _public_6f3b8fa

PROC_DECLARE(0x6f3b770, internal_6f3b770, public_6f3b770);
extern "C" NAKED register_t __cdecl internal_6f3b770()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b8fa
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
/*FIXUP public_6f3b792 : nop
        push offset public_6fb445c @0x6f3b792*/
  FIXUP public_6f3b792 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b7bc
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b8e7
/*FIXUP public_6f3b7bc : nop
        push offset public_6fba450 @0x6f3b7bc*/
  FIXUP public_6f3b7bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba450
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b7d9
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp]
        jmp public_6f3b8e7
/*FIXUP public_6f3b7d9 : nop
        push offset public_6fba42c @0x6f3b7d9*/
  FIXUP public_6f3b7d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba42c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b827
        call dword ptr ds : [public_6fb3054]
        mov edi, eax
/*FIXUP push offset public_6fb9848 @0x6f3b7ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9848
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f3b80b
        mov al, 1
        mov byte ptr ss : [ebp+4], al
        jmp public_6f3b8e7
/*FIXUP public_6f3b80b : nop
        push offset public_6fb9840 @0x6f3b80b*/
  FIXUP public_6f3b80b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9840
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        setne al
        mov byte ptr ss : [ebp+4], al
        jmp public_6f3b8e7
/*FIXUP public_6f3b827 : nop
        push offset public_6fba40c @0x6f3b827*/
  FIXUP public_6f3b827 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba40c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b844
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+8]
        jmp public_6f3b8e7
/*FIXUP public_6f3b844 : nop
        push offset public_6fba3e0 @0x6f3b844*/
  FIXUP public_6f3b844 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba3e0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b861
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6f3b8e7
/*FIXUP public_6f3b861 : nop
        push offset public_6fba3c4 @0x6f3b861*/
  FIXUP public_6f3b861 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba3c4
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b881
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ss : [ebp+0x10]
        jmp public_6f3b8e7
/*FIXUP public_6f3b881 : nop
        push offset public_6fba3a0 @0x6f3b881*/
  FIXUP public_6f3b881 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba3a0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b89b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x14]
        jmp public_6f3b8e7
/*FIXUP public_6f3b89b : nop
        push offset public_6fba37c @0x6f3b89b*/
  FIXUP public_6f3b89b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba37c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b8b5
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x18]
        jmp public_6f3b8e7
/*FIXUP public_6f3b8b5 : nop
        push offset public_6fba358 @0x6f3b8b5*/
  FIXUP public_6f3b8b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba358
        call ebx
        test al, al
        mov ecx, esi
        je public_6f3b8cf
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1C]
        jmp public_6f3b8e7
/*FIXUP public_6f3b8cf : nop
        push offset public_6fba334 @0x6f3b8cf*/
  FIXUP public_6f3b8cf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba334
        call ebx
        test al, al
        je public_6f3b8e7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x20]
        public_6f3b8e7 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b792
        pop edi
        pop ebp
        pop ebx
        public_6f3b8fa : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b770)
    }
}

#undef public_6f3b792
#undef public_6f3b7bc
#undef public_6f3b7d9
#undef public_6f3b80b
#undef public_6f3b827
#undef public_6f3b844
#undef public_6f3b861
#undef public_6f3b881
#undef public_6f3b89b
#undef public_6f3b8b5
#undef public_6f3b8cf
#undef public_6f3b8e7
#undef public_6f3b8fa
