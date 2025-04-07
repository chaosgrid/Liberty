#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e660);

#define public_630e670 _public_630e670
#define public_630e68a _public_630e68a
#define public_630e69c _public_630e69c

PROC_DECLARE(0x630e660, internal_630e660, public_630e660);
extern "C" NAKED register_t __cdecl internal_630e660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+4]
        cmp esi, 0xFFFFFFFF
        je public_630e69c
        lea ecx, ds:[ecx]
        public_630e670 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xD4]
        cmp eax, 0xFFFFFFFF
        je public_630e68a
        mov esi, eax
        jmp public_630e670
        public_630e68a : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        public_630e69c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630e660)
    }
}

#undef public_630e670
#undef public_630e68a
#undef public_630e69c
