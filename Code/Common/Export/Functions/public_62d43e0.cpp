#include "Common-PCH.h"


#define public_62d43f7 _public_62d43f7

PROC_DECLARE(0x62d43e0, internal_62d43e0, public_62d43e0);
extern "C" NAKED register_t __cdecl internal_62d43e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d43f7
        mov ecx, dword ptr ds : [ecx+eax*4+0x174]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x4C]
        public_62d43f7 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62d43e0)
    }
}

#undef public_62d43f7
