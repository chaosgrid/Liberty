#include "Common-PCH.h"

PROC_DECLARE(0x6325b40, internal_6325b40, public_6325b40);
extern "C" NAKED register_t __cdecl internal_6325b40()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        push esi
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6325b40)
    }
}
