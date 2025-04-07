#include "Common-PCH.h"

PROC_DECLARE(0x6329940, internal_6329940, public_6329940);
extern "C" NAKED register_t __cdecl internal_6329940()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        push esi
        mov dword ptr ds : [eax], offset public_63a43a4
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6329940)
    }
}
