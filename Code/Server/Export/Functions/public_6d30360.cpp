#include "Server-PCH.h"


#define public_6d30384 _public_6d30384

PROC_DECLARE(0x6d30360, internal_6d30360, public_6d30360);
extern "C" NAKED register_t __cdecl internal_6d30360()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0xC], eax
        je public_6d30384
        mov si, word ptr ds : [eax]
        cmp si, word ptr ds : [ecx+8]
        jne public_6d30384
        add eax, 2
        mov dword ptr ds : [edx], eax
        mov al, 1
        pop esi
        ret 8
        public_6d30384 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d30360)
    }
}

#undef public_6d30384
