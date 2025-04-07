#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a01e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0e70);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);

#define public_62a01ef _public_62a01ef

PROC_DECLARE(0x62a01e0, internal_62a01e0, public_62a01e0);
extern "C" NAKED register_t __cdecl internal_62a01e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_62a01ef
        call public_62af640
        public_62a01ef : nop
        mov ecx, esi
        pop esi
        jmp public_62a0e70
        UNREACHABLE_TRAP(0x62a01e0)
    }
}

#undef public_62a01ef
