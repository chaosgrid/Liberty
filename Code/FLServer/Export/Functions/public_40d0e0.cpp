#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418abc);

#define public_40d102 _public_40d102

PROC_DECLARE(0x40d0e0, internal_40d0e0, public_40d0e0);
extern "C" NAKED register_t __cdecl internal_40d0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_42a638]
        test eax, eax
        mov ecx, offset public_42a618
        je public_40d102
        push 5
        call public_418ab6
        mov eax, dword ptr ds : [public_42a638]
        push eax
        call dword ptr ds : [public_41bbec]
        ret 
        public_40d102 : nop
        push 0
        push 0x92
        call public_418abc
        push 5
        mov ecx, offset public_42a618
        call public_418ab6
        ret 
        UNREACHABLE_TRAP(0x40d0e0)
    }
}

#undef public_40d102
