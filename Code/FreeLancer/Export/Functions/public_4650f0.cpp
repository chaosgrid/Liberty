#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4650f0);
CLANG_FORWARD_PROC_SYMBOL(public_465110);

#define public_465107 _public_465107

PROC_DECLARE(0x4650f0, internal_4650f0, public_4650f0);
extern "C" NAKED register_t __cdecl internal_4650f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_465107
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push edx
        call public_465110
        public_465107 : nop
        ret 
        UNREACHABLE_TRAP(0x4650f0)
    }
}

#undef public_465107
