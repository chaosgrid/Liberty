#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42cbd9 _public_42cbd9

PROC_DECLARE(0x42cbc0, internal_42cbc0, public_42cbc0);
extern "C" NAKED register_t __cdecl internal_42cbc0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5ca36c
        je public_42cbd9
        push esi
        call public_5b7e1d
        add esp, 4
        public_42cbd9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42cbc0)
    }
}

#undef public_42cbd9
