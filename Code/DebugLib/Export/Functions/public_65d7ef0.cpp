#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65dba76);
CLANG_FORWARD_PROC_SYMBOL(public_65dbaaf);

#define public_65d7f07 _public_65d7f07
#define public_65d7f0c _public_65d7f0c

PROC_DECLARE(0x65d7ef0, internal_65d7ef0, public_65d7ef0);
extern "C" NAKED register_t __cdecl internal_65d7ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e612c]
        cmp eax, 1
        je public_65d7f07
        test eax, eax
        jne public_65d7f0c
        cmp dword ptr ds : [public_65e6130], 1
        jne public_65d7f0c
        public_65d7f07 : nop
        call public_65dba76
        public_65d7f0c : nop
        push dword ptr ss : [esp+4]
        call public_65dbaaf
        push 0xFF
        call dword ptr ds : [public_65e3400]
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d7ef0)
    }
}

#undef public_65d7f07
#undef public_65d7f0c
