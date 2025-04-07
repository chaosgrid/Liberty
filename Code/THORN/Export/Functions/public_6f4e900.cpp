#include "THORN-PCH.h"


#define public_6f4e921 _public_6f4e921

PROC_DECLARE(0x6f4e900, internal_6f4e900, public_6f4e900);
extern "C" NAKED register_t __cdecl internal_6f4e900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_6f4e921
        mov ecx, dword ptr ds : [public_6f61e28]
        cmp eax, dword ptr ds : [ecx+0x70]
        jge public_6f4e921
        mov ecx, dword ptr ds : [ecx+0x6C]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ds : [ecx+eax*8+0x10], 2
        public_6f4e921 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4e900)
    }
}

#undef public_6f4e921
