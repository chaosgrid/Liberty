#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6327ac9 _public_6327ac9

PROC_DECLARE(0x6327ab0, internal_6327ab0, public_6327ab0);
extern "C" NAKED register_t __cdecl internal_6327ab0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a4610
        je public_6327ac9
        push esi
        call public_6391d5a
        add esp, 4
        public_6327ac9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6327ab0)
    }
}

#undef public_6327ac9
