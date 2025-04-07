#include "Common-PCH.h"


#define public_629e7b0 _public_629e7b0
#define public_629e7c9 _public_629e7c9
#define public_629e7d0 _public_629e7d0
#define public_629e7d2 _public_629e7d2

PROC_DECLARE(0x629e7a0, internal_629e7a0, public_629e7a0);
extern "C" NAKED register_t __cdecl internal_629e7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [ecx+0x58]
        cmp eax, edx
        push esi
        je public_629e7d0
        mov esi, dword ptr ss : [esp+8]
        nop 
        public_629e7b0 : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_629e7c9
        add ecx, 0xFFFFFF64
        test ecx, ecx
        je public_629e7c9
        cmp dword ptr ds : [ecx+0xB0], esi
        je public_629e7d2
        public_629e7c9 : nop
        add eax, 0x24
        cmp eax, edx
        jne public_629e7b0
        public_629e7d0 : nop
        xor eax, eax
        public_629e7d2 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629e7a0)
    }
}

#undef public_629e7b0
#undef public_629e7c9
#undef public_629e7d0
#undef public_629e7d2
