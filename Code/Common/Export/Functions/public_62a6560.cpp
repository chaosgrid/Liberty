#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6560);

PROC_DECLARE(0x62a6560, internal_62a6560, public_62a6560);
extern "C" NAKED register_t __cdecl internal_62a6560()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], 0xBF800000
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        ret 
        UNREACHABLE_TRAP(0x62a6560)
    }
}
