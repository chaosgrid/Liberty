#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f30);
CLANG_FORWARD_PROC_SYMBOL(public_65dce3f);

#define public_65d8f4d _public_65d8f4d

PROC_DECLARE(0x65d8f30, internal_65d8f30, public_65d8f30);
extern "C" NAKED register_t __cdecl internal_65d8f30()
{
    __asm
    {
        call public_65dce3f
        mov eax, dword ptr ds : [public_65e3440]
        cmp eax, 0xFFFFFFFF
        je public_65d8f4d
        push eax
        call dword ptr ds : [public_65e1070]
        or dword ptr ds : [public_65e3440], 0xFFFFFFFF
        public_65d8f4d : nop
        ret 
        UNREACHABLE_TRAP(0x65d8f30)
    }
}

#undef public_65d8f4d
