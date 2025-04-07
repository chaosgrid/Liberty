#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6801da0);
CLANG_FORWARD_PROC_SYMBOL(public_6802730);

#define public_680275a _public_680275a

PROC_DECLARE(0x6802730, internal_6802730, public_6802730);
extern "C" NAKED register_t __cdecl internal_6802730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6801bd0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_680275a
        push esi
        call public_6801da0
        add esp, 4
        cmp eax, 0xFFFFFFF9
        jne public_680275a
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+8]
        pop esi
        ret 
        public_680275a : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802730)
    }
}

#undef public_680275a
