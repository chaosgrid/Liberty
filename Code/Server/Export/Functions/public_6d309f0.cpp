#include "Server-PCH.h"


#define public_6d30a0b _public_6d30a0b
#define public_6d30a16 _public_6d30a16

PROC_DECLARE(0x6d309f0, internal_6d309f0, public_6d309f0);
extern "C" NAKED register_t __cdecl internal_6d309f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d30a16
        cmp ax, word ptr ds : [ecx+8]
        je public_6d30a0b
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d30a16
        public_6d30a0b : nop
        add edx, 2
        mov dword ptr ds : [esi], edx
        mov al, 1
        pop esi
        ret 8
        public_6d30a16 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d309f0)
    }
}

#undef public_6d30a0b
#undef public_6d30a16
