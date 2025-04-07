#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6720);

PROC_DECLARE(0x65f6720, internal_65f6720, public_65f6720);
extern "C" NAKED register_t __cdecl internal_65f6720()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x30], ecx
        or cl, 1
        mov byte ptr ds : [eax+0x30], cl
        ret 
        UNREACHABLE_TRAP(0x65f6720)
    }
}
