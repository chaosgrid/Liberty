#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716ad4);
CLANG_FORWARD_PROC_SYMBOL(public_6716c74);

#define public_6716ae5 _public_6716ae5

PROC_DECLARE(0x6716ad4, internal_6716ad4, public_6716ad4);
extern "C" NAKED register_t __cdecl internal_6716ad4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6716ae5
        xor eax, eax
        ret 
        public_6716ae5 : nop
        jmp public_6716c74
        UNREACHABLE_TRAP(0x6716ad4)
    }
}

#undef public_6716ae5
