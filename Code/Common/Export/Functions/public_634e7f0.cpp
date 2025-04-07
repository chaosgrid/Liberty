#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e7f0);

PROC_DECLARE(0x634e7f0, internal_634e7f0, public_634e7f0);
extern "C" NAKED register_t __cdecl internal_634e7f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0xC]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[eax+eax*4]
        xor ecx, dword ptr ds : [edx+8]
        mov edx, ecx
        sar edx, 8
        mov eax, edx
        shl eax, 0xA
        sub eax, edx
        add eax, ecx
        ret 
        UNREACHABLE_TRAP(0x634e7f0)
    }
}
