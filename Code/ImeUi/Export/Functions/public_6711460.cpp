#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715260);

#define public_671146c _public_671146c

PROC_DECLARE(0x6711460, internal_6711460, public_6711460);
extern "C" NAKED register_t __cdecl internal_6711460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_671146c
        xor al, al
        ret 4
        public_671146c : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6715260
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6711460)
    }
}

#undef public_671146c
