#include "Common-PCH.h"


#define public_630a363 _public_630a363
#define public_630a372 _public_630a372
#define public_630a379 _public_630a379
#define public_630a37b _public_630a37b

PROC_DECLARE(0x630a350, internal_630a350, public_630a350);
extern "C" NAKED register_t __cdecl internal_630a350()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push esi
        je public_630a379
        mov esi, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        public_630a363 : nop
        cmp dword ptr ds : [eax+4], esi
        jne public_630a372
        test edx, edx
        je public_630a37b
        cmp edx, eax
        jne public_630a372
        xor edx, edx
        public_630a372 : nop
        add eax, 0x20
        cmp eax, ecx
        jne public_630a363
        public_630a379 : nop
        xor eax, eax
        public_630a37b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630a350)
    }
}

#undef public_630a363
#undef public_630a372
#undef public_630a379
#undef public_630a37b
