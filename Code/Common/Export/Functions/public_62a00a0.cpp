#include "Common-PCH.h"


#define public_62a00a8 _public_62a00a8
#define public_62a00b0 _public_62a00b0

PROC_DECLARE(0x62a00a0, internal_62a00a0, public_62a00a0);
extern "C" NAKED register_t __cdecl internal_62a00a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx]
        xor eax, eax
        test ecx, ecx
        je public_62a00b0
        public_62a00a8 : nop
        mov ecx, dword ptr ds : [ecx+4]
        inc eax
        test ecx, ecx
        jne public_62a00a8
        public_62a00b0 : nop
        ret 
        UNREACHABLE_TRAP(0x62a00a0)
    }
}

#undef public_62a00a8
#undef public_62a00b0
