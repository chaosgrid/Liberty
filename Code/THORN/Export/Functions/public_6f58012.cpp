#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58012);
CLANG_FORWARD_PROC_SYMBOL(public_6f58348);

#define public_6f58023 _public_6f58023

PROC_DECLARE(0x6f58012, internal_6f58012, public_6f58012);
extern "C" NAKED register_t __cdecl internal_6f58012()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6f58023
        xor eax, eax
        ret 
        public_6f58023 : nop
        jmp public_6f58348
        UNREACHABLE_TRAP(0x6f58012)
    }
}

#undef public_6f58023
