#include "zlib-PCH.h"


#define public_10003774 _public_10003774

PROC_DECLARE(0x10003760, internal_10003760, public_10003760);
extern "C" NAKED register_t __cdecl internal_10003760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_10003774
        cmp byte ptr ds : [eax+0x5C], 0x72
        jne public_10003774
        mov eax, dword ptr ds : [eax+0x3C]
        ret 4
        public_10003774 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x10003760)
    }
}

#undef public_10003774
