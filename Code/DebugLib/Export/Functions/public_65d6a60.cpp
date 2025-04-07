#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d6a60);

#define public_65d6a73 _public_65d6a73

PROC_DECLARE(0x65d6a60, internal_65d6a60, public_65d6a60);
extern "C" NAKED register_t __cdecl internal_65d6a60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], offset public_65e1448
        cmp eax, 0xFFFFFFFF
        je public_65d6a73
        jmp public_65d5520
        public_65d6a73 : nop
        ret 
        UNREACHABLE_TRAP(0x65d6a60)
    }
}

#undef public_65d6a73
