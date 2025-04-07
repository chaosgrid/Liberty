#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629c820);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);

#define public_629cf47 _public_629cf47

PROC_DECLARE(0x629cf30, internal_629cf30, public_629cf30);
extern "C" NAKED register_t __cdecl internal_629cf30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_629cf47
        push esi
        call public_629c820
        mov dword ptr ds : [esi+0x4C], 0
        public_629cf47 : nop
        mov ecx, esi
        pop esi
        jmp public_629edf0
        UNREACHABLE_TRAP(0x629cf30)
    }
}

#undef public_629cf47
