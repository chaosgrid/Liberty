#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e600);

#define public_630e615 _public_630e615
#define public_630e625 _public_630e625

PROC_DECLARE(0x630e600, internal_630e600, public_630e600);
extern "C" NAKED register_t __cdecl internal_630e600()
{
    __asm
    {
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        xor ebp, ebp
        cmp eax, ebp
        je public_630e625
        push ebx
        mov ebx, dword ptr ds : [public_639932c]
        push esi
        public_630e615 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_630e615
        pop esi
        pop ebx
        public_630e625 : nop
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+4], ebp
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x630e600)
    }
}

#undef public_630e615
#undef public_630e625
