#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8298c);

PROC_DECLARE(0x6f82670, internal_6f82670, public_6f82670);
extern "C" NAKED register_t __cdecl internal_6f82670()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_6f830e0]
        call public_6f8298c
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2C], al
        ret 8
        UNREACHABLE_TRAP(0x6f82670)
    }
}
