#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b34b0);

PROC_DECLARE(0x5b34b0, internal_5b34b0, public_5b34b0);
extern "C" NAKED register_t __cdecl internal_5b34b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        and eax, 0xFF
        shl ecx, 8
        or eax, ecx
        shl eax, 0x10
        and edx, 0xFFFF
        or eax, edx
        ret 
        UNREACHABLE_TRAP(0x5b34b0)
    }
}
