#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6803660);

#define public_6803674 _public_6803674
#define public_680368b _public_680368b

PROC_DECLARE(0x6803660, internal_6803660, public_6803660);
extern "C" NAKED register_t __cdecl internal_6803660()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov dword ptr ss : [esp+4], 0xFFFFFFFD
        je public_680368b
        public_6803674 : nop
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_6802fa0
        mov esi, dword ptr ds : [esi]
        add esp, 4
        test esi, esi
        jne public_6803674
        public_680368b : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6803660)
    }
}

#undef public_6803674
#undef public_680368b
