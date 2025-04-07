#include "Server-PCH.h"


#define public_6d306af _public_6d306af
#define public_6d306ba _public_6d306ba

PROC_DECLARE(0x6d30690, internal_6d30690, public_6d30690);
extern "C" NAKED register_t __cdecl internal_6d30690()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d306ba
        mov dx, word ptr ds : [eax]
        cmp dx, word ptr ds : [ecx+8]
        je public_6d306af
        cmp dx, word ptr ds : [ecx+0xE]
        jne public_6d306ba
        public_6d306af : nop
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 8
        public_6d306ba : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d30690)
    }
}

#undef public_6d306af
#undef public_6d306ba
