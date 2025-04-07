#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6285e29 _public_6285e29

PROC_DECLARE(0x6285e10, internal_6285e10, public_6285e10);
extern "C" NAKED register_t __cdecl internal_6285e10()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_639bac8
        je public_6285e29
        push esi
        call public_6391d5a
        add esp, 4
        public_6285e29 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6285e10)
    }
}

#undef public_6285e29
