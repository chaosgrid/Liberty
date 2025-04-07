#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407560);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_407558 _public_407558

PROC_DECLARE(0x407540, internal_407540, public_407540);
extern "C" NAKED register_t __cdecl internal_407540()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_407560
        test byte ptr ss : [esp+8], 1
        je public_407558
        push esi
        call public_418978
        add esp, 4
        public_407558 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x407540)
    }
}

#undef public_407558
