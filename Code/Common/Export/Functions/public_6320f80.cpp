#include "Common-PCH.h"


#define public_6320f92 _public_6320f92

PROC_DECLARE(0x6320f80, internal_6320f80, public_6320f80);
extern "C" NAKED register_t __cdecl internal_6320f80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018b8]
        test eax, eax
        jne public_6320f92
        mov ecx, dword ptr ds : [public_64018d4]
        mov eax, ecx
        ret 
        public_6320f92 : nop
        mov ecx, dword ptr ds : [public_64018bc]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, dword ptr ds : [public_64018d4]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea eax, ds:[edx+ecx]
        ret 
        UNREACHABLE_TRAP(0x6320f80)
    }
}

#undef public_6320f92
