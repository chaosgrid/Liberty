#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295990);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);

#define public_62957ff _public_62957ff

PROC_DECLARE(0x62957f0, internal_62957f0, public_62957f0);
extern "C" NAKED register_t __cdecl internal_62957f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        je public_62957ff
        call public_6295990
        public_62957ff : nop
        mov ecx, esi
        pop esi
        jmp public_629af40
        UNREACHABLE_TRAP(0x62957f0)
    }
}

#undef public_62957ff
