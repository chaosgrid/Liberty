#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_546d00);

#define public_53bfa9 _public_53bfa9

PROC_DECLARE(0x53bf80, internal_53bf80, public_53bf80);
extern "C" NAKED register_t __cdecl internal_53bf80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53bfa9
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        mov ecx, eax
        call public_546d00
        public_53bfa9 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x53bf80)
    }
}

#undef public_53bfa9
