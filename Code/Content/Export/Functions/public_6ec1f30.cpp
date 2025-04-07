#include "Content-PCH.h"


#define public_6ec1f46 _public_6ec1f46

PROC_DECLARE(0x6ec1f30, internal_6ec1f30, public_6ec1f30);
extern "C" NAKED register_t __cdecl internal_6ec1f30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        xor al, al
        test edx, edx
        je public_6ec1f46
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6ec1f46
        mov al, 1
        public_6ec1f46 : nop
        ret 8
        UNREACHABLE_TRAP(0x6ec1f30)
    }
}

#undef public_6ec1f46
