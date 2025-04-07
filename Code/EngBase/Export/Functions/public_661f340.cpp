#include "EngBase-PCH.h"

PROC_DECLARE(0x661f340, internal_661f340, public_661f340);
extern "C" NAKED register_t __cdecl internal_661f340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        ret 8
        UNREACHABLE_TRAP(0x661f340)
    }
}
