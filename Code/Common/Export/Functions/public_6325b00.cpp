#include "Common-PCH.h"

PROC_DECLARE(0x6325b00, internal_6325b00, public_6325b00);
extern "C" NAKED register_t __cdecl internal_6325b00()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
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
        mov dword ptr ds : [eax], offset public_63a43a4
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6325b00)
    }
}
