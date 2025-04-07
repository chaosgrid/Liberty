#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418abc);

#define public_40d042 _public_40d042

PROC_DECLARE(0x40d020, internal_40d020, public_40d020);
extern "C" NAKED register_t __cdecl internal_40d020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_425fb8]
        test eax, eax
        mov ecx, offset public_425f98
        je public_40d042
        push 5
        call public_418ab6
        mov eax, dword ptr ds : [public_425fb8]
        push eax
        call dword ptr ds : [public_41bbec]
        ret 
        public_40d042 : nop
        push 0
        push 0x97
        call public_418abc
        push 5
        mov ecx, offset public_425f98
        call public_418ab6
        ret 
        UNREACHABLE_TRAP(0x40d020)
    }
}

#undef public_40d042
