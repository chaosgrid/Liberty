#include "Common-PCH.h"

PROC_DECLARE(0x6294ff0, internal_6294ff0, public_6294ff0);
extern "C" NAKED register_t __cdecl internal_6294ff0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dx, word ptr ds : [ecx+8]
        mov word ptr ds : [eax+8], dx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], dl
        mov dl, byte ptr ds : [ecx+0x11]
        mov byte ptr ds : [eax+0x11], dl
        mov dl, byte ptr ds : [ecx+0x12]
        mov byte ptr ds : [eax+0x12], dl
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax], offset public_639ca04
        mov dword ptr ds : [eax+0x1C], edx
        mov ecx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax], offset public_639cbec
        ret 4
        UNREACHABLE_TRAP(0x6294ff0)
    }
}
