#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac28e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2e40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3060);

#define public_6ac2588 _public_6ac2588
#define public_6ac2596 _public_6ac2596
#define public_6ac25a0 _public_6ac25a0
#define public_6ac25e0 _public_6ac25e0
#define public_6ac25f9 _public_6ac25f9
#define public_6ac2600 _public_6ac2600
#define public_6ac2619 _public_6ac2619
#define public_6ac2636 _public_6ac2636
#define public_6ac263a _public_6ac263a
#define public_6ac2641 _public_6ac2641
#define public_6ac2672 _public_6ac2672
#define public_6ac267e _public_6ac267e
#define public_6ac2683 _public_6ac2683

PROC_DECLARE(0x6ac2549, internal_6ac2549, public_6ac2549);
extern "C" NAKED register_t __cdecl internal_6ac2549()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+0x14], edi
        je public_6ac267e
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6ac267e
        cmp dword ptr ss : [ebp+0x18], edi
        je public_6ac267e
        lea ecx, ss:[ebp-4]
        call public_6ac2ae0
        lea ecx, ss:[ebp-4]
        call public_6ac28e0
        cmp eax, edi
        jge public_6ac2588
        mov esi, eax
        jmp public_6ac2672
        public_6ac2588 : nop
        push 0x10
        call dword ptr ds : [public_6ada1c4]
        mov ebx, eax
        cmp ebx, edi
        jne public_6ac25a0
        public_6ac2596 : nop
        mov esi, 0x8007000E
        jmp public_6ac2672
        public_6ac25a0 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [public_6ada1c0]
        mov eax, dword ptr ds : [eax+8]
        cmp eax, edi
        je public_6ac2600
        lea edx, ss:[ebp+8]
        mov dword ptr ss : [ebp+8], edi
        mov ecx, dword ptr ds : [eax]
        push edx
/*FIXUP push offset public_6add1d8 @0x6ac25b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add1d8
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edi, eax
        push ebx
        test edi, edi
        jge public_6ac25e0
        call esi
        lea ecx, ss:[ebp-4]
        call public_6ac2b30
        mov eax, edi
        jmp public_6ac2683
        public_6ac25e0 : nop
        push dword ptr ss : [ebp+8]
        lea ecx, ss:[ebp-4]
/*FIXUP push offset public_6add23c @0x6ac25e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add23c
        call public_6ac3060
        test eax, eax
        jge public_6ac25f9
        push ebx
        call esi
        xor ebx, ebx
        public_6ac25f9 : nop
        push dword ptr ss : [ebp+8]
        call esi
        jmp public_6ac2636
        public_6ac2600 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        cmp eax, dword ptr ds : [public_6add1d0]
        jb public_6ac2619
        call dword ptr ds : [public_6ada1c0]
        mov esi, 0x80070057
        jmp public_6ac2672
        public_6ac2619 : nop
        imul eax, 0x78
        push dword ptr ss : [ebp+0x10]
        add eax, offset public_6add23c
        lea ecx, ss:[ebp-4]
        push eax
        call public_6ac3060
        test eax, eax
        jge public_6ac2636
        push ebx
        call esi
        xor ebx, ebx
        public_6ac2636 : nop
        test ebx, ebx
        jne public_6ac2641
        public_6ac263a : nop
        mov esi, 0x8000FFFF
        jmp public_6ac2672
        public_6ac2641 : nop
        push 0x50
        call dword ptr ds : [public_6ada1c4]
        mov edi, eax
        test edi, edi
        je public_6ac2596
        mov eax, dword ptr ss : [ebp+0x14]
        push edi
        add eax, 0x30
        push ebx
        push eax
        lea ecx, ss:[ebp-4]
        call public_6ac2e40
        test eax, eax
        jl public_6ac263a
        mov eax, dword ptr ss : [ebp+0x18]
        push ebx
        mov dword ptr ds : [eax], edi
        call esi
        xor esi, esi
        public_6ac2672 : nop
        lea ecx, ss:[ebp-4]
        call public_6ac2b30
        mov eax, esi
        jmp public_6ac2683
        public_6ac267e : nop
        mov eax, 0x80004003
        public_6ac2683 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        UNREACHABLE_TRAP(0x6ac2549)
    }
}

#undef public_6ac2588
#undef public_6ac2596
#undef public_6ac25a0
#undef public_6ac25e0
#undef public_6ac25f9
#undef public_6ac2600
#undef public_6ac2619
#undef public_6ac2636
#undef public_6ac263a
#undef public_6ac2641
#undef public_6ac2672
#undef public_6ac267e
#undef public_6ac2683
