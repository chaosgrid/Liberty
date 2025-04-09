#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_4c77a0);

#define public_4c77c2 _public_4c77c2
#define public_4c77c5 _public_4c77c5
#define public_4c77d3 _public_4c77d3
#define public_4c77d6 _public_4c77d6
#define public_4c77e3 _public_4c77e3
#define public_4c77e7 _public_4c77e7
#define public_4c77f6 _public_4c77f6

PROC_DECLARE(0x4c77a0, internal_4c77a0, public_4c77a0);
extern "C" NAKED register_t __cdecl internal_4c77a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_673570]
        test ecx, ecx
        je public_4c77c2
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [public_673570], 0
        public_4c77c2 : nop
        push esi
        xor esi, esi
        public_4c77c5 : nop
        test esi, esi
        mov ecx, dword ptr ds : [public_673518]
        jne public_4c77d3
        mov esi, ecx
        jmp public_4c77d6
        public_4c77d3 : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c77d6 : nop
        test esi, esi
        je public_4c77e3
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        jmp public_4c77c5
        public_4c77e3 : nop
        test ecx, ecx
        je public_4c77f6
        public_4c77e7 : nop
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+0x34]
        push 1
        call dword ptr ds : [edx]
        test esi, esi
        mov ecx, esi
        jne public_4c77e7
        public_4c77f6 : nop
        mov dword ptr ds : [public_67351c], 0
        mov dword ptr ds : [public_673518], 0
        mov ecx, offset public_673520
        pop esi
        jmp public_425a20
        UNREACHABLE_TRAP(0x4c77a0)
    }
}

#undef public_4c77c2
#undef public_4c77c5
#undef public_4c77d3
#undef public_4c77d6
#undef public_4c77e3
#undef public_4c77e7
#undef public_4c77f6
