#include "Common-PCH.h"


#define public_62cb6f3 _public_62cb6f3

PROC_DECLARE(0x62cb6d0, internal_62cb6d0, public_62cb6d0);
extern "C" NAKED register_t __cdecl internal_62cb6d0()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0x282]
        test cl, cl
        jne public_62cb6f3
        mov cl, byte ptr ds : [eax+0x281]
        test cl, cl
        jne public_62cb6f3
        mov edx, dword ptr ds : [eax+0x34]
        lea ecx, ds:[eax+0x34]
        mov eax, dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [edx+8]
        public_62cb6f3 : nop
        ret 
        UNREACHABLE_TRAP(0x62cb6d0)
    }
}

#undef public_62cb6f3
