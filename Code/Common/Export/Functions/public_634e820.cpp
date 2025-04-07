#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e820);

PROC_DECLARE(0x634e820, internal_634e820, public_634e820);
extern "C" NAKED register_t __cdecl internal_634e820()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 8
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[eax+eax*4]
        xor ecx, edx
        mov edx, ecx
        sar edx, 8
        mov eax, edx
        shl eax, 0xA
        sub eax, edx
        add eax, ecx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x634e820)
    }
}
