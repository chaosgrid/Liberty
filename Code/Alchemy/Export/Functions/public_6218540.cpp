#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218540);

#define public_6218549 _public_6218549
#define public_6218559 _public_6218559

PROC_DECLARE(0x6218540, internal_6218540, public_6218540);
extern "C" NAKED register_t __cdecl internal_6218540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6218559
        push esi
        public_6218549 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6218549
        pop esi
        public_6218559 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6218540)
    }
}

#undef public_6218549
#undef public_6218559
