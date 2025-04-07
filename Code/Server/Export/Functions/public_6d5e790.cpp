#include "Server-PCH.h"


#define public_6d5e7c4 _public_6d5e7c4
#define public_6d5e7ca _public_6d5e7ca

PROC_DECLARE(0x6d5e790, internal_6d5e790, public_6d5e790);
extern "C" NAKED register_t __cdecl internal_6d5e790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d5e7ca
        cmp byte ptr ds : [eax], 0
        je public_6d5e7ca
        push eax
        call dword ptr ds : [public_6d649ec]
        add esp, 4
        test eax, eax
        je public_6d5e7c4
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        and eax, 0x3FFFFFFF
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 
        public_6d5e7c4 : nop
        mov eax, 0xFFFFFFFE
        ret 
        public_6d5e7ca : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e790)
    }
}

#undef public_6d5e7c4
#undef public_6d5e7ca
