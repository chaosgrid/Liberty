#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8850);

PROC_DECLARE(0x62e8850, internal_62e8850, public_62e8850);
extern "C" NAKED register_t __cdecl internal_62e8850()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x68]
        ret 
        UNREACHABLE_TRAP(0x62e8850)
    }
}
