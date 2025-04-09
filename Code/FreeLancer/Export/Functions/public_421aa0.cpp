#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421aa0);

PROC_DECLARE(0x421aa0, internal_421aa0, public_421aa0);
extern "C" NAKED register_t __cdecl internal_421aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx ecx, byte ptr ds : [eax]
        movzx edx, byte ptr ds : [eax+1]
        movzx eax, byte ptr ds : [eax+2]
        or ecx, 0xFFFFFF00
        shl ecx, 8
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        mov dword ptr ds : [public_616898], ecx
        ret 
        UNREACHABLE_TRAP(0x421aa0)
    }
}
