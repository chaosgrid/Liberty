#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);

PROC_DECLARE(0x6eb2a60, internal_6eb2a60, public_6eb2a60);
extern "C" NAKED register_t __cdecl internal_6eb2a60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6eb2a60)
    }
}
