#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b610);
CLANG_FORWARD_PROC_SYMBOL(public_4188b2);

#define public_40b62f _public_40b62f
#define public_40b635 _public_40b635

PROC_DECLARE(0x40b610, internal_40b610, public_40b610);
extern "C" NAKED register_t __cdecl internal_40b610()
{
    __asm
    {
        push esi
        push 0
        call dword ptr ds : [public_41bc2c]
        mov ecx, dword ptr ds : [public_41bb70]
        mov esi, eax
        call public_4188b2
        test esi, esi
        je public_40b62f
        cmp esi, 1
        jne public_40b635
        public_40b62f : nop
        call dword ptr ds : [public_41bc28]
        public_40b635 : nop
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40b610)
    }
}

#undef public_40b62f
#undef public_40b635
