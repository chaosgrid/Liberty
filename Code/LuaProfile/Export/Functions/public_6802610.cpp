#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802580);
CLANG_FORWARD_PROC_SYMBOL(public_6802610);
CLANG_FORWARD_PROC_SYMBOL(public_6802650);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

#define public_6802621 _public_6802621
#define public_6802640 _public_6802640

PROC_DECLARE(0x6802610, internal_6802610, public_6802610);
extern "C" NAKED register_t __cdecl internal_6802610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6802621
        push eax
        call public_6805a80
        add esp, 4
        public_6802621 : nop
        push esi
        push eax
        call public_6802580
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6802640
        push 2
        call public_6802650
        add esp, 4
        lea eax, ds:[esi+0x28]
        pop esi
        ret 
        public_6802640 : nop
        push 0
        call public_6802650
        add esp, 4
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802610)
    }
}

#undef public_6802621
#undef public_6802640
