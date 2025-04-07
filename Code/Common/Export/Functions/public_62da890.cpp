#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da890);

PROC_DECLARE(0x62da890, internal_62da890, public_62da890);
extern "C" NAKED register_t __cdecl internal_62da890()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0x3E4CCCCD
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0x40000000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], 0x3FC00000
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], 0x3F000000
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        ret 
        UNREACHABLE_TRAP(0x62da890)
    }
}
