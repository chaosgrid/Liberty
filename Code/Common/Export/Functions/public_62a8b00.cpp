#include "Common-PCH.h"

PROC_DECLARE(0x62a8b00, internal_62a8b00, public_62a8b00);
extern "C" NAKED register_t __cdecl internal_62a8b00()
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
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_639e124
        ret 4
        UNREACHABLE_TRAP(0x62a8b00)
    }
}
