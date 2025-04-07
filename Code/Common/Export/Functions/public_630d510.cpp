#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630d52d _public_630d52d
#define public_630d543 _public_630d543
#define public_630d55a _public_630d55a
#define public_630d56a _public_630d56a

PROC_DECLARE(0x630d510, internal_630d510, public_630d510);
extern "C" NAKED register_t __cdecl internal_630d510()
{
    __asm
    {
        movzx eax, word ptr ds : [ecx+8]
        cmp eax, 0x21
        push ebx
        je public_630d52d
        cmp eax, 0x4E
        jne public_630d56a
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call public_6391d5a
        add esp, 4
        pop ebx
        ret 
        public_630d52d : nop
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_630d56a
        push esi
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        je public_630d55a
        push ebp
        mov ebp, dword ptr ds : [public_639932c]
        push edi
        public_630d543 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call public_630d510
        push esi
        call ebp
        add esp, 4
        test edi, edi
        mov esi, edi
        jne public_630d543
        pop edi
        pop ebp
        public_630d55a : nop
        push ebx
        mov dword ptr ds : [ebx], 0
        call public_6391d5a
        add esp, 4
        pop esi
        public_630d56a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630d510)
    }
}

#undef public_630d52d
#undef public_630d543
#undef public_630d55a
#undef public_630d56a
