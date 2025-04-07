#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afea0);
CLANG_FORWARD_PROC_SYMBOL(public_62afec0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);

#define public_62afeb8 _public_62afeb8

PROC_DECLARE(0x62afea0, internal_62afea0, public_62afea0);
extern "C" NAKED register_t __cdecl internal_62afea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62afec0
        test byte ptr ss : [esp+8], 1
        je public_62afeb8
        push esi
        call public_62fd570
        add esp, 4
        public_62afeb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62afea0)
    }
}

#undef public_62afeb8
