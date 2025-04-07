#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67155e0);

#define public_6711663 _public_6711663
#define public_6711669 _public_6711669

PROC_DECLARE(0x6711650, internal_6711650, public_6711650);
extern "C" NAKED register_t __cdecl internal_6711650()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edx, esi
        shr edx, 0x10
        cmp eax, ecx
        je public_6711669
        public_6711663 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6711663
        public_6711669 : nop
        and edx, 0xFFFF
        and esi, 0xFFFF
        push edx
        push esi
        call public_67155e0
        add esp, 8
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6711650)
    }
}

#undef public_6711663
#undef public_6711669
