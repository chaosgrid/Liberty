#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ba0);

PROC_DECLARE(0x421ba0, internal_421ba0, public_421ba0);
extern "C" NAKED register_t __cdecl internal_421ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx edx, byte ptr ds : [eax+1]
        xor ecx, ecx
        mov ch, byte ptr ds : [eax+3]
        mov cl, byte ptr ds : [eax]
        movzx eax, byte ptr ds : [eax+2]
        shl ecx, 8
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        mov dword ptr ds : [public_616898], ecx
        ret 
        UNREACHABLE_TRAP(0x421ba0)
    }
}
