#include "Freelancer-PCH.h"


#define public_4887e2 _public_4887e2
#define public_4887f7 _public_4887f7

PROC_DECLARE(0x4887d0, internal_4887d0, public_4887d0);
extern "C" NAKED register_t __cdecl internal_4887d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF003
        je public_4887e2
        cmp eax, 0xF004
        jne public_4887f7
        public_4887e2 : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        call dword ptr ds : [edx+0xA8]
        pop esi
        public_4887f7 : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4887d0)
    }
}

#undef public_4887e2
#undef public_4887f7
