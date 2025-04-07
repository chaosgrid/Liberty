#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43390);

#define public_6d433be _public_6d433be

PROC_DECLARE(0x6d43390, internal_6d43390, public_6d43390);
extern "C" NAKED register_t __cdecl internal_6d43390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f618]
        test eax, eax
        je public_6d433be
        push eax
        call dword ptr ds : [public_6d64a90]
        mov dword ptr ds : [public_6d8f618], 0
        mov dword ptr ds : [public_6d8f620], 0
        mov dword ptr ds : [public_6d8f624], 0
        public_6d433be : nop
        ret 
        UNREACHABLE_TRAP(0x6d43390)
    }
}

#undef public_6d433be
