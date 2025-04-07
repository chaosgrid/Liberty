#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ec80);
CLANG_FORWARD_PROC_SYMBOL(public_40ee60);
CLANG_FORWARD_PROC_SYMBOL(public_418c54);

#define public_40f793 _public_40f793
#define public_40f7a2 _public_40f7a2

PROC_DECLARE(0x40f780, internal_40f780, public_40f780);
extern "C" NAKED register_t __cdecl internal_40f780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x2001
        jne public_40f793
        call public_40ee60
        ret 4
        public_40f793 : nop
        cmp eax, 0x2002
        jne public_40f7a2
        call public_40ec80
        ret 4
        public_40f7a2 : nop
        call public_418c54
        ret 4
        UNREACHABLE_TRAP(0x40f780)
    }
}

#undef public_40f793
#undef public_40f7a2
