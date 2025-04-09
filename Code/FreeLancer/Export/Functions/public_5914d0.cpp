#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5914e9 _public_5914e9

PROC_DECLARE(0x5914d0, internal_5914d0, public_5914d0);
extern "C" NAKED register_t __cdecl internal_5914d0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5e534c
        je public_5914e9
        push esi
        call public_5b7e1d
        add esp, 4
        public_5914e9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5914d0)
    }
}

#undef public_5914e9
