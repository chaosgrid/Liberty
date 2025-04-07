#include "Common-PCH.h"

PROC_DECLARE(0x62e1570, internal_62e1570, public_62e1570);
extern "C" NAKED register_t __cdecl internal_62e1570()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        ret 0x10
        UNREACHABLE_TRAP(0x62e1570)
    }
}
