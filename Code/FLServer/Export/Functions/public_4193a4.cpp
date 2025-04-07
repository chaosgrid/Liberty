#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4193a4);
CLANG_FORWARD_PROC_SYMBOL(public_419642);

#define public_4193b5 _public_4193b5

PROC_DECLARE(0x4193a4, internal_4193a4, public_4193a4);
extern "C" NAKED register_t __cdecl internal_4193a4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_4193b5
        xor eax, eax
        ret 
        public_4193b5 : nop
        jmp public_419642
        UNREACHABLE_TRAP(0x4193a4)
    }
}

#undef public_4193b5
