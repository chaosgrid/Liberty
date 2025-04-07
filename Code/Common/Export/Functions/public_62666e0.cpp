#include "Common-PCH.h"


#define public_62666f0 _public_62666f0
#define public_62666fa _public_62666fa

PROC_DECLARE(0x62666e0, internal_62666e0, public_62666e0);
extern "C" NAKED register_t __cdecl internal_62666e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_6399408]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_62666fa
        public_62666f0 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_62666f0
        public_62666fa : nop
        ret 
        UNREACHABLE_TRAP(0x62666e0)
    }
}

#undef public_62666f0
#undef public_62666fa
