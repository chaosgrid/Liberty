#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48515);

PROC_DECLARE(0x6d48515, internal_6d48515, public_6d48515);
extern "C" NAKED register_t __cdecl internal_6d48515()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        movzx eax, byte ptr ds : [ecx]
        movzx edx, byte ptr ds : [ecx+1]
        shl eax, 8
        add eax, edx
        movzx edx, byte ptr ds : [ecx+2]
        movzx ecx, byte ptr ds : [ecx+3]
        shl eax, 8
        add eax, edx
        shl eax, 8
        add eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6d48515)
    }
}
