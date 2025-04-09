#include "FreeLancer-PCH.h"


#define public_4293d3 _public_4293d3

PROC_DECLARE(0x4293b0, internal_4293b0, public_4293b0);
extern "C" NAKED register_t __cdecl internal_4293b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0xC], 0x10
        je public_4293d3
        mov eax, dword ptr ds : [public_5c6d44]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB0]
        sub eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 4
        public_4293d3 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4293b0)
    }
}

#undef public_4293d3
