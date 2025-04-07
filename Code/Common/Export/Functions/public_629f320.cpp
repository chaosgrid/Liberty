#include "Common-PCH.h"


#define public_629f331 _public_629f331
#define public_629f333 _public_629f333

PROC_DECLARE(0x629f320, internal_629f320, public_629f320);
extern "C" NAKED register_t __cdecl internal_629f320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629f331
        test dword ptr ds : [eax+0x14], 0x1FF0000
        jne public_629f333
        public_629f331 : nop
        xor eax, eax
        public_629f333 : nop
        ret 
        UNREACHABLE_TRAP(0x629f320)
    }
}

#undef public_629f331
#undef public_629f333
