#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48910);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48908 _public_6b48908

PROC_DECLARE(0x6b488f0, internal_6b488f0, public_6b488f0);
extern "C" NAKED register_t __cdecl internal_6b488f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48910
        test byte ptr ss : [esp+8], 1
        je public_6b48908
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48908 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b488f0)
    }
}

#undef public_6b48908
