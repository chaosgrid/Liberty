#include "Common-PCH.h"


#define public_6304772 _public_6304772

PROC_DECLARE(0x6304760, internal_6304760, public_6304760);
extern "C" NAKED register_t __cdecl internal_6304760()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x18]
        test al, al
        je public_6304772
        push ecx
        mov byte ptr ds : [ecx+0x18], 0
        call dword ptr ds : [public_6399124]
        public_6304772 : nop
        ret 
        UNREACHABLE_TRAP(0x6304760)
    }
}

#undef public_6304772
