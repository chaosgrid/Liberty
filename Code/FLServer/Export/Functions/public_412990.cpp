#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cf80);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4129a8 _public_4129a8

PROC_DECLARE(0x412990, internal_412990, public_412990);
extern "C" NAKED register_t __cdecl internal_412990()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40cf80
        test byte ptr ss : [esp+8], 1
        je public_4129a8
        push esi
        call public_418978
        add esp, 4
        public_4129a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x412990)
    }
}

#undef public_4129a8
