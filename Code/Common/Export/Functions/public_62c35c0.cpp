#include "Common-PCH.h"


#define public_62c35d0 _public_62c35d0
#define public_62c35dc _public_62c35dc

PROC_DECLARE(0x62c35c0, internal_62c35c0, public_62c35c0);
extern "C" NAKED register_t __cdecl internal_62c35c0()
{
    __asm
    {
        test byte ptr ds : [ecx+0x28], 2
        mov eax, 1
        jne public_62c35d0
        mov eax, 2
        public_62c35d0 : nop
        mov dl, byte ptr ds : [ecx+0x29]
        test dl, dl
        je public_62c35dc
        mov eax, 3
        public_62c35dc : nop
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62c35c0)
    }
}

#undef public_62c35d0
#undef public_62c35dc
