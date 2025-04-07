#include "Common-PCH.h"


#define public_62957eb _public_62957eb

PROC_DECLARE(0x62957e0, internal_62957e0, public_62957e0);
extern "C" NAKED register_t __cdecl internal_62957e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_62957eb
        mov al, byte ptr ds : [ecx+0x11]
        ret 
        public_62957eb : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62957e0)
    }
}

#undef public_62957eb
