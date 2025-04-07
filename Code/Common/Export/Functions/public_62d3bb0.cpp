#include "Common-PCH.h"


#define public_62d3bd3 _public_62d3bd3

PROC_DECLARE(0x62d3bb0, internal_62d3bb0, public_62d3bb0);
extern "C" NAKED register_t __cdecl internal_62d3bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d3bd3
        mov ecx, dword ptr ds : [ecx+eax*4+0x174]
        test ecx, ecx
        je public_62d3bd3
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x3C]
        public_62d3bd3 : nop
        ret 4
        UNREACHABLE_TRAP(0x62d3bb0)
    }
}

#undef public_62d3bd3
