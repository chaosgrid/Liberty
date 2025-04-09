#include "FreeLancer-PCH.h"

PROC_DECLARE(0x595f70, internal_595f70, public_595f70);
extern "C" NAKED register_t __cdecl internal_595f70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        add edi, 0x24
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x595f70)
    }
}
