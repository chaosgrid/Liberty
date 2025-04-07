#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7c70);

PROC_DECLARE(0x65f7c70, internal_65f7c70, public_65f7c70);
extern "C" NAKED register_t __cdecl internal_65f7c70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 4
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x65f7c70)
    }
}
