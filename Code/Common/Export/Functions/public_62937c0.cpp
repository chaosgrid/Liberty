#include "Common-PCH.h"


#define public_62937da _public_62937da

PROC_DECLARE(0x62937c0, internal_62937c0, public_62937c0);
extern "C" NAKED register_t __cdecl internal_62937c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, 0xFFFFFFFF
        je public_62937da
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        ret 
        public_62937da : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62937c0)
    }
}

#undef public_62937da
