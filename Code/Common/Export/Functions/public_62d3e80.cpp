#include "Common-PCH.h"


#define public_62d3e9c _public_62d3e9c

PROC_DECLARE(0x62d3e80, internal_62d3e80, public_62d3e80);
extern "C" NAKED register_t __cdecl internal_62d3e80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC4]
        test eax, eax
        je public_62d3e9c
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC8], eax
        mov eax, 1
        ret 4
        public_62d3e9c : nop
        mov eax, 3
        ret 4
        UNREACHABLE_TRAP(0x62d3e80)
    }
}

#undef public_62d3e9c
