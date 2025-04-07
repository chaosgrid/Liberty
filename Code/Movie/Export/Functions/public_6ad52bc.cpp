#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad52bc);

#define public_6ad52d4 _public_6ad52d4

PROC_DECLARE(0x6ad52bc, internal_6ad52bc, public_6ad52bc);
extern "C" NAKED register_t __cdecl internal_6ad52bc()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae1090]
        test eax, eax
        je public_6ad52d4
        push dword ptr ss : [esp+4]
        call eax
        test eax, eax
        pop ecx
        je public_6ad52d4
        push 1
        pop eax
        ret 
        public_6ad52d4 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ad52bc)
    }
}

#undef public_6ad52d4
