#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33b86);
CLANG_FORWARD_PROC_SYMBOL(public_6d33cdd);
CLANG_FORWARD_PROC_SYMBOL(public_6d33dc5);
CLANG_FORWARD_PROC_SYMBOL(public_6d40278);

#define public_6d33f2b _public_6d33f2b
#define public_6d33f3a _public_6d33f3a

PROC_DECLARE(0x6d33f13, internal_6d33f13, public_6d33f13);
extern "C" NAKED register_t __cdecl internal_6d33f13()
{
    __asm
    {
        push ebp
        mov ebp, esp
        call public_6d40278
        test eax, eax
        je public_6d33f2b
        mov eax, offset _public_6d33dc5
        mov dword ptr ds : [public_6d6c938], eax
        jmp public_6d33f3a
        public_6d33f2b : nop
        mov dword ptr ds : [public_6d6c938], offset _public_6d33b86
        mov eax, offset _public_6d33cdd
        public_6d33f3a : nop
        mov dword ptr ds : [public_6d6c93c], eax
        pop ebp
        jmp eax
        UNREACHABLE_TRAP(0x6d33f13)
    }
}

#undef public_6d33f2b
#undef public_6d33f3a
