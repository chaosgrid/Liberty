#include "Common-PCH.h"


#define public_6262ec1 _public_6262ec1

PROC_DECLARE(0x6262eb0, internal_6262eb0, public_6262eb0);
extern "C" NAKED register_t __cdecl internal_6262eb0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        cmp al, 0x20
        je public_6262ec1
        cmp al, 9
        je public_6262ec1
        xor eax, eax
        ret 4
        public_6262ec1 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6262eb0)
    }
}

#undef public_6262ec1
