#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb520);
CLANG_FORWARD_PROC_SYMBOL(public_62bb580);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bb538 _public_62bb538

PROC_DECLARE(0x62bb520, internal_62bb520, public_62bb520);
extern "C" NAKED register_t __cdecl internal_62bb520()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62bb580
        test byte ptr ss : [esp+8], 1
        je public_62bb538
        push esi
        call public_6391d5a
        add esp, 4
        public_62bb538 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bb520)
    }
}

#undef public_62bb538
