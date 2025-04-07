#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612920);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6614ce0 _public_6614ce0

PROC_DECLARE(0x6614cc0, internal_6614cc0, public_6614cc0);
extern "C" NAKED register_t __cdecl internal_6614cc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6614580
        test al, al
        je public_6614ce0
        mov ecx, dword ptr ss : [esp+8]
        call public_6612920
        public_6614ce0 : nop
        ret 8
        UNREACHABLE_TRAP(0x6614cc0)
    }
}

#undef public_6614ce0
