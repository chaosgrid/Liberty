#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4d388 _public_6f4d388

PROC_DECLARE(0x6f4d370, internal_6f4d370, public_6f4d370);
extern "C" NAKED register_t __cdecl internal_6f4d370()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef0570
        test byte ptr ss : [esp+8], 1
        je public_6f4d388
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f4d388 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4d370)
    }
}

#undef public_6f4d388
