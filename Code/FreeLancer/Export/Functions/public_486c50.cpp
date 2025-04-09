#include "FreeLancer-PCH.h"


#define public_486c77 _public_486c77
#define public_486c8c _public_486c8c

PROC_DECLARE(0x486c50, internal_486c50, public_486c50);
extern "C" NAKED register_t __cdecl internal_486c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF001
        je public_486c77
        cmp eax, 0xF002
        je public_486c77
        cmp eax, 0x3006
        je public_486c77
        cmp eax, 0xF003
        je public_486c77
        cmp eax, 0xF004
        jne public_486c8c
        public_486c77 : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        call dword ptr ds : [edx+0xA8]
        pop esi
        public_486c8c : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x486c50)
    }
}

#undef public_486c77
#undef public_486c8c
