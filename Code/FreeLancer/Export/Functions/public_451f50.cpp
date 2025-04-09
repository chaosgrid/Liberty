#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_451f50);

PROC_DECLARE(0x451f50, internal_451f50, public_451f50);
extern "C" NAKED register_t __cdecl internal_451f50()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0xFFFFFFFF
        mov byte ptr ds : [eax+0xC], cl
        ret 
        UNREACHABLE_TRAP(0x451f50)
    }
}
