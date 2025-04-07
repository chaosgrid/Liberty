#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67050);

PROC_DECLARE(0x6f67050, internal_6f67050, public_6f67050);
extern "C" NAKED register_t __cdecl internal_6f67050()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x30], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x40], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6f67050)
    }
}
