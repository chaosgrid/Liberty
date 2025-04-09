#include "FreeLancer-PCH.h"

PROC_DECLARE(0x429690, internal_429690, public_429690);
extern "C" NAKED register_t __cdecl internal_429690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x74]
        neg al
        pop esi
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x429690)
    }
}
