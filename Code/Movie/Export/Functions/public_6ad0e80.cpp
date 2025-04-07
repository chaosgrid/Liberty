#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0e80);

#define public_6ad0e91 _public_6ad0e91

PROC_DECLARE(0x6ad0e80, internal_6ad0e80, public_6ad0e80);
extern "C" NAKED register_t __cdecl internal_6ad0e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6ad0e91
        xor eax, eax
        ret 
        public_6ad0e91 : nop
        jmp public_6ad089c
        UNREACHABLE_TRAP(0x6ad0e80)
    }
}

#undef public_6ad0e91
