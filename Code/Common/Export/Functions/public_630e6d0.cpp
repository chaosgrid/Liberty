#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e6d0);

#define public_630e6e1 _public_630e6e1
#define public_630e6fd _public_630e6fd
#define public_630e703 _public_630e703

PROC_DECLARE(0x630e6d0, internal_630e6d0, public_630e6d0);
extern "C" NAKED register_t __cdecl internal_630e6d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        xor esi, esi
        cmp eax, 0xFFFFFFFF
        push edi
        je public_630e6fd
        mov edi, dword ptr ss : [esp+0xC]
        public_630e6e1 : nop
        cmp eax, edi
        je public_630e703
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        inc esi
        call dword ptr ds : [edx+0xD4]
        cmp eax, 0xFFFFFFFF
        jne public_630e6e1
        public_630e6fd : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_630e703 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630e6d0)
    }
}

#undef public_630e6e1
#undef public_630e6fd
#undef public_630e703
