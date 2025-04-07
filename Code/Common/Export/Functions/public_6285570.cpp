#include "Common-PCH.h"

PROC_DECLARE(0x6285570, internal_6285570, public_6285570);
extern "C" NAKED register_t __cdecl internal_6285570()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6285570)
    }
}
