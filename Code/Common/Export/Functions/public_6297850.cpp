#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62995f0);

PROC_DECLARE(0x6297850, internal_6297850, public_6297850);
extern "C" NAKED register_t __cdecl internal_6297850()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62995f0
        mov dword ptr ds : [esi+0x26C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6297850)
    }
}
