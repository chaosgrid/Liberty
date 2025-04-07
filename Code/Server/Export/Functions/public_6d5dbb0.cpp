#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dbc5 _public_6d5dbc5
#define public_6d5dbd7 _public_6d5dbd7

PROC_DECLARE(0x6d5dbb0, internal_6d5dbb0, public_6d5dbb0);
extern "C" NAKED register_t __cdecl internal_6d5dbb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5dbc5
        or eax, 0xFFFFFFFF
        ret 
        public_6d5dbc5 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5dbd7
        or eax, 0xFFFFFFFF
        ret 
        public_6d5dbd7 : nop
        mov eax, dword ptr ds : [eax+0xC0]
        ret 
        UNREACHABLE_TRAP(0x6d5dbb0)
    }
}

#undef public_6d5dbc5
#undef public_6d5dbd7
