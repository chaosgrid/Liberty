#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cec0);

#define public_630cecd _public_630cecd

PROC_DECLARE(0x630cec0, internal_630cec0, public_630cec0);
extern "C" NAKED register_t __cdecl internal_630cec0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x80]
        test eax, eax
        jne public_630cecd
        ret 8
        public_630cecd : nop
        mov ecx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push 1
        push ecx
        call dword ptr ds : [public_6399244]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x630cec0)
    }
}

#undef public_630cecd
