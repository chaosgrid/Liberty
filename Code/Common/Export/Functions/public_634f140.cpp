#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634f140);

PROC_DECLARE(0x634f140, internal_634f140, public_634f140);
extern "C" NAKED register_t __cdecl internal_634f140()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 8
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, eax
        xor ecx, edx
        mov edx, ecx
        sar edx, 8
        mov eax, edx
        shl eax, 0xA
        sub eax, edx
        add eax, ecx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x634f140)
    }
}
