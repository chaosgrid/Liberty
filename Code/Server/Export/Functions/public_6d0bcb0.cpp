#include "Server-PCH.h"


#define public_6d0bcc0 _public_6d0bcc0
#define public_6d0bcc6 _public_6d0bcc6
#define public_6d0bccd _public_6d0bccd

PROC_DECLARE(0x6d0bcb0, internal_6d0bcb0, public_6d0bcb0);
extern "C" NAKED register_t __cdecl internal_6d0bcb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        cmp ecx, edx
        je public_6d0bccd
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6d0bcc0 : nop
        cmp dword ptr ds : [ecx+0x40], esi
        je public_6d0bcc6
        inc eax
        public_6d0bcc6 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6d0bcc0
        pop esi
        public_6d0bccd : nop
        ret 4
        UNREACHABLE_TRAP(0x6d0bcb0)
    }
}

#undef public_6d0bcc0
#undef public_6d0bcc6
#undef public_6d0bccd
