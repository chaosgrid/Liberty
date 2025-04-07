#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71000);

#define public_6b73f19 _public_6b73f19

PROC_DECLARE(0x6b73f00, internal_6b73f00, public_6b73f00);
extern "C" NAKED register_t __cdecl internal_6b73f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b71000
        test byte ptr ss : [esp+8], 1
        je public_6b73f19
        push esi
        call dword ptr ds : [public_6b79070]
        add esp, 4
        public_6b73f19 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b73f00)
    }
}

#undef public_6b73f19
