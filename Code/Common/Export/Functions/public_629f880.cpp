#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f880);
CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);

PROC_DECLARE(0x629f880, internal_629f880, public_629f880);
extern "C" NAKED register_t __cdecl internal_629f880()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        call public_62b5e00
        fsubr dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [esi+0x74]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629f880)
    }
}
