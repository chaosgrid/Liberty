#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428550);

#define public_428560 _public_428560
#define public_428572 _public_428572

PROC_DECLARE(0x428550, internal_428550, public_428550);
extern "C" NAKED register_t __cdecl internal_428550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667c70]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_428572
        lea esp, ss:[esp]
        public_428560 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x68]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_667c70]
        jne public_428560
        public_428572 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x428550)
    }
}

#undef public_428560
#undef public_428572
