#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac23a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac23fc);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);

#define public_6ac23c0 _public_6ac23c0
#define public_6ac23c2 _public_6ac23c2
#define public_6ac23dc _public_6ac23dc
#define public_6ac23e3 _public_6ac23e3
#define public_6ac23ea _public_6ac23ea
#define public_6ac23ef _public_6ac23ef
#define public_6ac23f5 _public_6ac23f5

PROC_DECLARE(0x6ac23a0, internal_6ac23a0, public_6ac23a0);
extern "C" NAKED register_t __cdecl internal_6ac23a0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        push esi
        push edi
        je public_6ac23dc
        push 0xC
        call public_6acf3db
        test eax, eax
        pop ecx
        je public_6ac23c0
        mov ecx, eax
        call public_6ac23fc
        mov esi, eax
        jmp public_6ac23c2
        public_6ac23c0 : nop
        xor esi, esi
        public_6ac23c2 : nop
        test esi, esi
        je public_6ac23e3
        push dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6ada960 @0x6ac23cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada960
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        test edi, edi
        jl public_6ac23ea
        jmp public_6ac23ef
        public_6ac23dc : nop
        mov edi, 0x80004003
        jmp public_6ac23f5
        public_6ac23e3 : nop
        mov edi, 0x8007000E
        jmp public_6ac23f5
        public_6ac23ea : nop
        mov edi, 0x8000FFFF
        public_6ac23ef : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6ac23f5 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac23a0)
    }
}

#undef public_6ac23c0
#undef public_6ac23c2
#undef public_6ac23dc
#undef public_6ac23e3
#undef public_6ac23ea
#undef public_6ac23ef
#undef public_6ac23f5
