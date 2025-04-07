#include "Common-PCH.h"

PROC_DECLARE(0x632d890, internal_632d890, public_632d890);
extern "C" NAKED register_t __cdecl internal_632d890()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x54], ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x60], ecx
        ret 
        UNREACHABLE_TRAP(0x632d890)
    }
}
