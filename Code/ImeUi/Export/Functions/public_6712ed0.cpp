#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714530);

#define public_6712eda _public_6712eda

PROC_DECLARE(0x6712ed0, internal_6712ed0, public_6712ed0);
extern "C" NAKED register_t __cdecl internal_6712ed0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x7C]
        test al, al
        jne public_6712eda
        xor al, al
        ret 
        public_6712eda : nop
        call public_6714530
        dec eax
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x6712ed0)
    }
}

#undef public_6712eda
