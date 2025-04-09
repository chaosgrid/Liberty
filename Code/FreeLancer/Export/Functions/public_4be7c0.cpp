#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4be7d9 _public_4be7d9

PROC_DECLARE(0x4be7c0, internal_4be7c0, public_4be7c0);
extern "C" NAKED register_t __cdecl internal_4be7c0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5d6028
        je public_4be7d9
        push esi
        call public_5b7e1d
        add esp, 4
        public_4be7d9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4be7c0)
    }
}

#undef public_4be7d9
