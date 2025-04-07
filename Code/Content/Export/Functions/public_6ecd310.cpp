#include "Content-PCH.h"


#define public_6ecd32a _public_6ecd32a

PROC_DECLARE(0x6ecd310, internal_6ecd310, public_6ecd310);
extern "C" NAKED register_t __cdecl internal_6ecd310()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x24]
        test al, al
        mov eax, dword ptr ds : [ecx+4]
        je public_6ecd32a
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        call dword ptr ds : [public_6fb3654]
        add esp, 4
        mov al, 1
        ret 
        public_6ecd32a : nop
        lea edx, ds:[ecx+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        push ecx
        call dword ptr ds : [public_6fb33fc]
        add esp, 8
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecd310)
    }
}

#undef public_6ecd32a
