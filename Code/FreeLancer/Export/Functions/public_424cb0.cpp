#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424cb0);

#define public_424cd1 _public_424cd1

PROC_DECLARE(0x424cb0, internal_424cb0, public_424cb0);
extern "C" NAKED register_t __cdecl internal_424cb0()
{
    __asm
    {
        mov al, byte ptr ds : [public_610865]
        test al, al
        je public_424cd1
        mov al, byte ptr ds : [public_610864]
        test al, al
        je public_424cd1
        mov al, byte ptr ds : [public_6679f8]
        test al, al
        je public_424cd1
        mov eax, 1
        ret 
        public_424cd1 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x424cb0)
    }
}

#undef public_424cd1
