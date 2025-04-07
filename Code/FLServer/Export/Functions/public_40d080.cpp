#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418abc);

#define public_40d0a2 _public_40d0a2

PROC_DECLARE(0x40d080, internal_40d080, public_40d080);
extern "C" NAKED register_t __cdecl internal_40d080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_4260d0]
        test eax, eax
        mov ecx, offset public_4260b0
        je public_40d0a2
        push 5
        call public_418ab6
        mov eax, dword ptr ds : [public_4260d0]
        push eax
        call dword ptr ds : [public_41bbec]
        ret 
        public_40d0a2 : nop
        push 0
        push 0x96
        call public_418abc
        push 5
        mov ecx, offset public_4260b0
        call public_418ab6
        ret 
        UNREACHABLE_TRAP(0x40d080)
    }
}

#undef public_40d0a2
