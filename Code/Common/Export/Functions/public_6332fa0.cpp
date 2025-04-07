#include "Common-PCH.h"

PROC_DECLARE(0x6332fa0, internal_6332fa0, public_6332fa0);
extern "C" NAKED register_t __cdecl internal_6332fa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ds : [public_640a768]
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax], offset public_63a498c
        ret 4
        UNREACHABLE_TRAP(0x6332fa0)
    }
}
