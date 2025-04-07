#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf1989 _public_6cf1989

PROC_DECLARE(0x6cf1970, internal_6cf1970, public_6cf1970);
extern "C" NAKED register_t __cdecl internal_6cf1970()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d643ec]
        test byte ptr ss : [esp+8], 1
        je public_6cf1989
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6cf1989 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf1970)
    }
}

#undef public_6cf1989
