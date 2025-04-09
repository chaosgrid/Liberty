#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58a520);

PROC_DECLARE(0x58a520, internal_58a520, public_58a520);
extern "C" NAKED register_t __cdecl internal_58a520()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x334]
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x58a520)
    }
}
