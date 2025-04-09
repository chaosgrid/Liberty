#include "FreeLancer-PCH.h"


#define public_451ee5 _public_451ee5

PROC_DECLARE(0x451ed0, internal_451ed0, public_451ed0);
extern "C" NAKED register_t __cdecl internal_451ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        test eax, eax
        je public_451ee5
        mov dl, byte ptr ds : [ecx+0x7C]
        test dl, dl
        je public_451ee5
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], ecx
        public_451ee5 : nop
        ret 4
        UNREACHABLE_TRAP(0x451ed0)
    }
}

#undef public_451ee5
