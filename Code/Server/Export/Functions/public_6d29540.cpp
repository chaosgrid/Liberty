#include "Server-PCH.h"


#define public_6d29561 _public_6d29561
#define public_6d29566 _public_6d29566

PROC_DECLARE(0x6d29540, internal_6d29540, public_6d29540);
extern "C" NAKED register_t __cdecl internal_6d29540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ecx
        je public_6d29566
        cmp word ptr ds : [ecx], 0xA
        jne public_6d29561
        add ecx, 2
        cmp eax, ecx
        je public_6d29566
        public_6d29561 : nop
        xor eax, eax
        ret 4
        public_6d29566 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6d29540)
    }
}

#undef public_6d29561
#undef public_6d29566
