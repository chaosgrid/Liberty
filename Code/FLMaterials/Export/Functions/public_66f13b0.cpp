#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f13b0);

PROC_DECLARE(0x66f13b0, internal_66f13b0, public_66f13b0);
extern "C" NAKED register_t __cdecl internal_66f13b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x1C], 4
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x28], cl
        ret 
        UNREACHABLE_TRAP(0x66f13b0)
    }
}
