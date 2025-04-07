#include "zlib-PCH.h"


#define public_100090c2 _public_100090c2
#define public_100090ca _public_100090ca

PROC_DECLARE(0x100090b0, internal_100090b0, public_100090b0);
extern "C" NAKED register_t __cdecl internal_100090b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_100090c2
        mov eax, dword ptr ds : [eax+0x9C]
        test eax, eax
        jne public_100090ca
        public_100090c2 : nop
        mov eax, 0xFFFFFF9A
        ret 4
        public_100090ca : nop
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x100090b0)
    }
}

#undef public_100090c2
#undef public_100090ca
