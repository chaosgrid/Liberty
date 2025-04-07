#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eab0);

#define public_66213c7 _public_66213c7

PROC_DECLARE(0x66213b0, internal_66213b0, public_66213b0);
extern "C" NAKED register_t __cdecl internal_66213b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_66213c7
        test ecx, ecx
        je public_66213c7
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_661eab0
        public_66213c7 : nop
        ret 8
        UNREACHABLE_TRAP(0x66213b0)
    }
}

#undef public_66213c7
