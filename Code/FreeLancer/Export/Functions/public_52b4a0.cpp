#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);

#define public_52b4bf _public_52b4bf

PROC_DECLARE(0x52b4a0, internal_52b4a0, public_52b4a0);
extern "C" NAKED register_t __cdecl internal_52b4a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x28]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        je public_52b4bf
        push 0
        mov ecx, eax
        call public_40e960
        public_52b4bf : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6854]
        UNREACHABLE_TRAP(0x52b4a0)
    }
}

#undef public_52b4bf
