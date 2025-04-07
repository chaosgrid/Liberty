#include "Common-PCH.h"

PROC_DECLARE(0x62bd3d0, internal_62bd3d0, public_62bd3d0);
extern "C" NAKED register_t __cdecl internal_62bd3d0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        mov ecx, 0xBF800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x14], dl
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax], offset public_639ef0c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bd3d0)
    }
}
