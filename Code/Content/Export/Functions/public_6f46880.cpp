#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46880);

#define public_6f46896 _public_6f46896

PROC_DECLARE(0x6f46880, internal_6f46880, public_6f46880);
extern "C" NAKED register_t __cdecl internal_6f46880()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f46896
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x17
        rep movsd
        pop esi
        public_6f46896 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f46880)
    }
}

#undef public_6f46896
