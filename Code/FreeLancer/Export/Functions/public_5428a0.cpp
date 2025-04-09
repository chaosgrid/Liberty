#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5428a0, internal_5428a0, public_5428a0);
extern "C" NAKED register_t __cdecl internal_5428a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        ret 4
        UNREACHABLE_TRAP(0x5428a0)
    }
}
