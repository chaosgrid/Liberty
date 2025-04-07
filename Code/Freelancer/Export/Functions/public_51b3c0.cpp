#include "Freelancer-PCH.h"


#define public_51b3d3 _public_51b3d3
#define public_51b3d5 _public_51b3d5
#define public_51b3e3 _public_51b3e3

PROC_DECLARE(0x51b3c0, internal_51b3c0, public_51b3c0);
extern "C" NAKED register_t __cdecl internal_51b3c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0xC0
        test eax, eax
        je public_51b3d3
        add eax, 8
        jmp public_51b3d5
        public_51b3d3 : nop
        xor eax, eax
        public_51b3d5 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_51b3e3
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c62a8]
        public_51b3e3 : nop
        ret 4
        UNREACHABLE_TRAP(0x51b3c0)
    }
}

#undef public_51b3d3
#undef public_51b3d5
#undef public_51b3e3
