#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7970);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c7990 _public_4c7990

PROC_DECLARE(0x4c7970, internal_4c7970, public_4c7970);
extern "C" NAKED register_t __cdecl internal_4c7970()
{
    __asm
    {
        call public_54baf0
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_4c7990
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c648c]
        public_4c7990 : nop
        ret 
        UNREACHABLE_TRAP(0x4c7970)
    }
}

#undef public_4c7990
