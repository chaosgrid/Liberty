#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f840);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4f853 _public_6b4f853

PROC_DECLARE(0x6b4f840, internal_6b4f840, public_6b4f840);
extern "C" NAKED register_t __cdecl internal_6b4f840()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_6b4f853
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4f853 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4f840)
    }
}

#undef public_6b4f853
