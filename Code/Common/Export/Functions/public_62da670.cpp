#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da670);

PROC_DECLARE(0x62da670, internal_62da670, public_62da670);
extern "C" NAKED register_t __cdecl internal_62da670()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x24], cl
        mov dword ptr ds : [eax+0x38], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x3C], 0x3F490FDB
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], 0x40000000
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], edx
        mov dword ptr ds : [eax+0x58], 0x40000000
        mov dword ptr ds : [eax+0x5C], 0x3ECCCCCD
        mov dword ptr ds : [eax+0x10], 0x43C80000
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax], 0x40800000
        ret 
        UNREACHABLE_TRAP(0x62da670)
    }
}
