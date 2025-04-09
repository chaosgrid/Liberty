#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2620);
CLANG_FORWARD_PROC_SYMBOL(public_4c2690);

#define public_5a6063 _public_5a6063
#define public_5a606d _public_5a606d

PROC_DECLARE(0x5a6040, internal_5a6040, public_5a6040);
extern "C" NAKED register_t __cdecl internal_5a6040()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6724b4]
        test ecx, ecx
        je public_5a606d
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673378]
        je public_5a6063
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_4c2620
        ret 0xC
        public_5a6063 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_4c2690
        public_5a606d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x5a6040)
    }
}

#undef public_5a6063
#undef public_5a606d
