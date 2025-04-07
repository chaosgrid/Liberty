#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629c820);

#define public_629cf87 _public_629cf87

PROC_DECLARE(0x629cf70, internal_629cf70, public_629cf70);
extern "C" NAKED register_t __cdecl internal_629cf70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_629cf87
        push esi
        call public_629c820
        mov dword ptr ds : [esi+0x4C], 0
        public_629cf87 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629cf70)
    }
}

#undef public_629cf87
