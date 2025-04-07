#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de9bc);

PROC_DECLARE(0x65de9bc, internal_65de9bc, public_65de9bc);
extern "C" NAKED register_t __cdecl internal_65de9bc()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[ecx+eax*4+0xC]
        push eax
        call dword ptr ds : [public_65e10ac]
        ret 
        UNREACHABLE_TRAP(0x65de9bc)
    }
}
