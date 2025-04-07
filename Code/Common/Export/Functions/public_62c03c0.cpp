#include "Common-PCH.h"


#define public_62c03dc _public_62c03dc

PROC_DECLARE(0x62c03c0, internal_62c03c0, public_62c03c0);
extern "C" NAKED register_t __cdecl internal_62c03c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        xor al, al
        test ecx, ecx
        je public_62c03dc
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_62c03dc
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x8C]
        public_62c03dc : nop
        ret 
        UNREACHABLE_TRAP(0x62c03c0)
    }
}

#undef public_62c03dc
