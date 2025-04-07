#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5d07);

#define public_6ad5d1b _public_6ad5d1b

PROC_DECLARE(0x6ad5d07, internal_6ad5d07, public_6ad5d07);
extern "C" NAKED register_t __cdecl internal_6ad5d07()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        jge public_6ad5d1b
        add eax, 0x1C
        push eax
        call public_6ad23db
        pop ecx
        ret 
        public_6ad5d1b : nop
        mov eax, dword ptr ss : [esp+8]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_6ada104]
        ret 
        UNREACHABLE_TRAP(0x6ad5d07)
    }
}

#undef public_6ad5d1b
