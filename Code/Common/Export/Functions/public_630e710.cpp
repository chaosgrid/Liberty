#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_630e721 _public_630e721
#define public_630e73d _public_630e73d
#define public_630e740 _public_630e740

PROC_DECLARE(0x630e710, internal_630e710, public_630e710);
extern "C" NAKED register_t __cdecl internal_630e710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        xor esi, esi
        cmp eax, 0xFFFFFFFF
        push edi
        je public_630e73d
        mov edi, dword ptr ss : [esp+0xC]
        public_630e721 : nop
        cmp eax, edi
        je public_630e740
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        inc esi
        call dword ptr ds : [edx+0xD4]
        cmp eax, 0xFFFFFFFF
        jne public_630e721
        public_630e73d : nop
        or esi, 0xFFFFFFFF
        public_630e740 : nop
        xor eax, eax
        cmp esi, 0xFFFFFFFF
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630e710)
    }
}

#undef public_630e721
#undef public_630e73d
#undef public_630e740
