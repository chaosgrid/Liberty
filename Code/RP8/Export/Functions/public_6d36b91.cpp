#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d36b91);

#define public_6d36ba0 _public_6d36ba0

PROC_DECLARE(0x6d36b91, internal_6d36b91, public_6d36b91);
extern "C" NAKED register_t __cdecl internal_6d36b91()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d36ba0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        public_6d36ba0 : nop
        and dword ptr ds : [esi], 0
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d36b91)
    }
}

#undef public_6d36ba0
