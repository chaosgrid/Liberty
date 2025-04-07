#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48220);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48218 _public_6b48218

PROC_DECLARE(0x6b48200, internal_6b48200, public_6b48200);
extern "C" NAKED register_t __cdecl internal_6b48200()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48220
        test byte ptr ss : [esp+8], 1
        je public_6b48218
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48218 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48200)
    }
}

#undef public_6b48218
