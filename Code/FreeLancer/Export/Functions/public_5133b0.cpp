#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5133b0, internal_5133b0, public_5133b0);
extern "C" NAKED register_t __cdecl internal_5133b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6610]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, esi
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_5c6614]
        fld dword ptr ds : [eax+0x70]
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5133b0)
    }
}
