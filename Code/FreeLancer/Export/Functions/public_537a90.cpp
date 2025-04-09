#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537a90);

#define public_537aa5 _public_537aa5

PROC_DECLARE(0x537a90, internal_537a90, public_537a90);
extern "C" NAKED register_t __cdecl internal_537a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x12C
        je public_537aa5
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c71cc]
        public_537aa5 : nop
        mov ecx, offset public_6789a4
        jmp dword ptr ds : [public_5c60c0]
        UNREACHABLE_TRAP(0x537a90)
    }
}

#undef public_537aa5
