#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd1e8);

#define public_65dd200 _public_65dd200

PROC_DECLARE(0x65dd1e8, internal_65dd1e8, public_65dd1e8);
extern "C" NAKED register_t __cdecl internal_65dd1e8()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e63d8]
        test eax, eax
        je public_65dd200
        push dword ptr ss : [esp+4]
        call eax
        test eax, eax
        pop ecx
        je public_65dd200
        push 1
        pop eax
        ret 
        public_65dd200 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x65dd1e8)
    }
}

#undef public_65dd200
