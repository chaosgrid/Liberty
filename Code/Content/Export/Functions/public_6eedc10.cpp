#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedc10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eedc24 _public_6eedc24
#define public_6eedc34 _public_6eedc34

PROC_DECLARE(0x6eedc10, internal_6eedc10, public_6eedc10);
extern "C" NAKED register_t __cdecl internal_6eedc10()
{
    __asm
    {
        push 0x28
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6eedc24
        mov ecx, eax
        public_6eedc24 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6eedc34
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6eedc34 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6eedc10)
    }
}

#undef public_6eedc24
#undef public_6eedc34
