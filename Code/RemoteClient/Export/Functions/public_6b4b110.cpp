#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b130);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4b128 _public_6b4b128

PROC_DECLARE(0x6b4b110, internal_6b4b110, public_6b4b110);
extern "C" NAKED register_t __cdecl internal_6b4b110()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4b130
        test byte ptr ss : [esp+8], 1
        je public_6b4b128
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4b128 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4b110)
    }
}

#undef public_6b4b128
