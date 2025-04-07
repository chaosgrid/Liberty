#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6880);

#define public_6eb6896 _public_6eb6896

PROC_DECLARE(0x6eb6880, internal_6eb6880, public_6eb6880);
extern "C" NAKED register_t __cdecl internal_6eb6880()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6eb6896
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xB
        rep movsd
        pop esi
        public_6eb6896 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eb6880)
    }
}

#undef public_6eb6896
