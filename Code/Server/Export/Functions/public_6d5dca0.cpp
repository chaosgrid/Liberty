#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dcc7 _public_6d5dcc7

PROC_DECLARE(0x6d5dca0, internal_6d5dca0, public_6d5dca0);
extern "C" NAKED register_t __cdecl internal_6d5dca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6d5dcc7
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        je public_6d5dcc7
        mov ecx, eax
        jmp dword ptr ds : [public_6d649cc]
        public_6d5dcc7 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d5dca0)
    }
}

#undef public_6d5dcc7
