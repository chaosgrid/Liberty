#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);

#define public_407068 _public_407068

PROC_DECLARE(0x407050, internal_407050, public_407050);
extern "C" NAKED register_t __cdecl internal_407050()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418c24
        test byte ptr ss : [esp+8], 1
        je public_407068
        push esi
        call public_418978
        add esp, 4
        public_407068 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x407050)
    }
}

#undef public_407068
