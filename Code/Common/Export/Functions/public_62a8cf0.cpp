#include "Common-PCH.h"

PROC_DECLARE(0x62a8cf0, internal_62a8cf0, public_62a8cf0);
extern "C" NAKED register_t __cdecl internal_62a8cf0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], offset public_639e0d0
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [eax+0x14], dl
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], edx
        mov ecx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax], offset public_639e164
        ret 4
        UNREACHABLE_TRAP(0x62a8cf0)
    }
}
