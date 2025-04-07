#include "Common-PCH.h"

PROC_DECLARE(0x6292c00, internal_6292c00, public_6292c00);
extern "C" NAKED register_t __cdecl internal_6292c00()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639c6b0
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [eax+0xC], dl
        mov cl, byte ptr ds : [ecx+0xD]
        mov byte ptr ds : [eax+0xD], cl
        mov dword ptr ds : [eax], offset public_639c6cc
        ret 4
        UNREACHABLE_TRAP(0x6292c00)
    }
}
