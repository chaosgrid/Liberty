#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712480);

#define public_6712dff _public_6712dff

PROC_DECLARE(0x6712df0, internal_6712df0, public_6712df0);
extern "C" NAKED register_t __cdecl internal_6712df0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x90]
        test esi, esi
        jne public_6712dff
        xor eax, eax
        pop esi
        ret 
        public_6712dff : nop
        mov ecx, esi
        call public_6712480
        mov eax, dword ptr ds : [esi+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712df0)
    }
}

#undef public_6712dff
