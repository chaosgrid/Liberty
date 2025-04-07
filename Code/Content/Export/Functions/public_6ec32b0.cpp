#include "Content-PCH.h"


#define public_6ec32ce _public_6ec32ce
#define public_6ec32d4 _public_6ec32d4
#define public_6ec32d6 _public_6ec32d6

PROC_DECLARE(0x6ec32b0, internal_6ec32b0, public_6ec32b0);
extern "C" NAKED register_t __cdecl internal_6ec32b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        xor al, al
        test edx, edx
        je public_6ec32d6
        mov dl, byte ptr ds : [edx+8]
        test dl, dl
        je public_6ec32ce
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        test esi, esi
        pop esi
        je public_6ec32d4
        test dl, dl
        jne public_6ec32d6
        public_6ec32ce : nop
        cmp dword ptr ds : [ecx+0xC], 1
        jne public_6ec32d6
        public_6ec32d4 : nop
        mov al, 1
        public_6ec32d6 : nop
        ret 8
        UNREACHABLE_TRAP(0x6ec32b0)
    }
}

#undef public_6ec32ce
#undef public_6ec32d4
#undef public_6ec32d6
