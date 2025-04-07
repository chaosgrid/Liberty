#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611e00);

#define public_6614744 _public_6614744

PROC_DECLARE(0x6614720, internal_6614720, public_6614720);
extern "C" NAKED register_t __cdecl internal_6614720()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        je public_6614744
        test ecx, ecx
        je public_6614744
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_6611e00
        public_6614744 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x6614720)
    }
}

#undef public_6614744
