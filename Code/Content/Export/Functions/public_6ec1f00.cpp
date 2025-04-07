#include "Content-PCH.h"


#define public_6ec1f1a _public_6ec1f1a
#define public_6ec1f2a _public_6ec1f2a
#define public_6ec1f2c _public_6ec1f2c

PROC_DECLARE(0x6ec1f00, internal_6ec1f00, public_6ec1f00);
extern "C" NAKED register_t __cdecl internal_6ec1f00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor al, al
        test esi, esi
        je public_6ec1f2c
        mov edx, dword ptr ds : [ecx+0xC]
        cmp dword ptr ds : [esi], edx
        je public_6ec1f1a
        test edx, 0x3FFFFFFF
        jne public_6ec1f2c
        public_6ec1f1a : nop
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, 0x3FFFFFFF
        je public_6ec1f2a
        cmp dword ptr ds : [esi+4], ecx
        jne public_6ec1f2c
        public_6ec1f2a : nop
        mov al, 1
        public_6ec1f2c : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec1f00)
    }
}

#undef public_6ec1f1a
#undef public_6ec1f2a
#undef public_6ec1f2c
