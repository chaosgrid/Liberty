#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b43870);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b43918 _public_6b43918

PROC_DECLARE(0x6b43900, internal_6b43900, public_6b43900);
extern "C" NAKED register_t __cdecl internal_6b43900()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b43870
        test byte ptr ss : [esp+8], 1
        je public_6b43918
        push esi
        call public_6b6a092
        add esp, 4
        public_6b43918 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b43900)
    }
}

#undef public_6b43918
