#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_542870);

#define public_53ede2 _public_53ede2

PROC_DECLARE(0x53edc0, internal_53edc0, public_53edc0);
extern "C" NAKED register_t __cdecl internal_53edc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        je public_53ede2
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0xB8]
        push eax
        push 0xFFFFFFFF
        push 0
        call public_4f7d20
        public_53ede2 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        call public_542870
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53edc0)
    }
}

#undef public_53ede2
