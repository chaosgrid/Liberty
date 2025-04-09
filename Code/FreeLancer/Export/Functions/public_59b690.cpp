#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59b690);

PROC_DECLARE(0x59b690, internal_59b690, public_59b690);
extern "C" NAKED register_t __cdecl internal_59b690()
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
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x59b690)
    }
}
