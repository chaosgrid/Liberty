#include "Common-PCH.h"


#define public_62bfe80 _public_62bfe80

PROC_DECLARE(0x62bfe60, internal_62bfe60, public_62bfe60);
extern "C" NAKED register_t __cdecl internal_62bfe60()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        xor al, al
        test ecx, ecx
        je public_62bfe80
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bfe80
        mov al, byte ptr ds : [ecx+0x2BD]
        public_62bfe80 : nop
        ret 
        UNREACHABLE_TRAP(0x62bfe60)
    }
}

#undef public_62bfe80
