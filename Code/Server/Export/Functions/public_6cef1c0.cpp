#include "Server-PCH.h"


#define public_6cef1d2 _public_6cef1d2
#define public_6cef1d4 _public_6cef1d4

PROC_DECLARE(0x6cef1c0, internal_6cef1c0, public_6cef1c0);
extern "C" NAKED register_t __cdecl internal_6cef1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6cef1d2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cef1d4
        public_6cef1d2 : nop
        xor eax, eax
        public_6cef1d4 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        ret 
        UNREACHABLE_TRAP(0x6cef1c0)
    }
}

#undef public_6cef1d2
#undef public_6cef1d4
