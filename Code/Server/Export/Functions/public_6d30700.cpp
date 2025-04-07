#include "Server-PCH.h"


#define public_6d30720 _public_6d30720

PROC_DECLARE(0x6d30700, internal_6d30700, public_6d30700);
extern "C" NAKED register_t __cdecl internal_6d30700()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d30720
        cmp ax, word ptr ds : [ecx+8]
        jne public_6d30720
        add edx, 2
        mov dword ptr ds : [esi], edx
        mov al, 1
        pop esi
        ret 8
        public_6d30720 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d30700)
    }
}

#undef public_6d30720
