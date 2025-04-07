#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5cb5);

#define public_6ad5cc9 _public_6ad5cc9

PROC_DECLARE(0x6ad5cb5, internal_6ad5cb5, public_6ad5cb5);
extern "C" NAKED register_t __cdecl internal_6ad5cb5()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        jge public_6ad5cc9
        add eax, 0x1C
        push eax
        call public_6ad237a
        pop ecx
        ret 
        public_6ad5cc9 : nop
        mov eax, dword ptr ss : [esp+8]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_6ada114]
        ret 
        UNREACHABLE_TRAP(0x6ad5cb5)
    }
}

#undef public_6ad5cc9
