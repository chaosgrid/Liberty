#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49230);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b49228 _public_6b49228

PROC_DECLARE(0x6b49210, internal_6b49210, public_6b49210);
extern "C" NAKED register_t __cdecl internal_6b49210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b49230
        test byte ptr ss : [esp+8], 1
        je public_6b49228
        push esi
        call public_6b6a092
        add esp, 4
        public_6b49228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b49210)
    }
}

#undef public_6b49228
