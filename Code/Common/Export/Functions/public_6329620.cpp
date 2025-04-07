#include "Common-PCH.h"

PROC_DECLARE(0x6329620, internal_6329620, public_6329620);
extern "C" NAKED register_t __cdecl internal_6329620()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x1C]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329620)
    }
}
