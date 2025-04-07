#include "Common-PCH.h"


#define public_629aff3 _public_629aff3
#define public_629afff _public_629afff

PROC_DECLARE(0x629afe0, internal_629afe0, public_629afe0);
extern "C" NAKED register_t __cdecl internal_629afe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x18], eax
        jne public_629aff3
        mov dword ptr ds : [ecx+0x18], 0
        ret 4
        public_629aff3 : nop
        cmp dword ptr ds : [ecx+0x1C], eax
        jne public_629afff
        mov dword ptr ds : [ecx+0x1C], 0
        public_629afff : nop
        ret 4
        UNREACHABLE_TRAP(0x629afe0)
    }
}

#undef public_629aff3
#undef public_629afff
