#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df940);

#define public_62df9b9 _public_62df9b9
#define public_62df9f8 _public_62df9f8
#define public_62dfa0d _public_62dfa0d
#define public_62dfa5c _public_62dfa5c
#define public_62dfa9b _public_62dfa9b
#define public_62dfab0 _public_62dfab0
#define public_62dfb06 _public_62dfb06
#define public_62dfb45 _public_62dfb45
#define public_62dfb5a _public_62dfb5a
#define public_62dfbac _public_62dfbac
#define public_62dfbeb _public_62dfbeb
#define public_62dfc00 _public_62dfc00
#define public_62dfc56 _public_62dfc56
#define public_62dfc95 _public_62dfc95
#define public_62dfcaa _public_62dfcaa
#define public_62dfcfc _public_62dfcfc
#define public_62dfd37 _public_62dfd37
#define public_62dfd48 _public_62dfd48
#define public_62dfd62 _public_62dfd62
#define public_62dfd6e _public_62dfd6e

PROC_DECLARE(0x62df940, internal_62df940, public_62df940);
extern "C" NAKED register_t __cdecl internal_62df940()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x1C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [edx]
        fchs 
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x24], eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62df9b9
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfa0d
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfa0d
        public_62df9b9 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62df9f8
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfa0d
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfa0d
        public_62df9f8 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfa0d : nop
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx]
        fchs 
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62dfa5c
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfab0
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfab0
        public_62dfa5c : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62dfa9b
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfab0
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfab0
        public_62dfa9b : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfab0 : nop
        fld dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+4]
        fchs 
        mov dword ptr ss : [esp+0x24], eax
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62dfb06
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfb5a
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfb5a
        public_62dfb06 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62dfb45
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfb5a
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfb5a
        public_62dfb45 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfb5a : nop
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+4]
        fchs 
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62dfbac
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfc00
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfc00
        public_62dfbac : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62dfbeb
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfc00
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfc00
        public_62dfbeb : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfc00 : nop
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx+8]
        fchs 
        mov dword ptr ss : [esp+0x24], eax
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62dfc56
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfcaa
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfcaa
        public_62dfc56 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62dfc95
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfcaa
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfcaa
        public_62dfc95 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfcaa : nop
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+8]
        fchs 
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62dfcfc
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfd48
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        jmp public_62dfd48
        public_62dfcfc : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62dfd37
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jnp public_62dfd6e
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_62dfd48
        fld dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [edx]
        jmp public_62dfd48
        public_62dfd37 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62dfd6e
        public_62dfd48 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jp public_62dfd62
        fld dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_62dfd6e
        public_62dfd62 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 8
        ret 
        public_62dfd6e : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62df940)
    }
}

#undef public_62df9b9
#undef public_62df9f8
#undef public_62dfa0d
#undef public_62dfa5c
#undef public_62dfa9b
#undef public_62dfab0
#undef public_62dfb06
#undef public_62dfb45
#undef public_62dfb5a
#undef public_62dfbac
#undef public_62dfbeb
#undef public_62dfc00
#undef public_62dfc56
#undef public_62dfc95
#undef public_62dfcaa
#undef public_62dfcfc
#undef public_62dfd37
#undef public_62dfd48
#undef public_62dfd62
#undef public_62dfd6e
