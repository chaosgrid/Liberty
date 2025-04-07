#include "Common-PCH.h"


#define public_62f7723 _public_62f7723

PROC_DECLARE(0x62f7700, internal_62f7700, public_62f7700);
extern "C" NAKED register_t __cdecl internal_62f7700()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63ecd20]
        cmp ecx, 0xFFFFFFFF
        je public_62f7723
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [public_63ecd20], 0xFFFFFFFF
        public_62f7723 : nop
        ret 
        UNREACHABLE_TRAP(0x62f7700)
    }
}

#undef public_62f7723
