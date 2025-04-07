#include "Common-PCH.h"

PROC_DECLARE(0x63332f0, internal_63332f0, public_63332f0);
extern "C" NAKED register_t __cdecl internal_63332f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], offset public_63a4980
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x18], 0
        ret 0x14
        UNREACHABLE_TRAP(0x63332f0)
    }
}
