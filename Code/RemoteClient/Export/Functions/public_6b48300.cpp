#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48320);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48318 _public_6b48318

PROC_DECLARE(0x6b48300, internal_6b48300, public_6b48300);
extern "C" NAKED register_t __cdecl internal_6b48300()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48320
        test byte ptr ss : [esp+8], 1
        je public_6b48318
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48318 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48300)
    }
}

#undef public_6b48318
