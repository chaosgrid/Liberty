#include "Common-PCH.h"

PROC_DECLARE(0x6273410, internal_6273410, public_6273410);
extern "C" NAKED register_t __cdecl internal_6273410()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        xor ecx, ecx
        push esi
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov esi, ecx
        lea edx, ds:[eax+0x30]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov byte ptr ds : [eax+0xA4], cl
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273410)
    }
}
