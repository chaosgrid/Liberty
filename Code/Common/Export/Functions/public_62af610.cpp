#include "Common-PCH.h"


#define public_62af635 _public_62af635

PROC_DECLARE(0x62af610, internal_62af610, public_62af610);
extern "C" NAKED register_t __cdecl internal_62af610()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x98], 1
        mov dword ptr ds : [ecx+4], 0xFFFFFFFF
        jne public_62af635
        mov dword ptr ds : [ecx+0x98], 0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        public_62af635 : nop
        ret 8
        UNREACHABLE_TRAP(0x62af610)
    }
}

#undef public_62af635
