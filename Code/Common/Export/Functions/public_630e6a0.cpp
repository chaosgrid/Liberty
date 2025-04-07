#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e6a0);

#define public_630e6a5 _public_630e6a5
#define public_630e6bf _public_630e6bf

PROC_DECLARE(0x630e6a0, internal_630e6a0, public_630e6a0);
extern "C" NAKED register_t __cdecl internal_630e6a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_630e6a5 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xD4]
        cmp eax, 0xFFFFFFFF
        je public_630e6bf
        mov esi, eax
        jmp public_630e6a5
        public_630e6bf : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630e6a0)
    }
}

#undef public_630e6a5
#undef public_630e6bf
