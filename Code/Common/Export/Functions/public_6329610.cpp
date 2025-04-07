#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329610);

PROC_DECLARE(0x6329610, internal_6329610, public_6329610);
extern "C" NAKED register_t __cdecl internal_6329610()
{
    __asm
    {
        mov dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], offset public_63a3e54
        ret 
        UNREACHABLE_TRAP(0x6329610)
    }
}
