#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b52580);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48048 _public_6b48048

PROC_DECLARE(0x6b48030, internal_6b48030, public_6b48030);
extern "C" NAKED register_t __cdecl internal_6b48030()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b52580
        test byte ptr ss : [esp+8], 1
        je public_6b48048
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48048 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48030)
    }
}

#undef public_6b48048
