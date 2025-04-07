#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418576);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_401228 _public_401228

PROC_DECLARE(0x401210, internal_401210, public_401210);
extern "C" NAKED register_t __cdecl internal_401210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418576
        test byte ptr ss : [esp+8], 1
        je public_401228
        push esi
        call public_418978
        add esp, 4
        public_401228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x401210)
    }
}

#undef public_401228
