#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);

#define public_6f86dd9 _public_6f86dd9

PROC_DECLARE(0x6f86dc0, internal_6f86dc0, public_6f86dc0);
extern "C" NAKED register_t __cdecl internal_6f86dc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f86ac0
        test byte ptr ss : [esp+8], 1
        je public_6f86dd9
        push esi
        call dword ptr ds : [public_6fb312c]
        add esp, 4
        public_6f86dd9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f86dc0)
    }
}

#undef public_6f86dd9
