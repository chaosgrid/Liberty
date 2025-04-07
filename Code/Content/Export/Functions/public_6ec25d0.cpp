#include "Content-PCH.h"


#define public_6ec25e7 _public_6ec25e7
#define public_6ec25f6 _public_6ec25f6
#define public_6ec25f8 _public_6ec25f8

PROC_DECLARE(0x6ec25d0, internal_6ec25d0, public_6ec25d0);
extern "C" NAKED register_t __cdecl internal_6ec25d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        xor al, al
        test edx, edx
        je public_6ec25f8
        mov esi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi]
        cmp edx, esi
        je public_6ec25f8
        mov ecx, dword ptr ds : [ecx+0xC]
        public_6ec25e7 : nop
        cmp dword ptr ds : [edx+8], ecx
        je public_6ec25f6
        mov edx, dword ptr ds : [edx]
        cmp edx, esi
        jne public_6ec25e7
        pop esi
        ret 8
        public_6ec25f6 : nop
        mov al, 1
        public_6ec25f8 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec25d0)
    }
}

#undef public_6ec25e7
#undef public_6ec25f6
#undef public_6ec25f8
