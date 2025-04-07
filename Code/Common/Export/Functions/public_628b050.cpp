#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ad60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628b068 _public_628b068

PROC_DECLARE(0x628b050, internal_628b050, public_628b050);
extern "C" NAKED register_t __cdecl internal_628b050()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634ad60
        test byte ptr ss : [esp+8], 1
        je public_628b068
        push esi
        call public_6391d5a
        add esp, 4
        public_628b068 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628b050)
    }
}

#undef public_628b068
