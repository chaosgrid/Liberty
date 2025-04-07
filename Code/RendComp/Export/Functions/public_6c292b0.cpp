#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c292b0);

PROC_DECLARE(0x6c292b0, internal_6c292b0, public_6c292b0);
extern "C" NAKED register_t __cdecl internal_6c292b0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6c361dc
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_6c36220
        mov dword ptr ds : [eax+4], offset public_6c3620c
        mov dword ptr ds : [eax+8], offset public_6c361fc
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        ret 
        UNREACHABLE_TRAP(0x6c292b0)
    }
}
