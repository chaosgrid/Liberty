#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e340);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4e338 _public_6b4e338

PROC_DECLARE(0x6b4e320, internal_6b4e320, public_6b4e320);
extern "C" NAKED register_t __cdecl internal_6b4e320()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4e340
        test byte ptr ss : [esp+8], 1
        je public_6b4e338
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4e338 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4e320)
    }
}

#undef public_6b4e338
