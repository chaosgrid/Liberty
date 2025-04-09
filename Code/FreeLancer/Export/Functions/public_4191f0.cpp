#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4191f0, internal_4191f0, public_4191f0);
extern "C" NAKED register_t __cdecl internal_4191f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x14
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4191f0)
    }
}
