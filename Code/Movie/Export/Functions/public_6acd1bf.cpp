#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acd1bf);

#define public_6acd1d8 _public_6acd1d8
#define public_6acd24d _public_6acd24d
#define public_6acd269 _public_6acd269
#define public_6acd29a _public_6acd29a

PROC_DECLARE(0x6acd1bf, internal_6acd1bf, public_6acd1bf);
extern "C" NAKED register_t __cdecl internal_6acd1bf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x94
        cmp dword ptr ds : [public_6ae0e84], 0
        je public_6acd1d8
        mov eax, dword ptr ds : [public_6add3c8]
        leave 
        ret 
        public_6acd1d8 : nop
        push edi
        push esi
        push 0x25
        xor eax, eax
        pop ecx
        lea edi, ss:[ebp-0x94]
        rep stosd
        lea eax, ss:[ebp-0x94]
        mov dword ptr ss : [ebp-0x94], 0x94
        push eax
        call dword ptr ds : [public_6ada060]
        test eax, eax
        je public_6acd29a
        xor eax, eax
        cmp dword ptr ss : [ebp-0x84], 2
        sete al
        test eax, eax
        mov dword ptr ds : [public_6add3c8], eax
        je public_6acd269
/*FIXUP push offset public_6ada8dc @0x6acd21b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8dc
        call dword ptr ds : [public_6ada05c]
        mov edi, eax
        test edi, edi
        je public_6acd29a
        mov esi, dword ptr ds : [public_6ada058]
/*FIXUP push offset public_6ada8c0 @0x6acd232*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8c0
        push edi
        call esi
        test eax, eax
        mov dword ptr ds : [public_6ae0e6c], eax
        je public_6acd24d
        mov dword ptr ds : [public_6add3c0], 0x4000
/*FIXUP public_6acd24d : nop
        push offset public_6ada8b4 @0x6acd24d*/
  FIXUP public_6acd24d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8b4
        push edi
        call esi
/*FIXUP push offset public_6ada89c @0x6acd255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada89c
        push edi
        mov dword ptr ds : [public_6ae0e70], eax
        call esi
        mov dword ptr ds : [public_6ae0e74], eax
        jmp public_6acd29a
/*FIXUP public_6acd269 : nop
        push offset public_6ada890 @0x6acd269*/
  FIXUP public_6acd269 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada890
        call dword ptr ds : [public_6ada054]
        mov edi, eax
        test edi, edi
        je public_6acd29a
        mov esi, dword ptr ds : [public_6ada058]
/*FIXUP push offset public_6ada880 @0x6acd280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada880
        push edi
        call esi
/*FIXUP push offset public_6ada870 @0x6acd288*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada870
        push edi
        mov dword ptr ds : [public_6ae0e78], eax
        call esi
        mov dword ptr ds : [public_6ae0e7c], eax
        public_6acd29a : nop
        mov eax, dword ptr ds : [public_6add3c8]
        pop esi
        mov dword ptr ds : [public_6ae0e84], 1
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6acd1bf)
    }
}

#undef public_6acd1d8
#undef public_6acd24d
#undef public_6acd269
#undef public_6acd29a
