#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);

PROC_DECLARE(0x6ecad80, internal_6ecad80, public_6ecad80);
extern "C" NAKED register_t __cdecl internal_6ecad80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        call public_6f1b610
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecad80)
    }
}
